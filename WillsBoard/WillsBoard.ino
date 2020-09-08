
int Pins[] = {24,25,26,27,28};
void setup() {
  for(int i = 0; i < 5; i++){
    pinMode(Pins[i],OUTPUT);
    }
    Serial.begin(9600);
}
void loop() {
  for(int i = 0; i < 5; i++){
    digitalWrite(Pins[i],HIGH);
    Serial.println(Pins[i]);
    delay(2000);
    digitalWrite(Pins[i],LOW);
  }
}
// ROW 0 | 25
// ROW 1 | 26
// ROW 2 | 27
// ROW 3 | 28
