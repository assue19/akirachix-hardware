void setup() {
Serial.begin(19200);
pinMode(13,OUTPUT);
digitalWrite(13,LOW);

}

void loop() {
  if(Serial.available() > 0 ){
char ch = Serial.read();
Serial.print(ch); 

if (ch== 'm'){
digitalWrite(13,HIGH);

  }
  if(ch == 'a'){
    digitalWrite(13,LOW);
  }
  }
}
