#define touchPin 2
int count = 0;
void setup() {
  Serial.begin(9600);
  pinMode(touchPin, INPUT);
}

void loop() {
  int touchValue = digitalRead(touchPin);
  if(touchValue == HIGH){
    count++;
    Serial.println("Touched " + String(count) + " times");
    }
    delay(300);
}
