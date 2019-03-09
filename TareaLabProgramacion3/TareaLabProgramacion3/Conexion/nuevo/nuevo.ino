
#include <Keypad.h>

void setup()
{
  Serial.begin(9600);
}
 
const byte numRows= 4;
const byte numCols= 4;
 
const byte keymap[numRows][numCols]= {
  {'1', '2', '3', '+'},
  {'4', '5', '6', '-'},
  {'7', '8', '9', '*'},
  {'\n', '0', '#', '/'}
};
 
byte rowPins[numRows] = {11,10,9,8}; //Rows 0 to 3
 
byte colPins[numCols]= {A0,A1,A2,A3}; //Columns 0 to 3
 
//initializes an instance of the Keypad class
 
Keypad myKeypad= Keypad(makeKeymap(keymap), rowPins, colPins, numRows, numCols);

 
String buffer = "";
 
void loop()
{
    char keypressed = myKeypad.getKey();
    if (keypressed != NO_KEY){
      Serial.print(keypressed);
    }
}
