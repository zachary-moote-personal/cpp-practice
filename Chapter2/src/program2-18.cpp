// This program shows variable initalization.
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string month = "February";      // month is initalized to "February"
    int year,                       // year is not initalized
    days = 29;                      // days is initalized to 29.

    year = 1776;                    // Now year is assigned a value

    cout << "In " << year << " " << month 
         << " had " << days << " days. \n";
    
    return 0;
}