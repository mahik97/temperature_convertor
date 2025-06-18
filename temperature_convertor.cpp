#include <iostream>
using namespace std;

    int main () {

        double temp;
        char unit;

        cout << "***********************Temperature_Converter******************************\n";
        cout << "C/c = Celcius\n";
        cout << "F/f = Farenheit\n";

        cout << "Enter the temperature: ";
        cin >> temp;

        cout << "Enter the unit (C/F) of given temperature: ";
        cin >> unit;

        if (unit == 'F' || unit == 'f')
        {
            cout << "The temperature is " << (temp - 32) * 5/9 << " celcius\n";
        }
        
        else if (unit == 'C' || unit == 'c')
        {
            cout << "The temperature is " << (temp * 9/5) + 32 << " farenheit\n";
        }
        
        else{
            cout << "Enter the valid unit\n";
        }

        cout << "*****************************************************************************";

        return 0;
    }