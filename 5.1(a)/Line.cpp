#include "Line.h"
Line::Line() 
{
    first = 0;
    second = 0;
    x = 0;
}
Line::Line(double first = 0, double second = 0, double x = 0) 
throw(Bad_exception, invalid_argument)
{
    if (first > second)
        throw Bad_exception("Bad_Exception - Error!(first < second)"); 
    if (first == second)
        throw invalid_argument("Built in exception - Error!(first = second)");
    this->first = first;
    this->second = second;
    this->x = x;
}
Line::Line(const Line& c) 
{
    first = c.first;
    second = c.second;
    x = c.x;
}
void Line::Setfirst(double first)
{
    this->first = first;
}
void Line::Setsecond(double second)
{
    this->second = second;
}
void Line::Setx(double second)
{
    this->x = x;
}
double Line::Getfirst() const { return first; }
double Line::Getsecond() const { return second; }
double Line::Getx() const { return x; }

Line& Line::operator = (const Line& c)
{
    first = c.first;
    second = c.second;
    x = c.x;
    return *this;
}

Line::operator string() const
{
    stringstream ss;
    ss << " solution: " << endl;
    ss << " A: " << first << endl;
    ss << " B: " << second << endl;
    ss << " x: " << x << endl;
    return ss.str();
}
ostream& operator << (ostream& out, const Line& c)
{
    out << string(c);
    return out;
}
istream& operator >> (istream& in, Line& c) 
throw(const char*, bad_exception&)
{
    cout << " solution: " << endl;
    cout << " A: "; in >> c.first;
    cout << " B: "; in >> c.second;
    cout << " x: "; in >> c.x;
    cout << endl;

    if (c.first > c.second)
        throw "Error!(first > second)";
    if (c.first == c.second)
        throw bad_exception();
    return in;
}
double Line::denial()
{

    cout << " A != 0 " << endl;
    if (first != 0)
    {
        cout << " Yes " << endl;
        cout << " y = " << root() << endl;
        return true;
    }
    else
    {
        cout << " No " << endl;
        return false;
    }
}

double Line::root()
{
    return (x - second) / first;
}

Line& Line::operator ++() {     
    ++first;
    return *this;
}
Line& Line::operator --() {     
    --first;
    return *this;
}
Line Line::operator ++(int) {  
    Line a(*this);
    second++;
    return a;
}
Line Line::operator --(int) {   
    Line a(*this);
    second--;
    return a;
}