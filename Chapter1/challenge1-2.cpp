//This program calculates how much a Little League baseball team spent last year to purchase new baseballs.
#include <iostream>
using namespace std;

int main()
{
    int bAmount;
    double bCost, bTotal;

    cout << "How many baseballs did you purchase last year? ";
    cin >> bAmount;

    cout << "How much does a baseball cost? ";
    cin >> bCost;

    bTotal = bAmount * bCost;

    cout << "You spent $" << bTotal << " last year on baseballs!\n";

    return 0;
}