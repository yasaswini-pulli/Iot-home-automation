
char data;

void setup() {
  pinMode(13, OUTPUT); // Light 1
  pinMode(12, OUTPUT); // Light 2

  Serial.begin(9600);
  Serial.println("Home Automation Ready! Send 1 for ON, 0 for OFF");
}

void loop() {
  if (Serial.available()) {
    data = Serial.read();

    if (data == '1') {
      digitalWrite(13, HIGH);
      Serial.println("Light 1 - ON");
    }

    if (data == '0') {
      digitalWrite(13, LOW);
      Serial.println("Light 1 - OFF");
    }

    if (data == '2') {
      digitalWrite(12, HIGH);
      Serial.println("Light 2 - ON");
    }

    if (data == '3') {
      digitalWrite(12, LOW);
      Serial.println("Light 2 - OFF");
    }
  }
}
