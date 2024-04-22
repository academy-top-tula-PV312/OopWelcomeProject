#include <iostream>
#include "Fraction.h"

void FirstExamples();

int main()
{
    Fraction f1(2, 3);

    double x = (double)f1 + 1.9;
    std::cout << x << "\n";

    /*int n{ (int)x };
    int m = x;*/
    
}

void FirstExamples()
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

    f1.Numerator() = 4;
    std::cout << f1.Numerator();
    //f1.PrintConsole();
    ++f1;
    //f1.PrintConsole();
    std::cout << "f1 = " << f1 << "\n";

    Fraction f5;
    std::cout << "Input fraction and number: ";
    std::cin >> f5 >> n;
    std::cout << "f5 = " << f5 << ", n = " << n << "\n";

    /*std::cout << n++ << "\n";
    std::cout << n << "\n";*/

    /*Fraction f6 = 10 + -f2;
    f6.PrintConsole();*/


    /*Fraction f5 = f1.Plus(f2)
                    .Subtraction(f3)
                    .Mult(f4);
    f5.PrintConsole();
    f1.PrintConsole();*/
}
