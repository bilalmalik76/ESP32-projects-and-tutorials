
int hall_sensor_value = 0;
void setup() {
Serial.begin(9600);
}
void loop() {
hall_sensor_value = hallRead();
Serial.print("Hall sensor value = ");
Serial.println(hall_sensor_value);
delay(500);
}
