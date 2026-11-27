#define IN1 7
#define IN2 8
#define IN3 9
#define IN4 10

int a = 1000; // LED가 켜진시간 대입

void setup() {

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  
}

void loop () { //원하는 릴레이 작동 패턴 입력

   


  digitalWrite(IN1, LOW);
  delay(a);
  digitalWrite(IN1, HIGH);

  delay(10);

  digitalWrite(IN2, LOW);
  delay(a);
  digitalWrite(IN2, HIGH);

  delay(10);

  digitalWrite(IN3, LOW);
  delay(a);
  digitalWrite(IN3, HIGH);

  delay(10);

  digitalWrite(IN4, LOW);
  delay(a);
  digitalWrite(IN4, HIGH);

  delay(10);

  digitalWrite(IN3, LOW);
  delay(a);
  digitalWrite(IN3, HIGH);

  delay(10);

  digitalWrite(IN2, LOW);
  delay(a);
  digitalWrite(IN2, HIGH);

  delay(10);


}

