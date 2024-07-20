#include "../Header Files/pisagor.h"
void pisogor::pisagorbulma()
{
    cout << "Welcome to Hypotenuse Finder. Enter the length of the first leg:\n";
    cin >> sayi1;
    cout << "Enter the length of the second leg:\n";
    cin >> sayi2;
    uzunKenar = (sayi1 * sayi1) + (sayi2 * sayi2);
    cout << "The hypotenuse is: " << sqrt(uzunKenar);
}
