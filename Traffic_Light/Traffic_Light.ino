const int red1 = 2;
const int green1 = 3;
const int red2 = 4;
const int green2 = 5;
const int red3 = 6;
const int green3 = 7;
const int red4 = 8;
const int green4 = 9;
const int trig = 10;
const int echo = 11;
const int led = 12;

long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
  pinMode(red1, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(red3, OUTPUT);
  pinMode(green3, OUTPUT);
  pinMode(red4, OUTPUT);
  pinMode(green4, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
}

void loop() {

      
      
      //code for green1
      digitalWrite(green1, HIGH);
      digitalWrite(green2, LOW);
      digitalWrite(green3, LOW);
      digitalWrite(green4, LOW);
      digitalWrite(red2, HIGH);
      digitalWrite(red1, LOW);
      digitalWrite(red3, HIGH);
      digitalWrite(red4, HIGH);
      delay(20000);

      //code for distance at green2 
      digitalWrite(trig, HIGH);
      delayMicroseconds(1000);

      digitalWrite(trig, LOW);
      duration = pulseIn(echo, HIGH);
      digitalWrite(trig, LOW);

      distance = duration*0.034/2;

      Serial.println("Distance : ");
      Serial.println(distance);
      delay(10);

      if(distance <= 10)
      {
        digitalWrite(led, HIGH);
      }
      else if(distance > 10)
      {
        digitalWrite(led, LOW);
      }

      //code for green2
      digitalWrite(green2, HIGH);
      digitalWrite(green1, LOW);
      digitalWrite(green3, LOW);
      digitalWrite(green4, LOW);
      digitalWrite(red1, HIGH);
      digitalWrite(red2, LOW);
      digitalWrite(red3, HIGH);
      digitalWrite(red4, HIGH);
      delay(10000); 

      //code for green3
      digitalWrite(green3, HIGH);
      digitalWrite(red1, HIGH);
      digitalWrite(red2, HIGH);
      digitalWrite(red4, HIGH);
      digitalWrite(green2, LOW);
      digitalWrite(green1, LOW);
      digitalWrite(green4, LOW);
      delay(10000);

      //code for green4
      digitalWrite(green4, HIGH);
      digitalWrite(green1, LOW);
      digitalWrite(green2, LOW);
      digitalWrite(green3, LOW);
      digitalWrite(red1, HIGH);
      digitalWrite(red2, HIGH);
      digitalWrite(red3, HIGH);
      digitalWrite(red4, LOW);
      delay(10000); 
}
