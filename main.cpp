#include <iostream>
using namespace std;

int main()
{
    //Ask for
    //number of passenger
    //total distance in km
    //fuel efficiency in L/100km
    //fuel price in $/L
    //one restaurant meal cost per person
    int numOfPass = 0;
    double totalDistance = 0;
    double fuelEff = 0;
    double fuelCost = 0;
    double mealCost = 0;
    double fuelUsed = 0;
    double fuelPer = 0;
    double mealTot = 0;
    double grandTot = 0;
    double grandTotPer = 0;

    cout << "Number of passengers: " << endl;
    cin >> numOfPass;

    cout << "Total distance: " << endl;
    cin >> totalDistance;

    cout << "Fuel efficiency: " << endl;
    cin >> fuelEff;

    cout << "Fuel Price: " << endl;
    cin >> fuelCost;

    cout << "Meal cost: " << endl;
    cin >> mealCost;

    // calculate for
    // total fuel used
    // total fuel cost
    // fuel cost per person
    // meal total for group
    // grand total per person

    fuelUsed = (totalDistance / 100) * fuelEff;

    fuelPer = fuelUsed * fuelCost;

    mealTot = mealCost * numOfPass;

    grandTot = mealTot + fuelCost;

    grandTotPer =  grandTot / numOfPass;

    cout << "--------------------------------------------" << endl;
    cout << "Number of passengers: " << numOfPass << endl;
    cout << "Distance traveled: " << totalDistance << "km" << endl;
    cout << "Car efficiency: " << fuelEff << "L/100km" << endl;
    cout << "Fuel used: " << fuelUsed << "L" << endl;
    cout << "Cost of fuel: $" << fuelCost << endl;
    cout << "Fuel cost per person: $" << fuelPer << endl;
    cout << "Meal cost per person: $" << mealTot << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Grand total: $" << grandTot << endl;
    cout << "Total cost per person: $" << grandTotPer << endl;


return 0;
}