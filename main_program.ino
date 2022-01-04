#include <IRremote.h>


const int receiver = 6; 
const int led = 5;

IRrecv ir_receiver(receiver);           
decode_results results;          

void setup()   
{
  Serial.begin(9600);
  ir_receiver.enableIRIn(); 
  pinMode(led, OUTPUT);  
}


void loop() 
{
  if (ir_receiver.decode(&results))

  {
    Serial.println(results.value, HEX);
    translateIR(); 
    ir_receiver.resume(); 
    delay(200); 
  } 
  
}

void translateIR() 

{
  int sensorValue=0;
  sensorValue = digitalRead(led);
  
  switch(results.value){

  case 0x32E9:
    if (sensorValue==0){
      
      Serial.println(" ON "); 
      digitalWrite(led, HIGH);
      delay(750); 
      break;
    }
    
  case 0x52E9:
    if (sensorValue==1){
      
      Serial.println(" OFF "); 
      digitalWrite(led, LOW); 
      break;
  }
  default: 
    Serial.println(" other button   ");
  }
}
