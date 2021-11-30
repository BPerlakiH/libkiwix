/*
 * Copyright 2019 Matthieu Gautier <mgautier@kymeria.fr>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU  General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

#include "name_mapper.h"
#include "library.h"
#include "tools/regexTools.h"
#include <iostream>

namespace kiwix {

HumanReadableNameMapper::HumanReadableNameMapper(kiwix::Library& library, bool withAlias) {
  for (auto& bookId: library.filter(kiwix::Filter().local(true).valid(true))) {
    auto& currentBook = library.getBookById(bookId);
    auto bookName = currentBook.getHumanReadableIdFromPath();
    m_idToName[bookId] = bookName;
    m_nameToId[bookName] = bookId;

    if (!withAlias)
      continue;

    auto aliasName = replaceRegex(bookName, "", "_[[:digit:]]{4}-[[:digit:]]{2}$");
    if (aliasName == bookName) {
      continue;
    }
    if (m_nameToId.find(aliasName) == m_nameToId.end()) {
      m_nameToId[aliasName] = bookId;
    } else {
      auto alreadyPresentPath = library.getBookById(m_nameToId[aliasName]).getPath();
      std::cerr << "Path collision: " << alreadyPresentPath
                << " and " << currentBook.getPath()
                << " can't share the same URL path '" << aliasName << "'."
                << " Therefore, only " << alreadyPresentPath
                << " will be served." << std::endl;
    }
  }
}

std::string HumanReadableNameMapper::getNameForId(const std::string& id) const {
  return m_idToName.at(id);
}

std::string HumanReadableNameMapper::getIdForName(const std::string& name) const {
  return m_nameToId.at(name);
}

////////////////////////////////////////////////////////////////////////////////
// NameMapperProxy
////////////////////////////////////////////////////////////////////////////////

NameMapperProxy::NameMapperProxy(Library& lib)
  : library(lib)
{
  update();
}

void NameMapperProxy::update()
{
  const auto newNameMapper = new HumanReadableNameMapper(library, false);
  std::lock_guard<std::mutex> lock(mutex);
  nameMapper.reset(newNameMapper);
}

NameMapperProxy::NameMapperHandle
NameMapperProxy::currentNameMapper() const
{
  // Return a copy of the handle to the current NameMapper object. It will
  // ensure that the object survives any call to NameMapperProxy::update()
  // made before the completion of any pending operation on that object.
  std::lock_guard<std::mutex> lock(mutex);
  return nameMapper;
}

std::string NameMapperProxy::getNameForId(const std::string& id) const
{
  // Ensure that the current nameMapper object survives a concurrent call
  // to NameMapperProxy::update()
  return currentNameMapper()->getNameForId(id);
}

std::string NameMapperProxy::getIdForName(const std::string& name) const
{
  // Ensure that the current nameMapper object survives a concurrent call
  // to NameMapperProxy::update()
  return currentNameMapper()->getIdForName(name);
}

}
