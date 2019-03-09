#include "pch.h"
#include "Number.h"
#include <iostream>

Number::Number(int value)
{
	this->value = value;
}
int Number::getValue()
{
	return this->value;
}

Number Number::operator+(Number x)
{
	Number result(this->getValue() + x.getValue());
	return result;
}

Number Number::operator-(Number x)
{
	Number result(this->getValue() - x.getValue());
	return result;
}

string Number::stringify() {
	string as = std::to_string(this->getValue());
	return as;
}

