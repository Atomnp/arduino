
#define LED1 2
#define LED2 3
#define LED3 4
#define LED4 5
#define SENSOR1 8
#define SENSOR2 9
#define Enable 5
 
void setup() {
  pinMode(LED1 ,OUTPUT);
  pinMode(LED2 ,OUTPUT);
  pinMode(LED3 ,OUTPUT);
  pinMode(LED4 ,OUTPUT);
  pinMode(SENSOR1,INPUT);
  pinMode(SENSOR2,INPUT);
  pinMode (Enable , OUTPUT);
  
}

void loop() {

  digitalWrite(Enable,HIGH);
  if( ( digitalRead(SENSOR1) == HIGH )&& ( digitalRead(SENSOR2) == HIGH ) ){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,LOW);
  }
  
  else if( (digitalRead(SENSOR1) == HIGH ) && (digitalRead(SENSOR2) == LOW ) ){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,HIGH);
  }

  else if( ( digitalRead(SENSOR1) == LOW )&& ( digitalRead(SENSOR2) == HIGH ) ){
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,LOW);
  }

}
