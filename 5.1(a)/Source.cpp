#include <iostream>
#include <Windows.h> 
#include <exception>;
#include <stdexcept>;
#include "Bad_exception.h"
#include "Line.h"

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Line A;
	bool result;

	do
	{
		try
		{
			result = true;
			cin >> A;
		}
		catch (const char* str)
		{
			result = false;
			cerr << str << endl;
		}
		catch (bad_exception& e)
		{
			result = false;
			cerr << e.what() << endl;
		}
		catch (invalid_argument e)
		{
			result = false;
			cerr << e.what() << endl;
		}
	} while (!result);

	try
	{

	}
	catch (Bad_exception e)
	{
		cerr << e.what() << endl;
		result = false;
	}
	catch (invalid_argument e)
	{
		cerr << e.what() << endl;
	}

	A.denial();
	A.root();

	++A; cout << A;
	--A; cout << A;
	A++; cout << A;
	A--; cout << A;

	return 0;
}