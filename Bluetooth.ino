include <SoftwareSerial.h>

const int RX_PIN = 0;
const int TX_PIN = 1;
SoftwareSerial serial(RX_PIN, TX_PIN);
char commandChar;

void setup()
{
  pinMode(13, OUTPUT);//Light Flash
  serial.begin (9600);
  //randomSeed(analogRead(0))
}

void loop() 
{
  
  serial.println("This shit is working bitches");
  
    
  if(serial.available())
  {
    commandChar = serial.read();
    switch(commandChar)
    {
      case 'z':
        digitalWrite(13, HIGH);//test light to prove sub
        serial.println("LED ON");
      break;
      
      case 'x':
        digitalWrite(13, LOW);//test light to prove sub
        //serial.print(random(1000) + "#");
        serial.println("LED OFF");
      break;
    }
  }
  delay(5000);
}
