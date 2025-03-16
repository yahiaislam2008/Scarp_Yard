#define buzzer 15
#define trigpin  14 
#define echopin  12 

long duration;  
int distance;

void setup() {
  pinMode(trigpin , OUTPUT);
  pinMode(echopin , INPUT);
  Serial.begin(115200);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
  digitalWrite(buzzer , 15);
  duration = pulseIn(echopin, HIGH);

  distance = duration * 0.034 / 2   ;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  if(distance <= 30){
    // tone(9 , 220 , 200);
    digitalWrite(buzzer , 15);
    Serial.println("we are toooooo close!!");
  }
  else if(distance <= 80){
    // tone(9 , 220 , 200);
    digitalWrite(buzzer , 15);
    Serial.println("we are close!");
  }
  delay(100);
  }
