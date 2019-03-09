#pragma once
#include "ArithmeticExpression.h"
class Multiplication:public ArithmeticExpression
{
public:
	Multiplication(Expression *,Expression *);
	int getValue() override;
	string stringify() override;
};

