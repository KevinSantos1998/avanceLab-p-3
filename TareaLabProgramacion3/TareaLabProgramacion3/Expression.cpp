#include "pch.h"
#include "Expression.h"
#include <iostream>
#include <fstream>
#include <string>
#include "Number.h"
#include "Division.h"
#include "Multiplication.h"
#include "Substraction.h"
#include "Addition.h"
#include "SerialPort.h"

char incomingData[MAX_DATA_LENGTH];

void readExample() {
	Expression as;
	std::ofstream escritura("AlmacenNumeros.txt");

	if (!escritura) {
		std::cout << "Error fatal al abrir el archivo!!!!";
		return;
	}
	string master;
	SerialPort* arduino = new SerialPort("COM5");
	if (arduino->isConnected()) { 
		std::cout << "Connection Established" << std::endl;
		



	}
	else std::cout << "ERROR, check port name";

	while (arduino->isConnected()) {
		//Check if data has been read or not
		int read_result = arduino->readSerialPort(incomingData, MAX_DATA_LENGTH);
		//prints out data

		if (read_result > 0) {
			string save = incomingData;
			master = master + incomingData;
			std::cout << save;
		
			if (save == "\n") {
				escritura << master ;

				master = "\n";
				

				
			}
			
		}

		//wait a bit
		Sleep(100);
	}
}

void Expression::motomoto()
{
	readExample();
}



Expression::Expression()
{

}


int Expression::getValue()
{
	return 0;
}
string Expression::stringify() {


	return "";
}

string Expression::Resultado() {
	std::ifstream Numeros("AlmacenNumeros.txt",std::ios::in);

	if (!Numeros) {
		std::cout << "No se pudo abrir el archivo!!!";
		return " ";
	 }

	char _numero[30];

	Numeros >> _numero;

	string expression = _numero;


	string valor=std::to_string(fromString(expression)->getValue());
	

	return valor;



}


Expression*  Expression::fromString(string expression)
{
	
	if (isNumber(expression))
	{
		int i = stoi(expression);
		
		return new Number(i);
	}
	else if (isAddition(expression))
	{
		string* add = split(expression, "+");
		
		return new Addition(Expression::fromString(add[0]),Expression::fromString(add[1]));
	}
	else if (isSubstracion(expression))
	{
		string* subs = split(expression, "-");

		return new Substraction(Expression::fromString(subs[0]), Expression::fromString(subs[1]));
	}
	else if (isMultiplication(expression))
	{
		string* mult = split(expression, "*");

		return new Multiplication(Expression::fromString(mult[0]), Expression::fromString(mult[1]));
	}
	else if (isDivision(expression))
	{
		string* div = split(expression, "/");

		return new Division(Expression::fromString(div[0]), Expression::fromString(div[1]));
	}
	return 0;
}

string * Expression::split(string expression, string operador)
{
	string* resultado = new string[2];

	size_t pos = expression.find(operador);
	string Izquierda = expression.substr(0, pos);
	string Derecha = expression.substr(pos + 1, expression.length());
	
	resultado[0] = Izquierda;
	resultado[1] = Derecha;
	return resultado;
}
bool Expression::isNumber(string expression)
{
	for (char& c : expression) {
		if (c == '+' || c == '-' || c == '/' || c == '*')
		{
			return false;
		}
	}
	return true;
}

bool Expression::isAddition(string expression)
{
	for (char& c : expression) {
		if (c == '+')
		{
			return true;
		}
	}
	return false;
}
bool Expression::isSubstracion(string expression)
{
	for (char& c : expression) {
		if (c == '-')
		{
			return true;
		}
	}
	return false;
}

bool Expression::isMultiplication(string expression)
{
	for (char& c : expression) {
		if (c == '*')
		{
			return true;
		}
	}
	return false;
}
bool Expression::isDivision(string expression)
{
	for (char& c : expression) {
		if (c == '/')
		{
			return true;
		}
	}
	return false;
}

