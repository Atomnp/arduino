  
  #define MOTOR1 2    //Connected to pin 2 of L293D
  #define MOTOR2 3    //Connected to pin 7 of L293D 
  #define MOTOR3 5    //Connected to pin 10 of L293D
  #define MOTOR4 6    //Connected to pin 15 of L293D
  #define IR1 8       //Left Sensor
  #define IR2 9       //Right Sensor
  #define Enable 4    //Connected to pin En1 & En2 of L293D
   
  void setup() {
    
    pinMode(MOTOR1 ,OUTPUT);
    pinMode(MOTOR2 ,OUTPUT);
    pinMode(MOTOR3 ,OUTPUT);
    pinMode(MOTOR4 ,OUTPUT);
    pinMode(IR1,INPUT);
    pinMode(IR2,INPUT);
    pinMode (Enable , OUTPUT);
    
  }
  
  void loop() {
   
    if( digitalRead(IR1)&& digitalRead(IR2) ){
      digitalWrite(Enable,HIGH);
      digitalWrite(MOTOR1,HIGH);
      digitalWrite(MOTOR2,LOW);
      digitalWrite(MOTOR3,HIGH);
      digitalWrite(MOTOR4,LOW);
    }
    
    else if( digitalRead(IR1) && !digitalRead(IR2) ){
      digitalWrite(Enable,HIGH);
      digitalWrite(MOTOR1,HIGH);
      digitalWrite(MOTOR2,LOW);
      digitalWrite(MOTOR3,LOW);
      digitalWrite(MOTOR4,HIGH);
    }
  
    else if( !digitalRead(IR1) && digitalRead(IR2) ){
      digitalWrite(Enable,HIGH);
      digitalWrite(MOTOR1,LOW);
      digitalWrite(MOTOR2,HIGH);
      digitalWrite(MOTOR3,HIGH);
      digitalWrite(MOTOR4,LOW);
    }
  
    else if( !digitalRead(IR1) && !digitalRead(IR2) ){
      digitalWrite(Enable,LOW);
    }
  
    delay(500);
  
  }
