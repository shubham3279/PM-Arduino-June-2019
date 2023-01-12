int outPin = 12; //output Pin
int dotDelay = 200;
int dashDelay = 600;
int longDelay = 2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(outPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // ...
  digitalWrite(outPin,HIGH);
  delay(dotDelay);
  digitalWrite(outPin, LOW);
  delay(dotDelay);
  digitalWrite(outPin,HIGH);
  delay(dotDelay);
  digitalWrite(outPin, LOW);
  delay(dotDelay);
  digitalWrite(outPin,HIGH);
  delay(dotDelay);
  digitalWrite(outPin, LOW);
  delay(dotDelay);

  // ---
  digitalWrite(outPin,HIGH);
  delay(dashDelay);
  digitalWrite(outPin, LOW);
  delay(dashDelay);
  digitalWrite(outPin,HIGH);
  delay(dashDelay);
  digitalWrite(outPin, LOW);
  delay(dashDelay);
  digitalWrite(outPin,HIGH);
  delay(dashDelay);
  digitalWrite(outPin, LOW);
  delay(dashDelay);

  // ...
  digitalWrite(outPin,HIGH);
  delay(dotDelay);
  digitalWrite(outPin, LOW);
  delay(dotDelay);
  digitalWrite(outPin,HIGH);
  delay(dotDelay);
  digitalWrite(outPin, LOW);
  delay(dotDelay);
  digitalWrite(outPin,HIGH);
  delay(dotDelay);
  digitalWrite(outPin, LOW);
  delay(dotDelay);

  //additional delay
  delay(longDelay);
}
