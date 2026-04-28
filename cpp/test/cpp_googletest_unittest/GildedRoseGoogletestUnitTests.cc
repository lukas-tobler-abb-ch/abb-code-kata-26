#include <gtest/gtest.h>
#include "GildedRose.h"

TEST(GildedRoseTest, Foo)
{
    std::vector<Item> items;
    items.push_back(Item("Foo", 2, 5));
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ("Foo", app.items[0].name);
    EXPECT_EQ(1, app.items[0].sellIn);
    EXPECT_EQ(4, app.items[0].quality);
    app.updateQuality();
    EXPECT_EQ("Foo", app.items[0].name);
    EXPECT_EQ(0, app.items[0].sellIn);
    EXPECT_EQ(3, app.items[0].quality);
    app.updateQuality();
    EXPECT_EQ("Foo", app.items[0].name);
    EXPECT_EQ(-1, app.items[0].sellIn);
    EXPECT_EQ(1, app.items[0].quality);
    app.updateQuality();
    EXPECT_EQ("Foo", app.items[0].name);
    EXPECT_EQ(-2, app.items[0].sellIn);
    EXPECT_EQ(0, app.items[0].quality);
    app.updateQuality();
    EXPECT_EQ("Foo", app.items[0].name);
    EXPECT_EQ(-3, app.items[0].sellIn);
    EXPECT_EQ(0, app.items[0].quality);
}

TEST(GildedRoseTest, Brie)
{
    std::vector<Item> items;
    items.push_back(Item("Aged Brie", 2, 45));
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ("Aged Brie", app.items[0].name);
    EXPECT_EQ(1, app.items[0].sellIn);
    EXPECT_EQ(46, app.items[0].quality);
    app.updateQuality();
    EXPECT_EQ("Aged Brie", app.items[0].name);
    EXPECT_EQ(0, app.items[0].sellIn);
    EXPECT_EQ(47, app.items[0].quality);
    app.updateQuality();
    EXPECT_EQ("Aged Brie", app.items[0].name);
    EXPECT_EQ(-1, app.items[0].sellIn);
    EXPECT_EQ(49, app.items[0].quality);
    app.updateQuality();
    EXPECT_EQ("Aged Brie", app.items[0].name);
    EXPECT_EQ(-2, app.items[0].sellIn);
    EXPECT_EQ(50, app.items[0].quality);
    app.updateQuality();
    EXPECT_EQ("Aged Brie", app.items[0].name);
    EXPECT_EQ(-3, app.items[0].sellIn);
    EXPECT_EQ(50, app.items[0].quality);
}

TEST(GildedRoseTest, Sulfuras)
{
    std::vector<Item> items;
    items.push_back(Item("Sulfuras, Hand of Ragnaros", 2, 20));
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ("Sulfuras, Hand of Ragnaros", app.items[0].name);
    EXPECT_EQ(2, app.items[0].sellIn);
    EXPECT_EQ(20, app.items[0].quality);
}

TEST(GildedRoseTest, Backstage)
{
    std::vector<Item> items;
    items.push_back(Item("Backstage passes to a TAFKAL80ETC concert", 11, 5));
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", app.items[0].name);
    EXPECT_EQ(10, app.items[0].sellIn);
    EXPECT_EQ(6, app.items[0].quality);
    app.updateQuality();
    EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", app.items[0].name);
    EXPECT_EQ(9, app.items[0].sellIn);
    EXPECT_EQ(8, app.items[0].quality);
    for (int i = 0; i < 4; ++i)
    {
        app.updateQuality();
        EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", app.items[0].name);
        EXPECT_EQ(9 - (i + 1), app.items[0].sellIn);
        EXPECT_EQ(8 + 2 * (i + 1), app.items[0].quality);
    }
    app.updateQuality();
    EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", app.items[0].name);
    EXPECT_EQ(4, app.items[0].sellIn);
    EXPECT_EQ(19, app.items[0].quality);
    app.updateQuality();
    EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", app.items[0].name);
    EXPECT_EQ(3, app.items[0].sellIn);
    EXPECT_EQ(22, app.items[0].quality);
    app.updateQuality();
    EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", app.items[0].name);
    EXPECT_EQ(2, app.items[0].sellIn);
    EXPECT_EQ(25, app.items[0].quality);
    app.updateQuality();
    EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", app.items[0].name);
    EXPECT_EQ(1, app.items[0].sellIn);
    EXPECT_EQ(28, app.items[0].quality);
    app.updateQuality();
    EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", app.items[0].name);
    EXPECT_EQ(0, app.items[0].sellIn);
    EXPECT_EQ(31, app.items[0].quality);
    app.updateQuality();
    EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", app.items[0].name);
    EXPECT_EQ(-1, app.items[0].sellIn);
    EXPECT_EQ(0, app.items[0].quality);
}