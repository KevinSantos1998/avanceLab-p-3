//Default baud speed for communication
#define BAUD 9600


void setup(){
  Serial.begin(BAUD);
}

void loop(){
  String input;
  if(Serial.available() > 0){
    input = Serial.readStringUntil('\n');
    Serial.println(input + " - received");
  }
}
