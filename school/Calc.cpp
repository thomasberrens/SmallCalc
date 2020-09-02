// school.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    int chosen;

    int getal1;
    int getal2;

    cout << "Wat is getal 1: " << endl;
    cin >> getal1;
    cout << "Wat is getal 2: " << endl;
    cin >> getal2;
    
    cout << "1. Plus" << endl;
    cout << "2. Min" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Modulo" << endl;
    cin >> chosen;

    if (chosen < 1 || chosen > 6)
    {
        cout << "You gave a invalid number, choose between 1 and 5" << endl;
        exit;
    }

    switch (chosen)
    {
    case 1:
        cout << Plus(getal1, getal2);
        break;

    case 2:
        cout << Min(getal1, getal2);
        break;
    case 3:
        cout << Multiply(getal1, getal2);
        break;

    case 4:
        cout << Divide(getal1, getal2);
        break;

    case 5:
        cout << Modulo(getal1, getal2);
        break;
    }

}
