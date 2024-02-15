/*
 * Copyright (C) 2019 Matthieu Gautier <mgautier@kymeria.fr>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * is provided AS IS, WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, and
 * NON-INFRINGEMENT.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 *
 */

#include "gtest/gtest.h"
#include <string>

const char * sampleOpdsStream = R"(
<feed xmlns="http://www.w3.org/2005/Atom"
      xmlns:dc="http://purl.org/dc/terms/"
      xmlns:opds="http://opds-spec.org/2010/catalog">
  <id>00000000-0000-0000-0000-000000000000</id>
  <entry>
    <title>Encyclopédie de la Tunisie</title>
    <name>wikipedia_fr_tunisie</name>
    <flavour>novid</flavour>
    <id>urn:uuid:0c45160e-f917-760a-9159-dfe3c53cdcdd</id>
    <icon>/meta?name=favicon&amp;content=wikipedia_fr_tunisie_novid_2018-10</icon>
    <updated>2018-10-08T00:00::00:Z</updated>
    <dc:issued>2018-10-08T00:00::00:Z</dc:issued>
    <language>fra</language>
    <summary>Le meilleur de Wikipédia sur la Tunisie</summary>
    <tags>wikipedia;novid;_ftindex</tags>
    <link type="text/html" href="/wikipedia_fr_tunisie_novid_2018-10" />
    <author>
      <name>Wikipedia</name>
    </author>
    <publisher>
      <name>Wikipedia Publishing House</name>
    </publisher>
    <link rel="http://opds-spec.org/acquisition/open-access" type="application/x-zim" href="http://download.kiwix.org/zim/wikipedia/wikipedia_fr_tunisie_novid_2018-10.zim.meta4" length="90030080" />
    <link rel="http://opds-spec.org/image/thumbnail" type="image/png" href="/meta?name=favicon&amp;content=wikipedia_fr_tunisie_novid_2018-10" />
    <mediaCount>1100</mediaCount>
    <articleCount>172</articleCount>
  </entry>
  <entry>
    <title>Encyclopédie de la Tunisie</title>
    <name>wikipedia_fr_tunisie</name>
    <flavour>novid</flavour>
    <id>urn:uuid:0c45160e-f917-760a-9159-dfe3c53cdcdd_updated1yearlater</id>
    <updated>2019-10-08T00:00::00:Z</updated>
    <dc:issued>2019-10-08T00:00::00:Z</dc:issued>
    <language>fra</language>
    <summary>Le meilleur de Wikipédia sur la Tunisie. Updated in 2019</summary>
    <author>
      <name>Wikipedia</name>
    </author>
    <link rel="http://opds-spec.org/acquisition/open-access" type="application/x-zim" href="http://download.kiwix.org/zim/wikipedia/wikipedia_fr_tunisie_novid_2018-10.zim.meta4" length="90030080" />
  </entry>
  <entry>
    <title>Encyclopédie de la Tunisie</title>
    <name>wikipedia_fr_tunisie</name>
    <flavour>other_flavour</flavour>
    <id>urn:uuid:0c45160e-f917-760a-9159-dfe3c53cdcdd_flavour</id>
    <updated>2018-10-08T00:00::00:Z</updated>
    <dc:issued>2018-10-08T00:00::00:Z</dc:issued>
    <language>fra</language>
    <summary>Le meilleur de Wikipédia sur la Tunisie. With another flavour</summary>
    <author>
      <name>Wikipedia</name>
    </author>
    <link rel="http://opds-spec.org/acquisition/open-access" type="application/x-zim" href="http://download.kiwix.org/zim/wikipedia/wikipedia_fr_tunisie_novid_2018-10.zim.meta4" length="90030080" />
  </entry>
  <entry>
    <title>Encyclopédie de la Tunisie</title>
    <name>wikipedia_fr_tunisie</name>
    <flavour>other_flavour</flavour>
    <id>urn:uuid:0c45160e-f917-760a-9159-dfe3c53cdcdd_updated1yearlater_flavour</id>
    <updated>2019-10-08T00:00::00:Z</updated>
    <dc:issued>2019-10-08T00:00::00:Z</dc:issued>
    <language>fra</language>
    <summary>Le meilleur de Wikipédia sur la Tunisie. Updated in 2019, and other flavour</summary>
    <author>
      <name>Wikipedia</name>
    </author>
    <link rel="http://opds-spec.org/acquisition/open-access" type="application/x-zim" href="http://download.kiwix.org/zim/wikipedia/wikipedia_fr_tunisie_novid_2018-10.zim.meta4" length="90030080" />
  </entry>
  <entry>
    <title>Tania Louis</title>
    <id>urn:uuid:0d0bcd57-d3f6-cb22-44cc-a723ccb4e1b2</id>
    <name>biologie-tout-compris_fr_all</name>
    <flavour>full</flavour>
    <icon>/meta?name=favicon&amp;content=biologie-tout-compris_fr_all_2018-06</icon>
    <updated>2018-06-23T00:00::00:Z</updated>
    <language>fra</language>
    <summary>Tania Louis videos</summary>
    <tags>youtube;_category:category_defined_via_tags_only</tags>
    <link type="text/html" href="/biologie-tout-compris_fr_all_2018-06" />
    <author>
      <name>Tania Louis</name>
    </author>
    <link rel="http://opds-spec.org/acquisition/open-access" type="application/x-zim" href="http://download.kiwix.org/zim/other/biologie-tout-compris_fr_all_2018-06.zim.meta4" length="2172639232" />
    <link rel="http://opds-spec.org/image/thumbnail" type="image/png" href="/meta?name=favicon&amp;content=biologie-tout-compris_fr_all_2018-06" />
  </entry>
  <entry>
    <title>Wikiquote</title>
    <id>urn:uuid:0ea1cde6-441d-6c58-f2c7-21c2838e659f</id>
    <name>wikiquote_fr_all</name>
    <flavour>full</flavour>
    <icon>/meta?name=favicon&amp;content=wikiquote_fr_all_nopic_2019-06</icon>
    <updated>2019-06-05T00:00::00:Z</updated>
    <language>fra,ita</language>
    <summary>Une page de Wikiquote, le recueil des citations libres.</summary>
    <category>category_defined_via_category_element_only</category>
    <tags>wikiquote;nopic</tags>
    <link type="text/html" href="/wikiquote_fr_all_nopic_2019-06" />
    <author>
      <name>Wikiquote</name>
    </author>
    <link rel="http://opds-spec.org/acquisition/open-access" type="application/x-zim" href="http://download.kiwix.org/zim/wikiquote/wikiquote_fr_all_nopic_2019-06.zim.meta4" length="21368832" />
    <link rel="http://opds-spec.org/image/thumbnail" type="image/png" href="/meta?name=favicon&amp;content=wikiquote_fr_all_nopic_2019-06" />
  </entry>
  <entry>
    <title>Géographie par Wikipédia</title>
    <id>urn:uuid:1123e574-6eef-6d54-28fc-13e4caeae474</id>
    <name>wikipedia_fr_geography</name>
    <flavour>full</flavour>
    <icon>/meta?name=favicon&amp;content=wikipedia_fr_geography_nopic_2019-06</icon>
    <updated>2019-06-02T00:00::00:Z</updated>
    <summary>Une sélection d'articles de Wikipédia sur la géographie</summary>
    <language>fra</language>
    <category>category_element_overrides_tags</category>
    <tags>wikipedia;nopic;_category:tags_override_category_element</tags>
    <link type="text/html" href="/wikipedia_fr_geography_nopic_2019-06" />
    <author>
      <name>Wikipedia</name>
    </author>
    <link rel="http://opds-spec.org/acquisition/open-access" type="application/x-zim" href="http://download.kiwix.org/zim/wikipedia/wikipedia_fr_geography_nopic_2019-06.zim.meta4" length="157586432" />
    <link rel="http://opds-spec.org/image/thumbnail" type="image/png" href="/meta?name=favicon&amp;content=wikipedia_fr_geography_nopic_2019-06" />
  </entry>
  <entry>
    <title>Mathématiques</title>
    <id>urn:uuid:14829621-c490-c376-0792-9de558b57efa</id>
    <name>wikipedia_fr_mathematics</name>
    <flavour>novid</flavour>
    <icon>/meta?name=favicon&amp;content=wikipedia_fr_mathematics_nopic_2019-05</icon>
    <updated>2019-05-13T00:00::00:Z</updated>
    <language>fra</language>
    <summary>Une</summary>
    <tags>wikipedia;nopic;_category:tags_override_category_element</tags>
    <category>category_element_overrides_tags</category>
    <link type="text/html" href="/wikipedia_fr_mathematics_nopic_2019-05" />
    <author>
      <name>Wikipedia</name>
    </author>
    <link rel="http://opds-spec.org/acquisition/open-access" type="application/x-zim" href="http://download.kiwix.org/zim/wikipedia/wikipedia_fr_mathematics_nopic_2019-05.zim.meta4" length="223368192" />
    <link rel="http://opds-spec.org/image/thumbnail" type="image/png" href="/meta?name=favicon&amp;content=wikipedia_fr_mathematics_nopic_2019-05" />
  </entry>
