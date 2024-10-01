const int buttonPin = 2;
const int RledPin = 3;
const int GledPin = 4;
const int BledPin = 3;

int buttonState = 0;
int ledcolor = 0;

void setup() {
  pinMode(RledPin, OUTPUT);
  pinMode(GledPin, OUTPUT);
  pinMode(BledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  
  if(buttonState == HIGH) {
    ledcolor = ledcolor + 1;
    delay(100);
  }
  if (ledcolor == 0){
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
  }
  else if(ledcolor == 1){
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
  }
  else if(ledcolor == 2){
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, HIGH);
  }
  else if(ledcolor == 3){
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, LOW);
  }
  else if(ledcolor == 4){
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, LOW);
  digitalWrite(BledPin, HIGH);
  }
  else if(ledcolor == 5){
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, LOW);
  }
  else if(ledcolor == 6){
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, LOW);
  }
  else if(ledcolor == 7){
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, LOW);
  }
  else if(ledcolor == 8){
    ledcolor = 0;
  }
}
