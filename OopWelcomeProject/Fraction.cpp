#include "Fraction.h"

void Fraction::SetNumerator(int numerator)
{
    this->numerator = numerator;
    Shorten();
}

int Fraction::GetNumerator() { return numerator; }

void Fraction::SetDenominator(int denominator)
{
    if (denominator != 0) this->denominator = denominator;
    else this->denominator = 1;
    Shorten();
}

unsigned int Fraction::GetDenominator() { return denominator; }

void Fraction::PrintConsole()
{
    std::cout << "[" << numerator << "/" << denominator << "]\n";
}

Fraction Fraction::Add(Fraction f)
{
    numerator = numerator * f.denominator + denominator * f.numerator;
    denominator *= f.denominator;
    Shorten();
    return *this;
}

Fraction Fraction::Plus(Fraction f)
{
    Fraction result;
    result.numerator = numerator * f.denominator + denominator * f.numerator;
    result.denominator = denominator * f.denominator;
    result.Shorten();
    return result;
}

Fraction Fraction::Plus(int number)
{
    Fraction result;
    result.numerator = numerator + denominator * number;
    result.denominator = denominator;
    result.Shorten();
    return result;
}

Fraction Fraction::Subtraction(Fraction f)
{
    numerator = numerator * f.denominator - denominator * f.numerator;
    denominator *= f.denominator;
    Shorten();
    return *this;
}

Fraction Fraction::Mult(Fraction f)
{
    numerator *= f.numerator;
    denominator *= f.denominator;
    Shorten();
    return *this;
}

Fraction Fraction::Div(Fraction f)
{
    numerator *= f.denominator;
    denominator *= f.numerator;
    Shorten();
    return *this;
}
