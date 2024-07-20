#include <iostream>
#include "Source Files/BasitHesapMakinesi.cpp"
#include "Source Files/faktöriyel.cpp"
#include "Source Files/pisagor.cpp"
#include "Source Files/kokalma.cpp"
#include "Source Files/SigmaHesapMakinesi.cpp"
#include "Source Files/ungenalan.cpp"
#include "Source Files/logoritma.cpp"
#include "Source Files/trigonemetri.cpp"
#include "Source Files/derecedonusturma.cpp"

int main() {

    // Objects
    HesapMakinesi calculator;
    BasitSigmaHesap sigmaCalculator;
    faktöriyel factorial;
    pisogor pythagorean;
    kök squareRoot;
    ucgen triangleArea;
    logoritma logarithm;
    trigon trigonometry;
    dereceDonusturma temperatureConversion;

    // To understand what the client selected
    string application;

    cout << "In this experimental calculator, you can perform the following tasks: basic calculator functions, simple sigma calculations,\n"
            "finding the square root of a number, calculating the factorial of any number, finding the hypotenuse of a triangle,\n"
            "calculating the area of a triangle, logarithms, trigonometry, and converting Celsius to other units." << endl;

    cout << "For the sigma calculator, type 'sigma'. For the basic calculator, type 'calc'. For factorial, type 'fact'.\n"
            "To find the square root, type 'sqrt'. For the hypotenuse, type 'hyp'. To find the area of a triangle, type 'tri'.\n"
            "For logarithms, type 'log'. For trigonometry, type 'trig'. To convert Celsius to other units, type 'cel'." << endl;

    cin >> application;

    // Use switch statement for better readability
    if (application == "calc") {
        calculator.ıslem();
    }
    else if (application == "sigma") {
        sigmaCalculator.BasitSigma();
    }
    else if (application == "fact") {
        factorial.faktöriyelBulma();
    }
    else if (application == "hyp") {
        pythagorean.pisagorbulma();
    }
    else if (application == "sqrt") {
        squareRoot.kokbulma();
    }
    else if (application == "tri") {
        triangleArea.ucgenalanbulma();
    }
    else if (application == "log") {
        logarithm.logoritmabulma();
    }
    else if (application == "trig") {
        trigonometry.ucgenTri();
    }
    else if (application == "cel") {
        temperatureConversion.deredon();
    }
    else {
        cout << "Invalid input. Please try again." << endl;
    }

    return 0;
}
