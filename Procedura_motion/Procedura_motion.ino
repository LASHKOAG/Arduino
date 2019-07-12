//процедура для работы L298N, движение вперед и назад
#define N1 8
#define N2 7
#define N3 12
#define N4 4
#define EA 11
#define EB 10

void setup() {
  pinMode(N1, OUTPUT);
  pinMode(N2, OUTPUT);
  pinMode(N3, OUTPUT);
  pinMode(N4, OUTPUT);
  pinMode(EA, OUTPUT);
  pinMode(EB, OUTPUT);
}

void motion(int speed1, int speed2){
  if(speed1>=0 && speed2>=0){      // 1-ый случай
  digitalWrite (N1, LOW);
  digitalWrite (N2, HIGH);
  digitalWrite (N3, LOW);
  digitalWrite (N4, HIGH);
  analogWrite(EA, speed1);
  analogWrite(EB, speed2);
  }
  if(speed1<0 && speed2>=0){
  speed1=abs(speed1);             // 2-ой случай
  digitalWrite (N1, HIGH);
  digitalWrite (N2, LOW);
  digitalWrite (N3, LOW);
  digitalWrite (N4, HIGH);
  analogWrite(EA, speed1);
  analogWrite(EB, speed2);
  } 
  if(speed1>=0 && speed2<0){
   speed2=abs(speed2);          // 3-ий случай
  digitalWrite (N1, LOW);
  digitalWrite (N2, HIGH);
  digitalWrite (N3, HIGH);
  digitalWrite (N4, LOW);
  analogWrite(EA, speed1);
  analogWrite(EB, speed2);
  }
  if(speed1<0 && speed2<0){
    speed1=abs(speed1);         // 4-ый случай
    speed2=abs(speed2);
  digitalWrite (N1, HIGH);
  digitalWrite (N2, LOW);
  digitalWrite (N3, HIGH);
  digitalWrite (N4, LOW);
  analogWrite(EA, speed1);
  analogWrite(EB, speed2);
  }   
}
void loop() {
  // проверка 1-го случая состоит из следующих:
  //motion(100,100);
  //delay(5000);
  
  //motion(0,100);
//delay(5000);

//motion(100,0);
//delay(5000);

// второй случай:
//motion(-100,100);
//delay(5000);

//motion(-100,0);
//delay(5000);

// третий случай:
//motion(100,-100);
//delay(5000);

//motion(0,-100);
//delay(5000);

//четвертый случай:
//motion(-100,-100);
//delay(5000);

//motion(-30,-100);
//delay(5000);

//motion(-100,-30);
//delay(5000);
}
