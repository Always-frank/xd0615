#include <MsTimer2.h> 
int pinInterrupt=2;
int tick = 0; //计数值
int state=0;
void onTimer()
{
  Serial.print("timer ");
  Serial.println(tick++);
}
void myfunc()
{
  tick=0;
  digitalWrite(13,LOW);
  
  
}
void setup()
{
  pinMode( pinInterrupt, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(13,OUTPUT);
  digitalWrite(pinInterrupt,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(13,LOW);
  Serial.begin(9600);
  attachInterrupt( digitalPinToInterrupt(pinInterrupt), myfunc, CHANGE);
  MsTimer2::set(1000, onTimer); //设置中断，每1000ms进入一次中断服务程序 onTimer()
  MsTimer2::start(); //开始计时
  
  
}

void loop()
{
  
  if(tick<=9){
  	digitalWrite(3,tick&0x1); 
  	digitalWrite(4,(tick>>1)&0x1); 
  	digitalWrite(5,(tick>>2)&0x1); 
 	digitalWrite(6,(tick>>3)&0x1);
    digitalWrite(7,HIGH);
  	digitalWrite(8,HIGH);
  	digitalWrite(9,LOW);
  }
  else
  {
    tick=tick%10;
    digitalWrite(3,tick&0x1); 
  	digitalWrite(4,(tick>>1)&0x1); 
  	digitalWrite(5,(tick>>2)&0x1); 
 	digitalWrite(6,(tick>>3)&0x1);
    digitalWrite(7,HIGH);
  	digitalWrite(8,HIGH);
  	digitalWrite(9,LOW);
  }
}