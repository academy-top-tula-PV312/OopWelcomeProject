#include "Fraction.h"

void Fraction::SetNumerator(int numerator)
{
    this->numerator = numerator;
    Shorten();
}

int Fraction::GetNumerator() { return numerator; }

int& Fraction::Numerator()
{
    return numerator;
}

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

Fraction Fraction::operator+(Fraction f)
{
    Fraction result;
    result.numerator = numerator * f.denominator + denominator * f.numerator;
    result.denominator = denominator * f.denominator;
    result.Shorten();
    return result;
}

//Fraction Fraction::operator+(int number)
//{
//    Fraction result;
//    result.numerator = numerator + denominator * number;
//    result.denominator = denominator;
//    result.Shorten();
//    return result;
//}

Fraction Fraction::operator++()
{
    *this = 1 + *this;
    return *this;
}

Fraction Fraction::operator++(int)
{
    Fraction old = *this;
    *this = 1 + *this;
    return old;
}

Fraction::operator double()
{
    return (double)numerator / denominator;
}

Fraction operator+(int number, const Fraction& f)
{
    Fraction result;
    result.numerator = f.numerator + f.denominator * number;
    result.denominator = f.denominator;
    result.Shorten();
    return result;
    //return f + number;
}

bool operator<(const Fraction& f1, const Fraction& f2)
{
    return f1.numerator * f2.denominator < f1.denominator * f2.numerator;
}

bool operator>=(const Fraction& f1, const Fraction& f2)
{
    return !(f1 < f2);
}

std::ostream& operator<<(std::ostream& out, const Fraction& f)
{
    out << "[" << f.numerator << "/" << f.denominator << "]";
    return out;
}

std::istream& operator>>(std::istream& in, Fraction& f)
{
    in >> f.numerator;
    in >> f.denominator;
    return in;
}
