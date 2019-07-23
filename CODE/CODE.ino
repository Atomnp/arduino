
#define MOTOR1 2
#define MOTOR2 3
#define MOTOR3 5
#define MOTOR4 6
#define SENSOR1 8
#define SENSOR2 9
#define Enable 4
 
void setup() {
  pinMode(MOTOR1 ,OUTPUT);
  pinMode(MOTOR2 ,OUTPUT);
  pinMode(MOTOR3 ,OUTPUT);
  pinMode(MOTOR4 ,OUTPUT);
  pinMode(SENSOR1,INPUT);
  pinMode(SENSOR2,INPUT);
  pinMode (Enable , OUTPUT);
  digitalWrite(Enable,HIGH);
  
}

void loop() {

  
  if( ( digitalRead(SENSOR1) == HIGH )&& ( digitalRead(SENSOR2) == HIGH ) ){
    digitalWrite(MOTOR1,HIGH);
    digitalWrite(MOTOR2,LOW);
    digitalWrite(MOTOR3,HIGH);
    digitalWrite(MOTOR4,LOW);
  }
  
  else if( (digitalRead(SENSOR1) == HIGH ) && (digitalRead(SENSOR2) == LOW ) ){
    digitalWrite(MOTOR1,HIGH);
    digitalWrite(MOTOR2,LOW);
    digitalWrite(MOTOR3,LOW);
    digitalWrite(MOTOR4,HIGH);
  }

  else if( ( digitalRead(SENSOR1) == LOW )&& ( digitalRead(SENSOR2) == HIGH ) ){
    digitalWrite(MOTOR1,LOW);
    digitalWrite(MOTOR2,HIGH);
    digitalWrite(MOTOR3,HIGH);
    digitalWrite(MOTOR4,LOW);
  }

}
