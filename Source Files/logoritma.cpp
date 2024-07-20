#include "../Header Files/logoritma.h"

void logoritma::logoritmabulma()
{
    cout << "Welcome to Logarithm Calculator.\n"
            "Enter the base number: ";
    cin >> taban;
    cout << "\nEnter the result: ";
    cin >> sonuc;
    ussu = log(sonuc) / log(taban);
    cout << "The exponent is: " << ussu;
}
