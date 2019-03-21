
int touch_sensor_value=0;
void setup()
{
  Serial.begin(115200);
  Serial.println("Touch sensor tutorial ESP32");
}

void loop()
{

  touch_sensor_value = touchRead(T0);
  Serial.print("Touch0 value is = ");  
  Serial.println( touch_sensor_value);  
  delay(1000);
}
