// C++ code
//
int buzzer=3;
int button1=12;
int button2=11;
int button3=10;
int button4=9;
int button5=8;
int button6=7;
int button7=6;
int button8=5;

void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  pinMode(button3,INPUT);
  pinMode(button4,INPUT);
  pinMode(button5,INPUT);
  pinMode(button6,INPUT);
  pinMode(button7,INPUT);
  pinMode(button8,INPUT);
}

void loop()
{
  if(digitalRead(button1)==LOW)
  {
    tone(buzzer,500,300);
    delay(200);
    noTone(buzzer);
  }
  if(digitalRead(button2)==LOW)
  {
    tone(buzzer,1000,300);
    delay(200);
    noTone(buzzer);
  }
  if(digitalRead(button3)==LOW)
  {
    tone(buzzer,1500,300);
    delay(200);
    noTone(buzzer);
  }
  if(digitalRead(button4)==LOW)
  {
    tone(buzzer,2000,300);
    delay(200);
    noTone(buzzer);
  }
  if(digitalRead(button5)==LOW)
  {
    tone(buzzer,2500,300);
    delay(200);
    noTone(buzzer);
  }
  if(digitalRead(button6)==LOW)
  {
    tone(buzzer,3000,300);
    delay(200);
    noTone(buzzer);
  }
  if(digitalRead(button7)==LOW)
  {
    tone(buzzer,3500,300);
    delay(200);
    noTone(buzzer);
  }
  if(digitalRead(button8)==LOW)
  {
    tone(buzzer,4000,300);
    delay(200);
    noTone(buzzer);
  }
}  
