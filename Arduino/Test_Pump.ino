
void setup() {

 pinMode(23,OUTPUT); // Orange
 pinMode(25,OUTPUT); // Passion
 pinMode(27,OUTPUT); // Pomme Kiwi
 pinMode(29,OUTPUT); // Pina Colada

 }

 
void loop() {

digitalWrite(23,HIGH);

digitalWrite(25,HIGH);

digitalWrite(27,HIGH);
 
digitalWrite(29,HIGH);

delay (1000);

digitalWrite(23,LOW);
delay(1000);

digitalWrite(23,HIGH);
delay(1000);

digitalWrite(25,LOW);
delay(1000);

digitalWrite(25,HIGH);
delay(1000);

digitalWrite(27,LOW);
delay(1000);

digitalWrite(27,HIGH);
delay(1000);

digitalWrite(29,LOW);
delay(1000);

digitalWrite(29,HIGH);
delay(1000);

}
