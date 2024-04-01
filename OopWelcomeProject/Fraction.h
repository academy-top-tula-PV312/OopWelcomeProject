#pragma once
#include <iostream>

class Fraction
{
private:
    int numerator;
    unsigned int denominator;

    void Shorten()
    {
        int n = abs(numerator);
        int d = denominator;
        while (n != d && n != 0)
            if (n > d)
                n -= d;
            else
                d -= n;
        numerator /= d;
        denominator /= d;
    }
public:
    /*Fraction()
    {
        numerator = 0;
        denominator = 1;
    }*/
    //Fraction() : numerator{}, denominator{ 1 } {}
    Fraction() : Fraction(0, 1) {}

    Fraction(int numerator, int denominator) : numerator{ numerator }
    {
        if (denominator != 0) this->denominator = denominator;
        else this->denominator = 1;
        Shorten();
    }

    void SetNumerator(int numerator);
    int GetNumerator(); 
    void SetDenominator(int denominator);
    unsigned int GetDenominator();

    void PrintConsole();

    Fraction Add(Fraction f);
    Fraction Plus(Fraction f);
    Fraction Plus(int number);
    Fraction Subtraction(Fraction f);
    Fraction Mult(Fraction f);
    Fraction Div(Fraction f);
};

