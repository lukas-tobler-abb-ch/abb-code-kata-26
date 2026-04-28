#pragma once

#include <string>
#include <vector>
#include <functional>
#include <iostream>

class Item
{
public:
    std::string name;
    int sellIn;
    int quality;
    Item(std::string name, int sellIn, int quality) : name(name), sellIn(sellIn), quality(quality)
    {
    }

    void
    updateQuality()
    {
        if (name == "Aged Brie")
        {
            updateBrie();
        }
        else if (name == "Sulfuras, Hand of Ragnaros")
        {
            updateSulfuras();
        }
    }

private:
    void
    updateDefault()
    {
    }

    void
    updateBrie()
    {
        quality += quality < 50 ? 1 : 0;
        sellIn--;
        if (sellIn < 0)
        {
            quality += quality < 50 ? 1 : 0;
        }
    }

    void
    updateBackstage()
    {
    }

    void
    updateSulfuras()
    {
    }
};

class GildedRose
{
public:
    std::vector<Item> &items;
    GildedRose(std::vector<Item> &items);

    void updateQuality();
};
 