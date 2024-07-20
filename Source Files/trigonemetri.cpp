#include "../Header Files/trigonemetri.h"

void trigon::ucgenTri()
{
    cout << "Welcome to the Trigonometry Calculator" << endl;
    cout << "Which operation would you like to perform? Type 'sin' for sine, 'cos' for cosine, 'tan' for tangent: ";
    cin >> sec;
    if (sec == "sin")
    {
        cout << "Enter the angle in degrees:" << endl;
        cin >> aci;
        rad = aci * M_PI / 180;
        sonuc = sin(rad);
        cout << "The sine of " << aci << " degrees is: " << sonuc << endl;
    }
    else if (sec == "cos")
    {
        cout << "Enter the angle in degrees:" << endl;
        cin >> aci;
        rad = aci * M_PI / 180;
        sonuc = cos(rad);
        cout << "The cosine of " << aci << " degrees is: " << sonuc << endl;
    }
    else if (sec == "tan")
    {
        cout << "Enter the angle in degrees:" << endl;
        cin >> aci;
        rad = aci * M_PI / 180;
        sonuc = tan(rad);
        cout << "The tangent of " << aci << " degrees is: " << sonuc << endl;
    }
}
