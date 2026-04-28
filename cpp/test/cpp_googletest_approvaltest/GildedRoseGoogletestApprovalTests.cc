#define APPROVALS_GOOGLETEST
#include <ApprovalTests.hpp>

#include "GildedRose.h"

std::ostream &operator<<(std::ostream &os, const Item &obj)
{
    return os << "name: " << obj.name << ", sellIn: " << obj.sellIn
              << ", quality: " << obj.quality;
}

TEST(GildedRoseApprovalTests, VerifyCombinations)
{
    std::vector<std::string> names{"Foo", "Aged Brie", "Backstage passes to a TAFKAL80ETC concert", "Sulfuras, Hand of Ragnaros"};
    std::vector<int> sellIns{1, 0, 51, 50, 1000, 49, 2, 3, -1, -2, -3, -1000};
    std::vector<int> qualities{1, 0, -1, -2, -3, 2, 3, 10, 25, -1000, 1000, 49, 50, 51};

    auto f = [](std::string name, int sellIn, int quality)
    {
        std::vector<Item> items = {Item(name, sellIn, quality)};
        GildedRose app(items);
        app.updateQuality();
        return items[0];
    };

    ApprovalTests::CombinationApprovals::verifyAllCombinations(f, names, sellIns,
                                                               qualities);
}

TEST(GildedRoseApprovalTests, VerifyCombinationsIterative)
{
    std::vector<std::string> names{"Foo", "Aged Brie", "Backstage passes to a TAFKAL80ETC concert", "Sulfuras, Hand of Ragnaros"};
    std::vector<int> sellIns{1, 0, 51, 50, 1000, 49, 2, 3, -1, -2, -3, -1000};
    std::vector<int> qualities{1, 0, -1, -2, -3, 2, 3, 10, 25, -1000, 1000, 49, 50, 51};
    std::vector<int> num_iterations{1, 2, 3, 10, 99, 2356};

    auto f = [](std::string name, int sellIn, int quality, int n)
    {
        std::vector<Item> items = {Item(name, sellIn, quality)};
        GildedRose app(items);
        for (int i = 0; i < n; ++i)
        {
            app.updateQuality();
        }
        return items[0];
    };

    ApprovalTests::CombinationApprovals::verifyAllCombinations(f, names, sellIns,
                                                               qualities, num_iterations);
}
