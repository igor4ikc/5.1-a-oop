#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include "Bad_exception.h"
using namespace std;
#pragma once
class Line
{
    double first, second, x;
public:
    Line();
    Line(double, double, double);
    Line(const Line&);

    void Setfirst(double);
    void Setsecond(double);
    void Setx(double);

    double Getfirst() const;
    double Getsecond() const;
    double Getx() const;


    Line& operator = (const Line&);
    operator string() const;
    friend istream& operator >> (istream&, Line&);
    friend ostream& operator << (ostream&, const Line&);
    double denial();
    double root();

    Line& operator ++();
    Line& operator --();
    Line operator ++(int);
    Line operator --(int);
};

