int x=800;
int y=500;
void setup() {
  // put your setup code here, to run once:
  
    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
          pinMode(5,OUTPUT);
            pinMode(6,OUTPUT);
              pinMode(7,OUTPUT);
                pinMode(8,OUTPUT); 
                  pinMode(9,OUTPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
     x=analogRead(A0);
     y=x/2 ;
      digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
     delay(analogRead(A0));              // wait for a second
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  delay(analogRead(A0/2));              // wait for a second
   digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
  delay(analogRead(A0/2));              // wait for a second
      digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  delay(analogRead(A0/2));              // wait for a second
   digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay(analogRead(A0/2));              // wait for a second
        digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
  delay(analogRead(A0/2));              // wait for a second
   digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  delay(analogRead(A0/2));              // wait for a second
      digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(analogRead(A0/2));              // wait for a second
   digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  delay(analogRead(A0/2));              // wait for a second
     digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(analogRead(A0/2));              // wait for a second
      digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  delay(analogRead(A0/2));              // wait for a second
   digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
  delay(analogRead(A0/2));              // wait for a second
        digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay(analogRead(A0/2));              // wait for a second
   digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  delay(analogRead(A0/2));              // wait for a second
      digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
  delay(analogRead(A0/2));              // wait for a second
   digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  delay(analogRead(A0/2));              // wait for a second
     digitalWrite(2, HIGH);  
        digitalWrite(9, HIGH);  
        delay(analogRead(A0));
      digitalWrite(2,LOW);   // turn the LED on (HIGH is the voltage level)
          digitalWrite(9, LOW);  
       delay(analogRead(A0));
         digitalWrite(3, HIGH);  
        digitalWrite(8, HIGH);  
        delay(analogRead(A0));
      digitalWrite(3,LOW);   // turn the LED on (HIGH is the voltage level)
          digitalWrite(8, LOW);  
       delay(analogRead(A0));
         digitalWrite(4, HIGH);  
        digitalWrite(7, HIGH);  
        delay(analogRead(A0));
      digitalWrite(4,LOW);   // turn the LED on (HIGH is the voltage level)
          digitalWrite(7, LOW);  
       delay(analogRead(A0));
         digitalWrite(5, HIGH);  
        digitalWrite(6, HIGH);  
        delay(analogRead(A0));
      digitalWrite(5,LOW);   // turn the LED on (HIGH is the voltage level)
          digitalWrite(6, LOW);  
       delay(analogRead(A0));
       
}
