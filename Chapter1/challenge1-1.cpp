//This program calculates how much a student organization earns during its fund-raising candy sale.
#include <iostream>
using namespace std;

int main()
{
    int numSold, cost, total;

    cout << "How many candy bars were sold? ";
    cin >> numSold;

    cout << "How much does a candy bar cost? ";
    cin >> cost;

    total = numSold * cost;

    cout << "You earned $" << total << " dollars!\n";

    return 0;
}