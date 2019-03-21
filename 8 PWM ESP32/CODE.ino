
int PWM_FREQUENCY = 1000;  
int PWM_CHANNEL = 0;     
int PWM_RESOUTION = 8;   
int GPIOPIN = 15 ;      
 
void setup()
{
 
  ledcSetup(PWM_CHANNEL, PWM_FREQUENCY, PWM_RESOUTION);
  ledcAttachPin(GPIOPIN, PWM_CHANNEL);

 
}
 
void loop() 
{
 
for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle++) 
{
    ledcWrite(PWM_CHANNEL, dutyCycle);
    delay(100);
}
}
