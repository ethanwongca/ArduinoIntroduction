//Servo Motor Code

void setup(){
  myservo.attach(9);
  myservo.write(360);
} 
void loop(){
  myservo.write(360);
  delay(500);
  myservo.write(0);
  delay(100);
  myservo.write(360);
  delay(100);
  myservo.write(0);

  delay(100);
}



