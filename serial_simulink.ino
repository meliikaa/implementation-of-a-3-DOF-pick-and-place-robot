uint8_t incomingBytes[3];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT); //set pin2 as output

}

void loop() {

 if (Serial.available() > 0) {
    // read the incoming byte:
//    incomingByte = Serial.read();
     Serial.readBytes(incomingBytes, 3);

    // say what you got:
    for(int i=0; i<3; i++){
      
      Serial.write(incomingBytes[i]);

    }
//    Serial.write(incomingByte);
  
//    if(incomingBytes[0] == 5)
//    digitalWrite(13, HIGH);
//    else
//    digitalWrite(13, LOW);
  }



  
  


    delay(1000);


}
