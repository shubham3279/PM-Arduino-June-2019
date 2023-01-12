// OBJECTIVE: Write a code to blink on-board LED of Arduino, and observe the delay time below which the blink is not percieveable by the eyes.


// It was observed that upto around 120ms delay time, the blink is percievable. Below that, it appears as constant ON or OFF respectively.

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //The on-board led for Arduino modules is connected to pin13 for reasons of code portability.
  digitalWrite(13, HIGH);
  delay(150);
  digitalWrite(13, LOW);
  delay(150);
}
