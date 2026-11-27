#define IN1 7
#define IN2 8
#define IN3 9
#define IN4 10

int a = 1000;// LED가 켜진시간 대입
int b = 1000;// LED가 꺼지고 나서 다시 켜지기까지 걸리는 시간

void setup() {

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH); //Active Low 릴레이에서 처음에 모두켜지는 현상 방지
  
}

void loop () { //원하는 릴레이 작동 패턴 입력

   


  digitalWrite(IN1, LOW);
  delay(a);
  digitalWrite(IN1, HIGH);

  delay(b);

  digitalWrite(IN2, LOW);
  delay(a);
  digitalWrite(IN2, HIGH);

  delay(b);

  digitalWrite(IN3, LOW);
  delay(a);
  digitalWrite(IN3, HIGH);

  delay(b);

  digitalWrite(IN4, LOW);
  delay(a);
  digitalWrite(IN4, HIGH);

  delay(b);

  digitalWrite(IN3, LOW);
  delay(a);
  digitalWrite(IN3, HIGH);

  delay(b);

  digitalWrite(IN2, LOW);
  delay(a);
  digitalWrite(IN2, HIGH);

  delay(b);


}

