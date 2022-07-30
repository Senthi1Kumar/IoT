// To construct blink LED circuit using Arduino Nano

int pin=3;
void setup() {
  pinMode(pin, OUTPUT);

}

void loop() {
digitalWrite(pin, HIGH);
delay(3000);
digitalWrite(pin, LOW);
delay(2000);
}
