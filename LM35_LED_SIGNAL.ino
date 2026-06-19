void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  float temp = voltage * 100;
  //Using a buzzer or LED, signals when the temperature reaches 35 degree 
  if (temp>35){
    //Repeat the signals 4 times
    for(int i=0;i<=3;i++){
      digitalWrite(7, HIGH);
      delay(100);
      digitalWrite(7, LOW);
      delay(100);
    }
    
  }else{
    digitalWrite(7,LOW);
  }
  //Serial.println("Voltage : ");
  //Serial.println(voltage);
  Serial.println("Temperature : ");
  Serial.println(temp);

  delay(500);
}
