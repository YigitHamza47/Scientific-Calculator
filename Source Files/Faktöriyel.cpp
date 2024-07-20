#include "../Header Files/Faktöriyel.h"
void faktöriyel::faktöriyelBulma()
{
    cout << "Enter the positive number you want to find the factorial of.\n";
    cin >> sayi;
    for(int i = 1; i <= sayi; i++)
    {
        fa *= i;
    }
    cout << "The factorial of " << sayi << " is " << fa << ".";
}
