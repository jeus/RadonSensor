
void setup() {
  // Simple arduino code for create Json and send by serial port
  Serial.begin(9600);
}

void loop() {
  // send the value of analog input 0:
 int analog = analogRead(A0);
 int humid = random(0,100); 
 int temp = random(0,100);
 long radon = random(0,200000);
 int pres = random(0,100);
 
 Serial.print("{\"Radon\":[{\"radon\": ");
 Serial.print(radon);
 Serial.print(",\"temp\": ");
 Serial.print(temp); 
 Serial.print(",\"hum\": ");
 Serial.print(humid);
 Serial.print(",\"pres\": ");
 Serial.print(pres);
 Serial.println("}]}");
 delay(1000);
}
