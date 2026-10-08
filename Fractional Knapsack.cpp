#include <iostream>
#include <algorithm>
using namespace std;

struct Item {
    int value;
    int weight;
    double ratio;
};

bool compare(Item a, Item b) {
    return a.ratio > b.ratio;
}

int main() {

    int n = 3;
    int capacity = 50;

    Item items[n] = {
        {60, 10, 0},
        {100, 20, 0},
        {120, 30, 0}
    };


    for (int i = 0; i < n; i++) {
        items[i].ratio =
            (double)items[i].value / items[i].weight;
    }


    sort(items, items + n, compare);

    cout << "Items after sorting by value/weight ratio:\n\n";

    cout << "Value\tWeight\tRatio\n";

    for (int i = 0; i < n; i++) {
        cout << items[i].value << "\t"
             << items[i].weight << "\t"
             << items[i].ratio << endl;
    }

    double totalValue = 0;
    int remaining = capacity;

    cout << "\n--- Selection Process ---\n";

    for (int i = 0; i < n; i++) {

        if (items[i].weight <= remaining) {

            // Take the whole item
            remaining -= items[i].weight;
            totalValue += items[i].value;

            cout << "Take 100% of item: "
                 << "Value = " << items[i].value
                 << ", Weight = " << items[i].weight
                 << endl;
        }
        else {


            double fraction =
                (double)remaining / items[i].weight;

            totalValue += items[i].value * fraction;

            cout << "Take "
                 << fraction * 100
                 << "% of item: "
                 << "Value = " << items[i].value
                 << ", Weight = " << items[i].weight
                 << endl;

            remaining = 0;
        }

        cout << "Remaining capacity = "
             << remaining << endl;

        if (remaining == 0)
            break;
    }

    cout << "\nMaximum Value = "
         << totalValue << endl;

    return 0;
}
