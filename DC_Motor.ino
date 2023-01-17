// DC Motor
 Serial.println("One way, then reverse");
    digitalWrite(ENABLE,HIGH); ) {
    digitalWrite(DIRA,HIGH); 
    digitalWrite(DIRB,LOW);
    delay(100);
    digitalWrite(DIRA,LOW);  
    digitalWrite(DIRB,HIGH);
    delay(100);
  }
  digitalWrite(ENABLE,LOW); 
  delay(1000);



