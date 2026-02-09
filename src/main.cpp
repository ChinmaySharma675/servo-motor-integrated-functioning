#include <Arduino.h>
#include<Servo.h>
Servo myServo;
#define SERVO_PIN 9
void setup() {
// write your initialization code here
    myServo.attach(SERVO_PIN);
    Serial.begin(9600);
}

void loop() {
// write your code here
    myServo.write(SERVO_PIN);
    delay(1000);
    myServo.write(0);
    delay(1000);
    myServo.write(120);
}