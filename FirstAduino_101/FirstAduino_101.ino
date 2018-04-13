 

  
  void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
  Serial.begin(9600);
  
  
    

}

void loop() {
  digitalWrite(LED_BUILTIN,HIGH);
  delay(0);
  
  Serial.print("LED ON \n");

  digitalWrite (LED_BUILTIN, LOW);
  
Serial.print("LED OFF \n");
delay(0);

}
