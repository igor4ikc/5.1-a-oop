#pragma once
#include <iostream>

using namespace std;

class Bad_exception
{
	string message;
public:
	Bad_exception(string msg) : message(msg) {}
	string what();
};