<entry>
    <title>Granblue Fantasy Wiki</title>
    <id>urn:uuid:006cbd1b-16d8-b00d-a584-c1ae110a94ed</id>
    <name>grandbluefantasy_en_all</name>
    <flavour>novid</flavour>
    <icon>/meta?name=favicon&amp;content=granbluefantasy_en_all_all_nopic_2018-10</icon>
    <updated>2018-10-14T00:00::00:Z</updated>
    <language>eng</language>
    <summary>Granblue Fantasy Wiki</summary>
    <tags>gbf;nopic;_ftindex</tags>
    <link type="text/html" href="/granbluefantasy_en_all_all_nopic_2018-10" />
    <author>
      <name>Wiki</name>
    </author>
    <link rel="http://opds-spec.org/acquisition/open-access" type="application/x-zim" href="http://download.kiwix.org/zim/other/granbluefantasy_en_all_all_nopic_2018-10.zim.meta4" length="23197696" />
    <link rel="http://opds-spec.org/image/thumbnail" type="image/png" href="/meta?name=favicon&amp;content=granbluefantasy_en_all_all_nopic_2018-10" />
  </entry>
  <entry>
    <title>Movies &amp; TV Stack Exchange</title>
    <id>urn:uuid:00f37b00-f4da-0675-995a-770f9c72903e</id>
    <name>movies.stackexchange.com_en_all</name>
    <flavour>novid</flavour>
    <icon>/meta?name=favicon&amp;content=movies.stackexchange.com_en_all_2019-02</icon>
    <updated>2019-02-03T00:00::00:Z</updated>
    <language>eng</language>
    <summary>Q&amp;A for movie and tv enthusiasts</summary>
    <tags>stackexchange;_ftindex</tags>
    <link type="text/html" href="/movies.stackexchange.com_en_all_2019-02" />
    <author>
      <name>Movies &amp; TV Stack Exchange</name>
    </author>
    <link rel="http://opds-spec.org/acquisition/open-access" type="application/x-zim" href="http://download.kiwix.org/zim/stack_exchange/movies.stackexchange.com_en_all_2019-02.zim.meta4" length="859463680" />
    <link rel="http://opds-spec.org/image/thumbnail" type="image/png" href="/meta?name=favicon&amp;content=movies.stackexchange.com_en_all_2019-02" />
  </entry>
  <entry>
    <title>TED"talks" - Business</title>
    <id>urn:uuid:0189d9be-2fd0-b4b6-7300-20fab0b5cdc8</id>
    <name>ted_en_business</name>
    <flavour>nodet</flavour>
    <icon>/meta?name=favicon&amp;content=ted_en_business_2018-07</icon>
    <updated>2018-07-23T00:00::00:Z</updated>
    <language>eng</language>
    <summary>Ideas worth spreading</summary>
    <tags></tags>
    <link type="text/html" href="/ted_en_business_2018-07" />
    <author>
      <name>TED</name>
    </author>
    <link rel="http://opds-spec.org/acquisition/open-access" type="application/x-zim" href="http://download.kiwix.org/zim/ted/ted_en_business_2018-07.zim.meta4" length="8855827456" />
    <link rel="http://opds-spec.org/image/thumbnail" type="image/png" href="/meta?name=favicon&amp;content=ted_en_business_2018-07" />
  </entry>
  <entry>
    <title>Business talks about TED</title>
    <id>Dummy id </id>
    <name>speak_business</name>
    <flavour>nodet</flavour>
    <icon>/meta?name=favicon&amp;content=ted_en_business_2018-07</icon>
    <updated>2018-08-23T00:00::00:Z</updated>
    <language>eng</language>
    <summary>Ideas worth spreading</summary>
    <tags></tags>
    <link type="text/html" href="/ted_en_business_2018-07" />
    <author>
      <name>TED</name>
    </author>
    <link rel="http://opds-spec.org/acquisition/open-access" type="application/x-zim" href="http://download.kiwix.org/zim/ted/ted_en_business_2018-07.zim.meta4" length="8855827456" />
    <link rel="http://opds-spec.org/image/thumbnail" type="image/png" href="/meta?name=favicon&amp;content=ted_en_business_2018-07" />
  </entry>
  <entry>
    <title>Mythology &amp; Folklore Stack Exchange</title>
    <id>urn:uuid:028055ac-4acc-1d54-65e0-a96de45e1b22</id>
    <name>mythology.stackexchange.com_en_all</name>
    <flavour>novid</flavour>
    <icon>/meta?name=favicon&amp;content=mythology.stackexchange.com_en_all_2019-02</icon>
    <updated>2019-02-03T00:00::00:Z</updated>
    <language>eng</language>
    <summary>Q&amp;A for enthusiasts and scholars of mythology and folklore</summary>
    <tags>stackexchange;_ftindex</tags>
    <link type="text/html" href="/mythology.stackexchange.com_en_all_2019-02" />
    <author>
      <name>Mythology &amp; Folklore Stack Exchange</name>
    </author>
    <link rel="http://opds-spec.org/acquisition/open-access" type="application/x-zim" href="http://download.kiwix.org/zim/stack_exchange/mythology.stackexchange.com_en_all_2019-02.zim.meta4" length="47005696" />
    <link rel="http://opds-spec.org/image/thumbnail" type="image/png" href="/meta?name=favicon&amp;content=mythology.stackexchange.com_en_all_2019-02" />
  </entry>
  <entry>
    <title>Islam Stack Exchange</title>
    <id>urn:uuid:02e9c7ff-36fc-9c6e-6ac7-cd7085989029</id>
    <name>islam.stackexchange.com_en_all</name>
    <flavour>novid</flavour>
    <icon>/meta?name=favicon&amp;content=islam.stackexchange.com_en_all_2019-01</icon>
    <updated>2019-01-31T00:00::00:Z</updated>
    <language>eng</language>
    <summary>Q&amp;A for Muslims, experts in Islam, and those interested in learning more about Islam</summary>
    <tags>stackexchange;_ftindex</tags>
    <link type="text/html" href="/islam.stackexchange.com_en_all_2019-01" />
    <author>
      <name>Islam Stack Exchange</name>
    </author>
    <link rel="http://opds-spec.org/acquisition/open-access" type="application/x-zim" href="http://download.kiwix.org/zim/stack_exchange/islam.stackexchange.com_en_all_2019-01.zim.meta4" length="135346176" />
    <link rel="http://opds-spec.org/image/thumbnail" type="image/png" href="/meta?name=favicon&amp;content=islam.stackexchange.com_en_all_2019-01" />
  </entry>
