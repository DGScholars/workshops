int analogPin = A0;
int noteToPlay;
int sound; int speaker = 12;
void setup() {
Serial.begin(9600);
pinMode(analogPin, INPUT);
}
void loop() {
sound= analogRead(analogPin);
delay(0);
int notes[21] = {65, 73, 82, 87, 98, 110, 123, 131, 147, 165, 175, 196, 220, 247,262, 294, 330, 349, 392, 440, 494};
noteToPlay= map(sound, 0,1023, 0, 21);
tone(speaker, notes[noteToPlay]); delay(10);
}
