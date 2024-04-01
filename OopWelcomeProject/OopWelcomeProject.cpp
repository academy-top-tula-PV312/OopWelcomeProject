#include <iostream>
#include "Fraction.h"

int main()
{
    int n{ 10 };
    

    /*Fraction f1;
    f1.SetNumerator(125);
    f1.SetDenominator(500);

    f1.PrintConsole();

    Fraction* f2 = new Fraction;
    f2->SetNumerator(5);
    f2->SetDenominator(9);
    f2->PrintConsole();*/

    Fraction f1(5, 7);
    Fraction f2(3, 8);
    Fraction f3(2, 5);
    Fraction f4(11, 15);
    
    Fraction f5 = f1.Plus(f2)
                    .Subtraction(f3)
                    .Mult(f4);
    f5.PrintConsole();
    f1.PrintConsole();
}