</feed>

)";

const char sampleLibraryXML[] = R"(
<library version="1.0">
  <book
        id="raycharles"
        path="./zimfile.zim"
        url="https://github.com/kiwix/libkiwix/raw/master/test/data/zimfile.zim"
        title="Ray Charles"
        description="Wikipedia articles about Ray Charles"
        language="eng,spa"
        creator="Wikipedia"
        publisher="Kiwix"
        date="2020-03-31"
        name="wikipedia_en_ray_charles"
        tags="wikipedia;_category:wikipedia;_pictures:no"
        articleCount="284"
        mediaCount="2"
        size="556"
      ></book>
  <book
        id="example"
        path="./example.zim"
        title="An example ZIM archive"
        description="An eXaMpLe book added to the catalog via XML"
        language="deu"
        creator="Wikibooks"
        publisher="Kiwix & Some Enthusiasts"
        date="2021-04-11"
        name="wikibooks.de"
        tags="unittest;wikibooks;_category:wikibooks"
        articleCount="12"
        mediaCount="0"
        size="126"
      ></book>
</library>
)";

#include "../include/library.h"
#include "../include/manager.h"
#include "../include/book.h"
#include "../include/bookmark.h"

namespace
{

typedef std::vector<std::string> Langs;

TEST(LibraryOpdsImportTest, allInOne)
{
  auto lib = kiwix::Library::create();
  kiwix::Manager manager(lib);
  manager.readOpds(sampleOpdsStream, "library-opds-import.unittests.dev");

  EXPECT_EQ(14U, lib->getBookCount(true, true));

  {
  const kiwix::Book& book1 = lib->getBookById("0c45160e-f917-760a-9159-dfe3c53cdcdd");

  EXPECT_EQ(book1.getTitle(), "Encyclopédie de la Tunisie");
  EXPECT_EQ(book1.getName(), "wikipedia_fr_tunisie");
  EXPECT_EQ(book1.getFlavour(), "novid");
  EXPECT_EQ(book1.getLanguages(), Langs{ "fra" });
  EXPECT_EQ(book1.getCommaSeparatedLanguages(), "fra");
  EXPECT_EQ(book1.getDate(), "2018-10-08");
  EXPECT_EQ(book1.getDescription(), "Le meilleur de Wikipédia sur la Tunisie");
  EXPECT_EQ(book1.getCreator(), "Wikipedia");
  EXPECT_EQ(book1.getPublisher(), "Wikipedia Publishing House");
  EXPECT_EQ(book1.getTags(), "wikipedia;novid;_ftindex");
  EXPECT_EQ(book1.getCategory(), "");
  EXPECT_EQ(book1.getUrl(), "http://download.kiwix.org/zim/wikipedia/wikipedia_fr_tunisie_novid_2018-10.zim.meta4");
  EXPECT_EQ(book1.getSize(), 90030080UL);
  EXPECT_EQ(book1.getMediaCount(), 1100U); // Roman MC (MediaCount) is 1100
  EXPECT_EQ(book1.getArticleCount(), 172U); // Hex AC (ArticleCount) is 172

  const auto illustration = book1.getIllustration(48);
  EXPECT_EQ(illustration->width, 48U);
  EXPECT_EQ(illustration->height, 48U);
  EXPECT_EQ(illustration->mimeType, "image/png");
  EXPECT_EQ(illustration->url, "library-opds-import.unittests.dev/meta?name=favicon&content=wikipedia_fr_tunisie_novid_2018-10");
  }

  {
  const kiwix::Book& book2 = lib->getBookById("0189d9be-2fd0-b4b6-7300-20fab0b5cdc8");
  EXPECT_EQ(book2.getTitle(), "TED\"talks\" - Business");
  EXPECT_EQ(book2.getName(), "ted_en_business");
  EXPECT_EQ(book2.getFlavour(), "nodet");
  EXPECT_EQ(book2.getLanguages(), Langs{ "eng" });
  EXPECT_EQ(book2.getCommaSeparatedLanguages(), "eng");
  EXPECT_EQ(book2.getDate(), "2018-07-23");
  EXPECT_EQ(book2.getDescription(), "Ideas worth spreading");
  EXPECT_EQ(book2.getCreator(), "TED");
  EXPECT_EQ(book2.getPublisher(), "");
  EXPECT_EQ(book2.getTags(), "");
  EXPECT_EQ(book2.getCategory(), "");
  EXPECT_EQ(book2.getUrl(), "http://download.kiwix.org/zim/ted/ted_en_business_2018-07.zim.meta4");
  EXPECT_EQ(book2.getSize(), 8855827456UL);
  EXPECT_EQ(book2.getMediaCount(), 0U);
  EXPECT_EQ(book2.getArticleCount(), 0U);

  const auto illustration = book2.getIllustration(48);
  EXPECT_EQ(illustration->width, 48U);
  EXPECT_EQ(illustration->height, 48U);
  EXPECT_EQ(illustration->mimeType, "image/png");
  EXPECT_EQ(illustration->url, "library-opds-import.unittests.dev/meta?name=favicon&content=ted_en_business_2018-07");
  }
}

class LibraryTest : public ::testing::Test {
 protected:
  typedef kiwix::Library::BookIdCollection BookIdCollection;
  typedef std::vector<std::string> TitleCollection;

  LibraryTest(): lib(kiwix::Library::create()) {}

  void SetUp() override {
     kiwix::Manager manager(lib);
     manager.readOpds(sampleOpdsStream, "foo.urlHost");
     manager.readXml(sampleLibraryXML, false, "./test/library.xml", true);
  }

  kiwix::Bookmark createBookmark(const std::string &id, const std::string& url="", const std::string& title="") {
    kiwix::Bookmark bookmark;
    bookmark.setBookId(id);
    bookmark.setUrl(url);
    bookmark.setTitle(title);
    return bookmark;
  };

  kiwix::Bookmark createBookmark(const kiwix::Book& book, const std::string& url="", const std::string& title="") {
    kiwix::Bookmark bookmark(book, url, title);
    return bookmark;
  };

