#pragma once
#include "ArithmeticExpression.h"

class Substraction:public ArithmeticExpression
{
public:
	Substraction(Expression *, Expression *);
	int getValue() override;
	string stringify() override;
};

