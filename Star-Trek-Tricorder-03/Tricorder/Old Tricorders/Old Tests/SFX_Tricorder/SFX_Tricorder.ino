
const int buzzer = 8;//Defines The Buzzer
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);//Sets the Led as the Output
  pinMode(buzzer, OUTPUT);//Sets the Buzzer as the Output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);//Turns on the LED
  tone(buzzer, 3000);//Rings the Buzzer at 3 Hertz
  delay(10);//Waits 10 Millisecs
  digitalWrite(LED_BUILTIN, LOW);//Turns Off The LED
  noTone(buzzer);//Turns off the Buzzer
  delay(30);//Waits 30 Millisecs
}
//Use This With Another Board Not Your Main Tricorder
//This Will Be Put Together Into One Shell(Or Just Use a Larger Bread Board) 
