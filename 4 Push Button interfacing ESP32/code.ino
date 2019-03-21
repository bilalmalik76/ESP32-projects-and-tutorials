// We assigned a name LED pin to pin number 22
const int LEDPIN = 22;  
// this will assign the name PushButton to pin numer 15
const int PushButton = 15;
// This Setup function is used to initialize everything 
void setup()
{
// This statement will declare pin 22 as digital output   
pinMode(LEDPIN, OUTPUT);
// This statement will declare pin 15 as digital input 
pinMode(PushButton, INPUT);
}

void loop() 

{
// digitalRead function stores the Push button state 
// in variable push_button_state
int Push_button_state = digitalRead(PushButton);
// if condition checks if push button is pressed
// if pressed LED will turn on otherwise remain off 
if ( Push_button_state == HIGH )
    { 
    digitalWrite(LEDPIN, HIGH); 
    }
else 
   {
    digitalWrite(LEDPIN, LOW); 
   }
}
