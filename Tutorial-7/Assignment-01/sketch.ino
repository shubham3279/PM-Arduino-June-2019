int outPin = 9,
    delayTime = 1000;

void setup(){
    pinMode(outPin, OUTPUT);
}

void loop(){
    analogWrite(outPin, 0);
    delay(delayTime);
    analogWrite(outPin, 30);
    delay(delayTime);
    analogWrite(outPin, 55);
    delay(delayTime);
    analogWrite(outPin, 80);
    delay(delayTime);
    analogWrite(outPin, 105);
    delay(delayTime);
    analogWrite(outPin, 130);
    delay(delayTime);
    analogWrite(outPin, 155);
    delay(delayTime);
    analogWrite(outPin, 180);
    delay(delayTime);
    analogWrite(outPin, 205);
    delay(delayTime);
    analogWrite(outPin, 230);
    delay(delayTime);
    analogWrite(outPin, 255);
    delay(delayTime);
    
}