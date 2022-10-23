#define LED_GREEN 23
#define LED_YELLOW 22
#define LED_RED 21

void setup() {
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_RED, OUTPUT);
}

void loop() {
  //Rojo
  digitalWrite(LED_RED, HIGH);
  delay(1500);
  digitalWrite(LED_RED, LOW);

  //Amarillo
  digitalWrite(LED_YELLOW, HIGH);
  delay(1500);
  digitalWrite(LED_YELLOW, LOW);

  //Verde
  digitalWrite(LED_GREEN, HIGH);
  delay(1500);
  digitalWrite(LED_GREEN, LOW);

}
