#include "../Header Files/ungenalan.h"

void ucgen::ucgenalanbulma()
{
    cout << "Welcome to the Triangle Area Calculator\n"
         << "Enter the base length of the triangle:\n";
    cin >> a;
    cout << "Enter the height of the triangle:\n";
    cin >> b;

    top = (a * b) / 2;
    cout << "The area of the triangle is: " << top;
}
