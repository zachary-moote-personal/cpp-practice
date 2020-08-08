//This program calculates how much a garden center spent to make a flower garden display.
#include <iostream>
using namespace std;

int main()
{
    double costOfSeeds, costOfSoil, costOfFence, costTotal;

    cout << "What was the cost of the soil? ";
    cin >> costOfSoil;

    cout << "What was the cost of the flower seeds? ";
    cin >> costOfSeeds;

    cout << "What was the cost of the fence? ";
    cin >> costOfFence;

    costTotal = costOfSoil + costOfSeeds + costOfFence;

    cout << "The garden center spent $" << costTotal << " to make the flower garden display!\n";

    return 0;
}