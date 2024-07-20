#include "../Header Files/derecedonusturma.h"

void dereceDonusturma::deredon()
{
    cout << "Welcome to Temperature Conversion." << endl;
    cout << "Which degree would you like to convert Celsius to? Type 'fah' for Fahrenheit, 'kel' for Kelvin." << endl;
    cin >> derece;
    if (derece == "fah")
    {
        cout << "Enter the temperature in Celsius:" << endl;
        cin >> santigrat;
        Fahrenhayt = (santigrat * 9 / 5) + 32;
        cout << "The temperature in Fahrenheit is " << Fahrenhayt << " degrees.";
    }
    else if (derece == "kel")
    {
        cout << "Enter the temperature in Celsius:" << endl;
        cin >> santigrat;
        Kelvin = santigrat + 273.15;
        cout << "The temperature in Kelvin is " << Kelvin << " degrees.";
    }
}
