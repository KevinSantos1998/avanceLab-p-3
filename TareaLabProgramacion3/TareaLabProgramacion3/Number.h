#pragma once
#include "Expression.h"
class Number:public Expression
{
public:

	Number operator+(Number);
	Number operator-(Number);
	int value;
	Number(int);
	Number();
	int getValue() override;
	string stringify() override;
};

