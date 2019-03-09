

#include "pch.h"
#include "stdafx.h" //este es
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "SerialPort.h"

using namespace std;

//String for incoming data





void writeExample() {
	char output[MAX_DATA_LENGTH];
	SerialPort* arduino = new SerialPort("COM5");



	if (arduino->isConnected()) cout << "Connection Established" << endl;
	else cout << "ERROR, check port name";

	while (arduino->isConnected()) {
		cout << "Write something: \n";
		string input_string;
		//Getting input

		getline(cin, input_string);
		//Creating a c string
		char *c_string = new char[input_string.size() + 1];
		//copying the std::string to c string
		std::copy(input_string.begin(), input_string.end(), c_string);
		//Adding the delimiter
		c_string[input_string.size()] = '\n';
		//Writing string to arduino
		arduino->writeSerialPort(c_string, MAX_DATA_LENGTH);
		//Getting reply from arduino
		int bytes_read = arduino->readSerialPort(output, MAX_DATA_LENGTH);
		//printing the output

		cout << output << endl;
		//freeing c_string memory
		delete[] c_string;
	}
}

