#define LED1 3
#define LED2 2
#define LED3 5
#define LED4 4
#define SENSOR3 7
#define SENSOR6 9
 
void setup() {
  Serial.begin(9600);
  pinMode(LED1 ,OUTPUT);
  pinMode(LED2 ,OUTPUT);
  pinMode(LED3 ,OUTPUT);
  pinMode(LED4 ,OUTPUT);
  pinMode(SENSOR3,INPUT);
  pinMode(SENSOR6,INPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
if( (digitalRead(SENSOR3) == HIGH)&& (digitalRead(SENSOR6)==HIGH) ){
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,LOW);
  
  }
  else if( (digitalRead(SENSOR3) == HIGH)&& (digitalRead(SENSOR6) == LOW ) ){
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,LOW);
    }

    else if( (digitalRead(SENSOR3) == LOW )&& (digitalRead(SENSOR6) == HIGH ) ){
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,HIGH);
    }

}
