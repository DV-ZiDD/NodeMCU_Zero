const int D0 = 0;
const int D1 = 1;
const int D2 = 2;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN,HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN,LOW);
  delay()
  // digitalWrite(D0,HIGH);
  // digitalWrite(D1,HIGH);
  // digitalWrite(D2,HIGH);
}
