int outPin = 9,
    delayTime = 1000;

void setup(){
    pinMode(outPin, OUTPUT);
}

void loop(){
    analogWrite(outPin, 255);
    delay(delayTime);
    analogWrite(outPin, 125);
    delay(delayTime);
    analogWrite(outPin, 0);
    delay(delayTime);
}