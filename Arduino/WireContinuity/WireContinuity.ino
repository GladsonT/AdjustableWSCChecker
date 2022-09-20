const int correctLed = 2;
const int incorrectLed = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(correctLed, OUTPUT);
  pinMode(incorrectLed, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  if (Serial.available()){
    String data = Serial.readString();
    data.trim();
    if(data == "Correct"){
      digitalWrite(correctLed, HIGH);
      digitalWrite(incorrectLed, LOW);
    } else if (data == "Incorrect"){
      digitalWrite(correctLed, LOW);
      digitalWrite(incorrectLed, HIGH);
    }
  }
}