  TitleCollection ids2Titles(const BookIdCollection& ids) {
    TitleCollection titles;
    for ( const auto& bookId : ids ) {
      titles.push_back(lib->getBookById(bookId).getTitle());
    }
    std::sort(titles.begin(), titles.end());
    return titles;
  }

  std::shared_ptr<kiwix::Library> lib;
};

TEST_F(LibraryTest, createBookMark)
{
  auto bookId = "0c45160e-f917-760a-9159-dfe3c53cdcdd";
  auto book = lib->getBookById(bookId);

  auto bookmark = createBookmark(book, "/a/url", "A title");

  EXPECT_EQ(bookmark.getUrl(), "/a/url");
  EXPECT_EQ(bookmark.getTitle(), "A title");
  EXPECT_EQ(bookmark.getBookId(), bookId);
  EXPECT_EQ(bookmark.getBookName(), book.getName());
  EXPECT_EQ(bookmark.getBookName(), "wikipedia_fr_tunisie");
  EXPECT_EQ(bookmark.getBookTitle(), book.getTitle());
  EXPECT_EQ(bookmark.getDate(), book.getDate());
  EXPECT_EQ(bookmark.getBookFlavour(), book.getFlavour());
  EXPECT_EQ(bookmark.getLanguage(), book.getCommaSeparatedLanguages());
}

TEST_F(LibraryTest, getBookMarksTest)
{
    auto bookId1 = "0c45160e-f917-760a-9159-dfe3c53cdcdd";
    auto bookId2 = "0189d9be-2fd0-b4b6-7300-20fab0b5cdc8";

    auto book1 = lib->getBookById(bookId1);
    auto book2 = lib->getBookById(bookId2);

    lib->addBookmark(createBookmark(book1));
    lib->addBookmark(createBookmark("invalid-book-id"));
    lib->addBookmark(createBookmark(book2));
    auto onlyValidBookmarks = lib->getBookmarks();
    auto allBookmarks = lib->getBookmarks(false);

    EXPECT_EQ(onlyValidBookmarks[0].getBookId(), bookId1);
    EXPECT_EQ(onlyValidBookmarks[1].getBookId(), bookId2);

    EXPECT_EQ(allBookmarks[0].getBookId(), bookId1);
    EXPECT_EQ(allBookmarks[1].getBookId(), "invalid-book-id");
    EXPECT_EQ(allBookmarks[2].getBookId(), bookId2);
}

TEST_F(LibraryTest, bookmarksSerializationTest)
{
    auto bookId1 = lib->getBooksIds()[0];
    auto bookId2 = lib->getBooksIds()[1];

    auto book1 = lib->getBookById(bookId1);
    auto book2 = lib->getBookById(bookId2);

    // Create bookmarks using three different ways.
    lib->addBookmark(createBookmark(bookId1, "a/url", "Article title1"));
    lib->addBookmark(createBookmark("invalid-book-id", "another/url", "Unknown title"));
    lib->addBookmark(createBookmark(book2, "a/url/2", "Article title2"));

    lib->writeBookmarksToFile("__test__bookmarks.xml");

    // Build a new library
    auto new_lib = kiwix::Library::create();
    {
      kiwix::Manager manager(new_lib);
      manager.readOpds(sampleOpdsStream, "foo.urlHost");
      manager.readXml(sampleLibraryXML, false, "./test/library.xml", true);
      manager.readBookmarkFile("__test__bookmarks.xml");
    }
    std::remove("__test__bookmarks.xml");

    auto onlyValidBookmarks = new_lib->getBookmarks();
    auto allBookmarks = new_lib->getBookmarks(false);

    ASSERT_EQ(onlyValidBookmarks.size(), 2);
    EXPECT_EQ(onlyValidBookmarks[0].getBookId(), bookId1);
    EXPECT_EQ(onlyValidBookmarks[1].getBookId(), bookId2);

    ASSERT_EQ(allBookmarks.size(), 3);
    auto bookmark1 = allBookmarks[0];
    EXPECT_EQ(bookmark1.getBookId(), bookId1);
    EXPECT_EQ(bookmark1.getBookTitle(), book1.getTitle());
    EXPECT_EQ(bookmark1.getBookName(), book1.getName());
    EXPECT_EQ(bookmark1.getBookFlavour(), book1.getFlavour());
    EXPECT_EQ(bookmark1.getUrl(), "a/url");
    EXPECT_EQ(bookmark1.getTitle(), "Article title1");
    EXPECT_EQ(bookmark1.getLanguage(), book1.getCommaSeparatedLanguages());
    EXPECT_EQ(bookmark1.getDate(), book1.getDate());

    auto bookmark2 = allBookmarks[1];
    EXPECT_EQ(bookmark2.getBookId(), "invalid-book-id");
    EXPECT_EQ(bookmark2.getBookTitle(), "");
    EXPECT_EQ(bookmark2.getBookName(), "");
    EXPECT_EQ(bookmark2.getBookFlavour(), "");
    EXPECT_EQ(bookmark2.getUrl(), "another/url");
    EXPECT_EQ(bookmark2.getTitle(), "Unknown title");
    EXPECT_EQ(bookmark2.getLanguage(), "");
    EXPECT_EQ(bookmark2.getDate(), "");

    auto bookmark3 = allBookmarks[2];
    EXPECT_EQ(bookmark3.getBookId(), bookId2);
    EXPECT_EQ(bookmark3.getBookTitle(), book2.getTitle());
    EXPECT_EQ(bookmark3.getBookName(), book2.getName());
    EXPECT_EQ(bookmark3.getBookFlavour(), book2.getFlavour());
    EXPECT_EQ(bookmark3.getUrl(), "a/url/2");
    EXPECT_EQ(bookmark3.getTitle(), "Article title2");
    EXPECT_EQ(bookmark3.getLanguage(), book2.getCommaSeparatedLanguages());
    EXPECT_EQ(bookmark3.getDate(), book2.getDate());
}

TEST_F(LibraryTest, MigrateBookmark)
{
    std::string bookId1 = "0c45160e-f917-760a-9159-dfe3c53cdcdd";
    std::string bookId2 = "0189d9be-2fd0-b4b6-7300-20fab0b5cdc8";

    auto book1 = lib->getBookById(bookId1);
    auto book1Flavour = lib->getBookById(bookId1+"_flavour");
    auto book2 = lib->getBookById(bookId2);

    lib->addBookmark(createBookmark(book1));
    lib->addBookmark(createBookmark("invalid-book-id"));
    lib->addBookmark(createBookmark(book2));

    auto wrongIdBookmark = createBookmark(book1);
    wrongIdBookmark.setBookId("wrong-book-id");
    lib->addBookmark(wrongIdBookmark);

    auto wrongIdBookmarkNoName = createBookmark(book2);
    wrongIdBookmarkNoName.setBookId("wrong-book-id-noname");
    wrongIdBookmarkNoName.setBookName("");
    lib->addBookmark(wrongIdBookmarkNoName);

    auto wrongIdFlavourBookmark = createBookmark(book1Flavour);
    wrongIdFlavourBookmark.setBookId("wrong-book-flavour-id");
    lib->addBookmark(wrongIdFlavourBookmark);

    auto onlyValidBookmarks = lib->getBookmarks();
    auto allBookmarks = lib->getBookmarks(false);

    ASSERT_EQ(onlyValidBookmarks.size(), 2);
    EXPECT_EQ(onlyValidBookmarks[0].getBookId(), bookId1);
    EXPECT_EQ(onlyValidBookmarks[1].getBookId(), bookId2);

    ASSERT_EQ(allBookmarks.size(), 6);
    EXPECT_EQ(allBookmarks[0].getBookId(), bookId1);
    EXPECT_EQ(allBookmarks[1].getBookId(), "invalid-book-id");
    EXPECT_EQ(allBookmarks[2].getBookId(), bookId2);
    EXPECT_EQ(allBookmarks[3].getBookId(), "wrong-book-id");
    EXPECT_EQ(allBookmarks[4].getBookId(), "wrong-book-id-noname");
    EXPECT_EQ(allBookmarks[5].getBookId(), "wrong-book-flavour-id");

    ASSERT_EQ(lib->migrateBookmarks("no-existant-book"), 0);

    ASSERT_EQ(lib->migrateBookmarks(), std::make_tuple(3, 4));

    onlyValidBookmarks = lib->getBookmarks();
    allBookmarks = lib->getBookmarks(false);

    ASSERT_EQ(onlyValidBookmarks.size(), 5);
    EXPECT_EQ(onlyValidBookmarks[0].getBookId(), bookId1);
    EXPECT_EQ(onlyValidBookmarks[1].getBookId(), bookId2);
    EXPECT_EQ(onlyValidBookmarks[2].getBookId(), bookId1+"_updated1yearlater");
    EXPECT_EQ(onlyValidBookmarks[3].getBookId(), bookId2);
    EXPECT_EQ(onlyValidBookmarks[4].getBookId(), bookId1+"_updated1yearlater_flavour");

    ASSERT_EQ(allBookmarks.size(), 6);
    EXPECT_EQ(allBookmarks[0].getBookId(), bookId1);
    EXPECT_EQ(allBookmarks[1].getBookId(), "invalid-book-id");
    EXPECT_EQ(allBookmarks[2].getBookId(), bookId2);
    EXPECT_EQ(allBookmarks[3].getBookId(), bookId1+"_updated1yearlater");
    EXPECT_EQ(allBookmarks[4].getBookId(), bookId2);
    EXPECT_EQ(allBookmarks[5].getBookId(), bookId1+"_updated1yearlater_flavour");

    ASSERT_EQ(lib->migrateBookmarks(), std::make_tuple(0, 1));

    ASSERT_EQ(lib->migrateBookmarks(bookId1), 1);
    allBookmarks = lib->getBookmarks(false);
    ASSERT_EQ(allBookmarks.size(), 6);
    EXPECT_EQ(allBookmarks[0].getBookId(), bookId1+"_updated1yearlater");
    EXPECT_EQ(allBookmarks[1].getBookId(), "invalid-book-id");
    EXPECT_EQ(allBookmarks[2].getBookId(), bookId2);
    EXPECT_EQ(allBookmarks[3].getBookId(), bookId1+"_updated1yearlater");
    EXPECT_EQ(allBookmarks[4].getBookId(), bookId2);
    EXPECT_EQ(allBookmarks[5].getBookId(), bookId1+"_updated1yearlater_flavour");

    ASSERT_EQ(lib->migrateBookmarks(bookId1, bookId2), 0); // No more bookId1 bookmark

    ASSERT_EQ(lib->migrateBookmarks(bookId1+"_updated1yearlater", bookId2), 2);
    onlyValidBookmarks = lib->getBookmarks();
    allBookmarks = lib->getBookmarks(false);

    ASSERT_EQ(onlyValidBookmarks.size(), 5);
    EXPECT_EQ(onlyValidBookmarks[0].getBookId(), bookId2);
    EXPECT_EQ(onlyValidBookmarks[1].getBookId(), bookId2);
    EXPECT_EQ(onlyValidBookmarks[2].getBookId(), bookId2);
    EXPECT_EQ(onlyValidBookmarks[3].getBookId(), bookId2);
    EXPECT_EQ(onlyValidBookmarks[4].getBookId(), bookId1+"_updated1yearlater_flavour");

    ASSERT_EQ(allBookmarks.size(), 6);
    EXPECT_EQ(allBookmarks[0].getBookId(), bookId2);
    EXPECT_EQ(allBookmarks[1].getBookId(), "invalid-book-id");
    EXPECT_EQ(allBookmarks[2].getBookId(), bookId2);
    EXPECT_EQ(allBookmarks[3].getBookId(), bookId2);
    EXPECT_EQ(allBookmarks[4].getBookId(), bookId2);
    EXPECT_EQ(allBookmarks[5].getBookId(), bookId1+"_updated1yearlater_flavour");

    ASSERT_EQ(lib->migrateBookmarks("invalid-book-id", bookId1), 1);

    onlyValidBookmarks = lib->getBookmarks();
    allBookmarks = lib->getBookmarks(false);

    ASSERT_EQ(onlyValidBookmarks.size(), 6);
    EXPECT_EQ(onlyValidBookmarks[0].getBookId(), bookId2);
    EXPECT_EQ(onlyValidBookmarks[1].getBookId(), bookId1);
    EXPECT_EQ(onlyValidBookmarks[2].getBookId(), bookId2);
    EXPECT_EQ(onlyValidBookmarks[3].getBookId(), bookId2);
    EXPECT_EQ(onlyValidBookmarks[4].getBookId(), bookId2);
    EXPECT_EQ(onlyValidBookmarks[5].getBookId(), bookId1+"_updated1yearlater_flavour");


    ASSERT_EQ(allBookmarks.size(), 6);
    EXPECT_EQ(allBookmarks[0].getBookId(), bookId2);
    EXPECT_EQ(allBookmarks[1].getBookId(), bookId1);
    EXPECT_EQ(allBookmarks[2].getBookId(), bookId2);
    EXPECT_EQ(allBookmarks[3].getBookId(), bookId2);
    EXPECT_EQ(allBookmarks[4].getBookId(), bookId2);
    EXPECT_EQ(allBookmarks[5].getBookId(), bookId1+"_updated1yearlater_flavour");
}

TEST_F(LibraryTest, GetBestTargetBookIdOlder)
{
    auto bookId = std::string("0c45160e-f917-760a-9159-dfe3c53cdcdd");

    auto book = lib->getBookById(bookId);

    auto validBookmark = createBookmark(book);
    lib->addBookmark(validBookmark);

    ASSERT_EQ(lib->getBestTargetBookId(validBookmark, kiwix::UPGRADE_ONLY), bookId+"_updated1yearlater");
    ASSERT_EQ(lib->getBestTargetBookId(validBookmark, kiwix::ALLOW_DOWNGRADE), bookId+"_updated1yearlater");
}

TEST_F(LibraryTest, GetBestTargetBookIdNewer)
{
    auto bookId = std::string("0c45160e-f917-760a-9159-dfe3c53cdcdd_updated1yearlater");

    auto book = lib->getBookById(bookId);
    EXPECT_EQ(book.getDate(), "2019-10-08");

    auto validBookmark = createBookmark(book);
    // Make the bookmark more recent than any books in the library.
    // (But still pointing to existing book)
    validBookmark.setDate("2020-10-08");
    lib->addBookmark(validBookmark);

    //  The best book for the bookmark is bookId...
    ASSERT_EQ(lib->getBestTargetBookId(validBookmark, kiwix::UPGRADE_ONLY), bookId);
    // but there is not migration to do as the bookmark already point to it.
    ASSERT_EQ(lib->migrateBookmarks(bookId, kiwix::UPGRADE_ONLY), 0);

    ASSERT_EQ(lib->getBestTargetBookId(validBookmark, kiwix::ALLOW_DOWNGRADE), bookId);
}

TEST_F(LibraryTest, GetBestTargetBookIdInvalidOlder)
{
    auto bookId = std::string("0c45160e-f917-760a-9159-dfe3c53cdcdd");

    auto book = lib->getBookById(bookId);

    auto invalidBookmark = createBookmark(book);
    invalidBookmark.setBookId("invalid-book-id");
    lib->addBookmark(invalidBookmark);

    ASSERT_EQ(lib->getBestTargetBookId(invalidBookmark, kiwix::UPGRADE_ONLY), bookId+"_updated1yearlater");
    ASSERT_EQ(lib->getBestTargetBookId(invalidBookmark, kiwix::ALLOW_DOWNGRADE), bookId+"_updated1yearlater");
}

TEST_F(LibraryTest, GetBestTargetBookIdInvalidNewer)
{
    auto bookId = std::string("0c45160e-f917-760a-9159-dfe3c53cdcdd");

    auto book = lib->getBookById(bookId);
    EXPECT_EQ(book.getDate(), "2018-10-08");

    auto invalidBookmark = createBookmark(book);
    invalidBookmark.setBookId("invalid-book-id");
    invalidBookmark.setDate("2020-10-08");
    lib->addBookmark(invalidBookmark);

    ASSERT_EQ(lib->getBestTargetBookId(invalidBookmark, kiwix::UPGRADE_ONLY), "");
    ASSERT_EQ(lib->getBestTargetBookId(invalidBookmark, kiwix::ALLOW_DOWNGRADE), bookId+"_updated1yearlater");
}

TEST_F(LibraryTest, GetBestTargetBookIdName)
{
    ASSERT_EQ(lib->getBestTargetBookId("wikipedia_fr_tunisie"), "0c45160e-f917-760a-9159-dfe3c53cdcdd_updated1yearlater");
    ASSERT_EQ(lib->getBestTargetBookId("wikipedia_fr_tunisie", "novid"), "0c45160e-f917-760a-9159-dfe3c53cdcdd_updated1yearlater");
    ASSERT_EQ(lib->getBestTargetBookId("wikipedia_fr_tunisie", "other_flavour"), "0c45160e-f917-760a-9159-dfe3c53cdcdd_updated1yearlater_flavour");
    ASSERT_EQ(lib->getBestTargetBookId("wikipedia_fr_tunisie", "other_flavour", "2020-12-12"), "");
}

TEST_F(LibraryTest, sanityCheck)
{
  EXPECT_EQ(lib->getBookCount(true, true), 16U);
  EXPECT_EQ(lib->getBooksLanguages(),
            std::vector<std::string>({"deu", "eng", "fra", "ita", "spa"})
  );
  EXPECT_EQ(lib->getBooksCreators(), std::vector<std::string>({
      "Islam Stack Exchange",
      "Movies & TV Stack Exchange",
      "Mythology & Folklore Stack Exchange",
      "TED",
      "Tania Louis",
      "Wiki",
      "Wikibooks",
      "Wikipedia",
      "Wikiquote"
  }));
  EXPECT_EQ(lib->getBooksPublishers(), std::vector<std::string>({
      "",
      "Kiwix",
      "Kiwix & Some Enthusiasts",
      "Wikipedia Publishing House"
  }));
}

TEST_F(LibraryTest, categoryHandling)
{
  EXPECT_EQ("", lib->getBookById("0c45160e-f917-760a-9159-dfe3c53cdcdd").getCategory());
  EXPECT_EQ("category_defined_via_tags_only", lib->getBookById("0d0bcd57-d3f6-cb22-44cc-a723ccb4e1b2").getCategory());
  EXPECT_EQ("category_defined_via_category_element_only", lib->getBookById("0ea1cde6-441d-6c58-f2c7-21c2838e659f").getCategory());
  EXPECT_EQ("category_element_overrides_tags", lib->getBookById("1123e574-6eef-6d54-28fc-13e4caeae474").getCategory());
  EXPECT_EQ("category_element_overrides_tags", lib->getBookById("14829621-c490-c376-0792-9de558b57efa").getCategory());
}

TEST_F(LibraryTest, emptyFilter)
{
  const auto bookIds = lib->filter(kiwix::Filter());
  EXPECT_EQ(bookIds, lib->getBooksIds());
}

#define EXPECT_FILTER_RESULTS(f, ...)        \
        EXPECT_EQ(                           \
          ids2Titles(lib->filter(f)),         \
          TitleCollection({ __VA_ARGS__ })   \
        )

TEST_F(LibraryTest, filterLocal)
{
  EXPECT_FILTER_RESULTS(kiwix::Filter().local(true),
    "An example ZIM archive",
    "Ray Charles"
  );

  EXPECT_FILTER_RESULTS(kiwix::Filter().local(false),
    "Business talks about TED",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Granblue Fantasy Wiki",
    "Géographie par Wikipédia",
    "Islam Stack Exchange",
    "Mathématiques",
    "Movies & TV Stack Exchange",
    "Mythology & Folklore Stack Exchange",
    "TED\"talks\" - Business",
    "Tania Louis",
    "Wikiquote"
  );
}

TEST_F(LibraryTest, filterRemote)
{
  EXPECT_FILTER_RESULTS(kiwix::Filter().remote(true),
    "Business talks about TED",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Granblue Fantasy Wiki",
    "Géographie par Wikipédia",
    "Islam Stack Exchange",
    "Mathématiques",
    "Movies & TV Stack Exchange",
    "Mythology & Folklore Stack Exchange",
    "Ray Charles",
    "TED\"talks\" - Business",
    "Tania Louis",
    "Wikiquote"
  );

  EXPECT_FILTER_RESULTS(kiwix::Filter().remote(false),
    "An example ZIM archive"
  );
}

TEST_F(LibraryTest, filterByLanguage)
{
  EXPECT_FILTER_RESULTS(kiwix::Filter().lang("eng"),
    "Business talks about TED",
    "Granblue Fantasy Wiki",
    "Islam Stack Exchange",
    "Movies & TV Stack Exchange",
    "Mythology & Folklore Stack Exchange",
    "Ray Charles",
    "TED\"talks\" - Business"
  );

  EXPECT_FILTER_RESULTS(kiwix::Filter().query("lang:eng"),
    "Business talks about TED",
    "Granblue Fantasy Wiki",
    "Islam Stack Exchange",
    "Movies & TV Stack Exchange",
    "Mythology & Folklore Stack Exchange",
    "Ray Charles",
    "TED\"talks\" - Business"
  );

  EXPECT_FILTER_RESULTS(kiwix::Filter().query("eng"),
    /* no results */
  );
}

TEST_F(LibraryTest, filterByFlavour)
{
  EXPECT_FILTER_RESULTS(kiwix::Filter().flavour("full"),
    "Géographie par Wikipédia",
    "Tania Louis",
    "Wikiquote"
  );

  EXPECT_FILTER_RESULTS(kiwix::Filter().query("flavour:full"),
    "Géographie par Wikipédia",
    "Tania Louis",
    "Wikiquote"
  );

  EXPECT_FILTER_RESULTS(kiwix::Filter().query("full"),
    /* no results */
  );
}

TEST_F(LibraryTest, filterByTags)
{
  EXPECT_FILTER_RESULTS(kiwix::Filter().acceptTags({"stackexchange"}),
    "Islam Stack Exchange",
    "Movies & TV Stack Exchange",
    "Mythology & Folklore Stack Exchange"
  );

  // filtering by tags is case and diacritics insensitive
  EXPECT_FILTER_RESULTS(kiwix::Filter().acceptTags({"ståckEXÇhange"}),
    "Islam Stack Exchange",
    "Movies & TV Stack Exchange",
    "Mythology & Folklore Stack Exchange"
  );

  // filtering by tags requires full match of the search term
  EXPECT_FILTER_RESULTS(kiwix::Filter().acceptTags({"stackexch"}),
    /* no results */
  );

  // in tags with values (tag:value form) the value is an inseparable
  // part of the tag
  EXPECT_FILTER_RESULTS(kiwix::Filter().acceptTags({"_category"}),
    /* no results */
  );
  EXPECT_FILTER_RESULTS(kiwix::Filter().acceptTags({"_category:category_defined_via_tags_only"}),
    "Tania Louis"
  );

  EXPECT_FILTER_RESULTS(kiwix::Filter().acceptTags({"wikipedia"}),
    "Encyclopédie de la Tunisie",
    "Géographie par Wikipédia",
    "Mathématiques",
    "Ray Charles"
  );

  EXPECT_FILTER_RESULTS(kiwix::Filter().acceptTags({"wikipedia", "nopic"}),
    "Géographie par Wikipédia",
    "Mathématiques"
  );

  EXPECT_FILTER_RESULTS(kiwix::Filter().acceptTags({"wikipedia"}).rejectTags({"nopic"}),
    "Encyclopédie de la Tunisie",
    "Ray Charles"
  );
}


TEST_F(LibraryTest, filterByQuery)
{
  // filtering by query checks the title
  EXPECT_FILTER_RESULTS(kiwix::Filter().query("Exchange"),
    "Islam Stack Exchange",
    "Movies & TV Stack Exchange",
    "Mythology & Folklore Stack Exchange"
  );

  // filtering by query checks the description/summary
  EXPECT_FILTER_RESULTS(kiwix::Filter().query("enthusiasts"),
    "Movies & TV Stack Exchange",
    "Mythology & Folklore Stack Exchange"
  );

  // filtering by query is case insensitive on titles
  EXPECT_FILTER_RESULTS(kiwix::Filter().query("ExcHANge"),
    "Islam Stack Exchange",
    "Movies & TV Stack Exchange",
    "Mythology & Folklore Stack Exchange"
  );

  // filtering by query is diacritics insensitive on titles
  EXPECT_FILTER_RESULTS(kiwix::Filter().query("mathematiques"),
    "Mathématiques",
  );
  EXPECT_FILTER_RESULTS(kiwix::Filter().query("èxchângé"),
    "Islam Stack Exchange",
    "Movies & TV Stack Exchange",
    "Mythology & Folklore Stack Exchange"
  );

  // filtering by query is case insensitive on description/summary
  EXPECT_FILTER_RESULTS(kiwix::Filter().query("enTHUSiaSTS"),
    "Movies & TV Stack Exchange",
    "Mythology & Folklore Stack Exchange"
  );

  // filtering by query is diacritics insensitive on description/summary
  EXPECT_FILTER_RESULTS(kiwix::Filter().query("selection"),
    "Géographie par Wikipédia"
  );
  EXPECT_FILTER_RESULTS(kiwix::Filter().query("enthúsïåsts"),
    "Movies & TV Stack Exchange",
    "Mythology & Folklore Stack Exchange"
  );

  // by default, filtering by query assumes partial query
  EXPECT_FILTER_RESULTS(kiwix::Filter().query("Wiki"),
    "An example ZIM archive", // due to the "wikibooks" tag
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Granblue Fantasy Wiki",
    "Géographie par Wikipédia",
    "Mathématiques", // due to the "wikipedia" tag
    "Ray Charles",
    "Wikiquote"
  );

  // partial query can be disabled
  EXPECT_FILTER_RESULTS(kiwix::Filter().query("Wiki", false),
    "Granblue Fantasy Wiki"
  );
}


TEST_F(LibraryTest, filteringByEmptyQueryReturnsAllEntries)
{
  EXPECT_FILTER_RESULTS(kiwix::Filter().query(""),
    "An example ZIM archive",
    "Business talks about TED",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Granblue Fantasy Wiki",
    "Géographie par Wikipédia",
    "Islam Stack Exchange",
    "Mathématiques",
    "Movies & TV Stack Exchange",
    "Mythology & Folklore Stack Exchange",
    "Ray Charles",
    "TED\"talks\" - Business",
    "Tania Louis",
    "Wikiquote"
  );
}

TEST_F(LibraryTest, filterByCreator)
{
  EXPECT_FILTER_RESULTS(kiwix::Filter().creator("Wikipedia"),
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Géographie par Wikipédia",
    "Mathématiques",
    "Ray Charles"
  );

  // filtering by creator requires full match of the search term
  EXPECT_FILTER_RESULTS(kiwix::Filter().creator("Wiki"),
    "Granblue Fantasy Wiki"
  );

  // filtering by creator is case and diacritics insensitive
  EXPECT_FILTER_RESULTS(kiwix::Filter().creator("wIkï"),
    "Granblue Fantasy Wiki"
  );

  // filtering by creator doesn't requires full match of the full creator name
  EXPECT_FILTER_RESULTS(kiwix::Filter().creator("Stack"),
    "Islam Stack Exchange",
    "Movies & TV Stack Exchange",
    "Mythology & Folklore Stack Exchange"
  );

  // filtering by creator requires a full phrase match (ignoring some non-word terms)
  EXPECT_FILTER_RESULTS(kiwix::Filter().creator("Movies & TV Stack Exchange"),
    "Movies & TV Stack Exchange"
  );
  EXPECT_FILTER_RESULTS(kiwix::Filter().creator("Movies & TV"),
    "Movies & TV Stack Exchange"
  );
  EXPECT_FILTER_RESULTS(kiwix::Filter().creator("Movies TV"),
    "Movies & TV Stack Exchange"
  );
  EXPECT_FILTER_RESULTS(kiwix::Filter().creator("TV & Movies"),
    /* no results */
  );
  EXPECT_FILTER_RESULTS(kiwix::Filter().creator("TV Movies"),
    /* no results */
  );

  EXPECT_FILTER_RESULTS(kiwix::Filter().query("creator:Wikipedia"),
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Géographie par Wikipédia",
    "Mathématiques",
    "Ray Charles"
  );

}

TEST_F(LibraryTest, filterByPublisher)
{
  EXPECT_FILTER_RESULTS(kiwix::Filter().publisher("Kiwix"),
    "An example ZIM archive",
    "Ray Charles"
  );

  // filtering by publisher requires full match of the search term
  EXPECT_FILTER_RESULTS(kiwix::Filter().publisher("Kiwi"),
    /* no results */
  );

  // filtering by publisher requires a full phrase match
  EXPECT_FILTER_RESULTS(kiwix::Filter().publisher("Kiwix & Some Enthusiasts"),
    "An example ZIM archive"
  );
  EXPECT_FILTER_RESULTS(kiwix::Filter().publisher("Some Enthusiasts & Kiwix"),
    /* no results */
  );

  // filtering by publisher is case and diacritics insensitive
  EXPECT_FILTER_RESULTS(kiwix::Filter().publisher("kîWIx"),
    "An example ZIM archive",
    "Ray Charles"
  );

  EXPECT_FILTER_RESULTS(kiwix::Filter().query("publisher:kiwix"),
    "An example ZIM archive",
    "Ray Charles"
  );

  EXPECT_FILTER_RESULTS(kiwix::Filter().query("kiwix"),
    /* no results */
  );
}

TEST_F(LibraryTest, filterByName)
{
  EXPECT_FILTER_RESULTS(kiwix::Filter().name("wikibooks.de"),
    "An example ZIM archive"
  );

  // Parsing the query with `name:` prefix splits the token on the dot, as if it was 2 sentences.
  // It creates a query "XNwikibook@1 PHRASE 2 XNde@2".
  // I haven't found the syntax to not split on dot.
  EXPECT_FILTER_RESULTS(kiwix::Filter().query("name:wikibooks.de"),
    /* no results */
  );

  EXPECT_FILTER_RESULTS(kiwix::Filter().name("wikibooks"),
    /* no results */
  );

  // Wikibooks is in `tags` so it matches.
  EXPECT_FILTER_RESULTS(kiwix::Filter().query("wikibooks"),
    "An example ZIM archive"
  );

  // But "wikibooks.de" is only in name and `query` doesn't looks in name.
  EXPECT_FILTER_RESULTS(kiwix::Filter().query("wikibooks.de"),
    /* no results */
  );

  EXPECT_FILTER_RESULTS(kiwix::Filter().name("wikipedia_en_ray_charles"),
    "Ray Charles"
  );

  EXPECT_FILTER_RESULTS(kiwix::Filter().query("name:wikipedia_en_ray_charles"),
    "Ray Charles"
  );
}

TEST_F(LibraryTest, filterByCategory)
{
  EXPECT_FILTER_RESULTS(kiwix::Filter().category("category_element_overrides_tags"),
    "Géographie par Wikipédia",
    "Mathématiques"
  );

  EXPECT_FILTER_RESULTS(kiwix::Filter().query("category:category_element_overrides_tags"),
    "Géographie par Wikipédia",
    "Mathématiques"
  );

  EXPECT_FILTER_RESULTS(kiwix::Filter().query("category_element_overrides_tags"),
    /* no results */
  );
}

TEST_F(LibraryTest, filterByMaxSize)
{
  EXPECT_FILTER_RESULTS(kiwix::Filter().maxSize(200000),
    "An example ZIM archive"
  );
}

TEST_F(LibraryTest, filterByMultipleCriteria)
{
  EXPECT_FILTER_RESULTS(kiwix::Filter().query("Wiki").creator("Wikipedia"),
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Géographie par Wikipédia",
    "Mathématiques", // due to the "wikipedia" tag
    "Ray Charles"
  );

  EXPECT_FILTER_RESULTS(kiwix::Filter().query("Wiki").creator("Wikipedia").maxSize(100000000UL),
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Ray Charles"
  );

  EXPECT_FILTER_RESULTS(kiwix::Filter().query("Wiki").creator("Wikipedia").maxSize(100000000UL).local(false),
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie"
  );
}

TEST_F(LibraryTest, getBookByPath)
{
  kiwix::Book book = lib->getBookById(lib->getBooksIds()[0]);
#ifdef _WIN32
  auto path = "C:\\some\\abs\\path.zim";
#else
  auto path = "/some/abs/path.zim";
#endif
  book.setPath(path);
  lib->addBook(book);
  EXPECT_EQ(lib->getBookByPath(path).getId(), book.getId());
  EXPECT_THROW(lib->getBookByPath("non/existant/path.zim"), std::out_of_range);
}

TEST_F(LibraryTest, removeBookByIdRemovesTheBook)
{
  const auto initialBookCount = lib->getBookCount(true, true);
  ASSERT_GT(initialBookCount, 0U);
  EXPECT_NO_THROW(lib->getBookById("raycharles"));
  lib->removeBookById("raycharles");
  EXPECT_EQ(initialBookCount - 1, lib->getBookCount(true, true));
  EXPECT_THROW(lib->getBookById("raycharles"), std::out_of_range);
};

TEST_F(LibraryTest, removeBookByIdDropsTheReader)
{
  EXPECT_NE(nullptr, lib->getArchiveById("raycharles"));
  lib->removeBookById("raycharles");
  EXPECT_THROW(lib->getArchiveById("raycharles"), std::out_of_range);
};

TEST_F(LibraryTest, removeBookByIdUpdatesTheSearchDB)
{
  kiwix::Filter f;
  f.local(true).valid(true).query(R"(title:"ray charles")", false);

  EXPECT_NO_THROW(lib->getBookById("raycharles"));
  EXPECT_EQ(1U, lib->filter(f).size());

  lib->removeBookById("raycharles");

  EXPECT_THROW(lib->getBookById("raycharles"), std::out_of_range);
  EXPECT_EQ(0U, lib->filter(f).size());

  // make sure that Library::filter() doesn't add an empty book with
  // an id surviving in the search DB
  EXPECT_THROW(lib->getBookById("raycharles"), std::out_of_range);
};

TEST_F(LibraryTest, removeBooksNotUpdatedSince)
{
  EXPECT_FILTER_RESULTS(kiwix::Filter(),
    "An example ZIM archive",
    "Business talks about TED",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Encyclopédie de la Tunisie",
    "Granblue Fantasy Wiki",
    "Géographie par Wikipédia",
    "Islam Stack Exchange",
    "Mathématiques",
    "Movies & TV Stack Exchange",
    "Mythology & Folklore Stack Exchange",
    "Ray Charles",
    "TED\"talks\" - Business",
    "Tania Louis",
    "Wikiquote"
  );

  const uint64_t rev = lib->getRevision();
  for ( const auto& id : lib->filter(kiwix::Filter().query("exchange")) ) {
    lib->addBook(lib->getBookByIdThreadSafe(id));
  }

  EXPECT_GT(lib->getRevision(), rev);

  const uint64_t rev2 = lib->getRevision();

  EXPECT_EQ(13u, lib->removeBooksNotUpdatedSince(rev));

  EXPECT_GT(lib->getRevision(), rev2);

  EXPECT_FILTER_RESULTS(kiwix::Filter(),
    "Islam Stack Exchange",
    "Movies & TV Stack Exchange",
    "Mythology & Folklore Stack Exchange",
  );
};

};
