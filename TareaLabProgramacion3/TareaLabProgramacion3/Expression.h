#pragma once
#include <string>
#include <iostream>
#include <fstream>

using std::string;
class Number;
class Addition;
class Substraction;
class Division;
class Multiplication;
class Expression
{
public:
	Expression();
	static Expression* fromString(string);

	static bool isNumber(string);
	static bool isSubstracion(string);
	static bool isAddition(string);
	static bool isMultiplication(string);
	static bool isDivision(string);
	static string * split(string, string);
	virtual int getValue();
	virtual string stringify();
	string Resultado();
	void motomoto();




};

