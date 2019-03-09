#pragma once
#include "ArithmeticExpression.h"
class Division:public ArithmeticExpression
{
public:
	Division(Expression *, Expression *);

	int getValue() override;
	string stringify() override;
};

