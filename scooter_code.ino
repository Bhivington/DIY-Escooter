#include <PWM.h>
PwmOut escsignal(3);
int n = 0;
float measuredold = 500;
int target = 0;
float adjmeasured = 0;
void setup() {  
pinMode(5,INPUT_PULLUP);
pinMode(7,OUTPUT);
Serial.begin(9600);
pinMode(3,OUTPUT);
escsignal.begin(20000.0f,0.0f);}
void loop() {
//user input signal
int measured = analogRead(A1); //pwm from digital pin 3 passthrhough rc lowpass filter
adjmeasured = (0.95*adjmeasured) + (0.05*measured);
int err = target - adjmeasured;

escsignal.pulse_perc(map(constrain(target + (0.25 * err), 0, 1023),0,1023,0,100));
(!digitalRead(5)) ? digitalWrite(7,1):digitalWrite(7,0);
Serial.print(adjmeasured);
Serial.print(",");
Serial.println(target);
target = analogRead(A4); 
}