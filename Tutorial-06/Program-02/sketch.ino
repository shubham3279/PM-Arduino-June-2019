int outPin1 = 2,
    outPin2 = 3,
    outPin3 = 4,
    outPin4 = 5,
    delayTime = 2000;

void setup(){
  pinMode(outPin1,OUTPUT);
  pinMode(outPin2,OUTPUT);
  pinMode(outPin3,OUTPUT);
  pinMode(outPin4,OUTPUT);
}

void loop(){
  //0
  digitalWrite(outPin1, LOW);
  digitalWrite(outPin2, LOW);
  digitalWrite(outPin3, LOW);
  digitalWrite(outPin4, LOW);
  delay(delayTime);

  //1
  digitalWrite(outPin1, LOW);
  digitalWrite(outPin2, LOW);
  digitalWrite(outPin3, LOW);
  digitalWrite(outPin4, HIGH);
  delay(delayTime);

  //2
  digitalWrite(outPin1, LOW);
  digitalWrite(outPin2, LOW);
  digitalWrite(outPin3, HIGH);
  digitalWrite(outPin4, LOW);
  delay(delayTime);

  //3
  digitalWrite(outPin1, LOW);
  digitalWrite(outPin2, LOW);
  digitalWrite(outPin3, HIGH);
  digitalWrite(outPin4, HIGH);
  delay(delayTime);

  //4
  digitalWrite(outPin1, LOW);
  digitalWrite(outPin2, HIGH);
  digitalWrite(outPin3, LOW);
  digitalWrite(outPin4, LOW);
  delay(delayTime);

  //5
  digitalWrite(outPin1, LOW);
  digitalWrite(outPin2, HIGH);
  digitalWrite(outPin3, LOW);
  digitalWrite(outPin4, HIGH);
  delay(delayTime);

  //6
  digitalWrite(outPin1, LOW);
  digitalWrite(outPin2, HIGH);
  digitalWrite(outPin3, HIGH);
  digitalWrite(outPin4, LOW);
  delay(delayTime);

  //7
  digitalWrite(outPin1, LOW);
  digitalWrite(outPin2, HIGH);
  digitalWrite(outPin3, HIGH);
  digitalWrite(outPin4, HIGH);
  delay(delayTime);

  //8
  digitalWrite(outPin1, HIGH);
  digitalWrite(outPin2, LOW);
  digitalWrite(outPin3, LOW);
  digitalWrite(outPin4, LOW);
  delay(delayTime);

  //9
  digitalWrite(outPin1, HIGH);
  digitalWrite(outPin2, LOW);
  digitalWrite(outPin3, LOW);
  digitalWrite(outPin4, HIGH);
  delay(delayTime);

  //10
  digitalWrite(outPin1, HIGH);
  digitalWrite(outPin2, LOW);
  digitalWrite(outPin3, HIGH);
  digitalWrite(outPin4, LOW);
  delay(delayTime);

  //11
  digitalWrite(outPin1, HIGH);
  digitalWrite(outPin2, LOW);
  digitalWrite(outPin3, HIGH);
  digitalWrite(outPin4, HIGH);
  delay(delayTime);

  //12
  digitalWrite(outPin1, HIGH);
  digitalWrite(outPin2, HIGH);
  digitalWrite(outPin3, LOW);
  digitalWrite(outPin4, LOW);
  delay(delayTime);

  //13
  digitalWrite(outPin1, HIGH);
  digitalWrite(outPin2, HIGH);
  digitalWrite(outPin3, LOW);
  digitalWrite(outPin4, HIGH);
  delay(delayTime);

  //14
  digitalWrite(outPin1, HIGH);
  digitalWrite(outPin2, HIGH);
  digitalWrite(outPin3, HIGH);
  digitalWrite(outPin4, LOW);
  delay(delayTime);

  //15
  digitalWrite(outPin1, HIGH);
  digitalWrite(outPin2, HIGH);
  digitalWrite(outPin3, HIGH);
  digitalWrite(outPin4, HIGH);
  delay(delayTime);
}

  