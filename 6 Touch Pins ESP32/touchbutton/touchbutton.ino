#define touch_pin_numer T0
const int LED_PIN_NUMBER = 22;
const int VALUE_THRESHOLD = 20;
int TOUCH_SENSOR_VALUE;
void setup()
{
delay(1000); 
pinMode (LED_PIN_NUMBER, OUTPUT);
}
void loop(){
TOUCH_SENSOR_VALUE = touchRead(touch_pin_numer);
Serial.print(TOUCH_SENSOR_VALUE);
if(TOUCH_SENSOR_VALUE < VALUE_THRESHOLD)
{
 digitalWrite(LED_PIN_NUMBER, HIGH);
}
else{
 digitalWrite(LED_PIN_NUMBER, LOW);
}
}
