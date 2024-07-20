#include "../Header Files/SigmaHesapMakinesi.h"
void BasitSigmaHesap::BasitSigma()
{
    int sayi1 = 0;
    int sayi2 = 0;
    double toplam = 0;
    cout << "Welcome to the Sigma Calculator." << endl;
    cout << "Enter the first number:\n";
    cin >> sayi1;
    cout << "Enter the second number:\n";
    cin >> sayi2;
    for (sayi1; sayi1 <= sayi2; sayi1++)
    {
        toplam += sayi1;
    }
    cout << "The sum is: " << toplam;
}
