#define buzzer 9
const int trigpin = 6 ;
const int echopin = 5 ;

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

  duration = pulseIn(echopin, HIGH);

  distance = duration * 0.034 / 2  * 0.01 ;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" m");
  if(distance <= 1){
    tone(9 , 220 , 200);
  }
  delay(100);
  }
