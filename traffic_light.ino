// Arduino Traffic Light System
// Red LED    -> Pin 8
// Yellow LED -> Pin 9
// Green LED  -> Pin 10

const int RED_LED = 8;
const int YELLOW_LED = 9;
const int GREEN_LED = 10;

// Traffic light timing values in milliseconds
const int RED_TIME = 5000;
const int YELLOW_TIME = 2000;
const int GREEN_TIME = 5000;

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop() {

  // RED - STOP
  digitalWrite(RED_LED, HIGH);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(GREEN_LED, LOW);
  delay(RED_TIME);

  // YELLOW - WAIT
  digitalWrite(RED_LED, LOW);
  digitalWrite(YELLOW_LED, HIGH);
  digitalWrite(GREEN_LED, LOW);
  delay(YELLOW_TIME);

  // GREEN - GO
  digitalWrite(RED_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(GREEN_LED, HIGH);
  delay(GREEN_TIME);
}
