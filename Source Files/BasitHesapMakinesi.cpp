#include "../Header Files/BasitHesapMakinesi.h"
void HesapMakinesi::ıslem()
{
    cout << "Welcome to the Calculator! Which operation would you like to perform?" << endl <<
         "For addition, enter +" << endl << "For subtraction, enter -" << endl << "For multiplication, enter *" << endl << "For division, enter /";
    cin >> Islem;
    if(Islem == '+')
    {
        cout << "Enter the first number";
        cin >> sayi1;
        cout << "Enter the second number";
        cin >> sayi2;
        toplam = sayi1 + sayi2;
        cout << "Result = " << toplam;
    }
    else if(Islem == '-')
    {
        cout << "Enter the first number";
        cin >> sayi1;
        cout << "Enter the second number";
        cin >> sayi2;
        toplam = sayi1 - sayi2;
        cout << "Result = " << toplam;
    }
    else if(Islem == '*')
    {
        cout << "Enter the first number";
        cin >> sayi1;
        cout << "Enter the second number";
        cin >> sayi2;
        toplam = sayi1 * sayi2;
        cout << "Result = " << toplam;
    }
    else if (Islem == '/')
    {
        cout << "Enter the first number";
        cin >> sayi1;
        cout << "Enter the second number";
        cin >> sayi2;
        toplam = sayi1 / sayi2;
        cout << "Result = " << toplam;
    }
}
