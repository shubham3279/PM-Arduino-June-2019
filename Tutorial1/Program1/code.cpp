// Working with On-Board LED

void setup() {
  // put your setup code here, to run once:

  // 
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //The on-board led for Arduino modules is connected to pin13 for reasons of code portability.
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
