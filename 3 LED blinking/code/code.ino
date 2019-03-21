// We assigned a name LED pin to pin number 22
const int LEDPIN = 22;  

void setup()
{
// This statement will declare pin 22 as digital output   
pinMode(LEDPIN, OUTPUT);

}

void loop() 

{

    digitalWrite(LEDPIN, HIGH); 
    delay(1000);
 
    digitalWrite(LEDPIN, LOW);
    delay(1000);
 
}
