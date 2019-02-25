int ledPin = 13;
// LED connected to digital pin 13
void setup()
{
pinMode(ledPin, OUTPUT);
  
}
void flash(int duration)
{
digitalWrite(ledPin, HIGH);
delay(duration);
digitalWrite(ledPin, LOW);
delay(duration);

}

void loop()
{
flash(200); flash(200); flash(200);
// S
delay(300);
// otherwise the flashes run together*//
flash(500); flash(500); flash(500);
// O
delay(300);
flash(200); flash(200); flash(200);
// S
delay(1000);
// wait 1 second before we start
}
