void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  Serial.begin(9600);
}

int in[4];
int i=0;

byte im=0;
void loop()
{
  if(Serial.available()>0)
  {
  	

    
    in[i]=Serial.read();
    i++;
      
      
    
    im=char(in[0]);
    im=im-'0';
    digitalWrite(2,im&0x1);
    digitalWrite(3,(im>>1)&0x1);
    digitalWrite(4,(im>>2)&0x1);
    digitalWrite(5,(im>>3)&0x1);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    
  	delay(10);
    
    im=char(in[1]);
    im=im-'0';
    digitalWrite(2,im&0x1);
    digitalWrite(3,(im>>1)&0x1);
    digitalWrite(4,(im>>2)&0x1);
    digitalWrite(5,(im>>3)&0x1);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    
  	delay(10);
    
    im=char(in[2]);
    im=im-'0';
    digitalWrite(2,im&0x1);
    digitalWrite(3,(im>>1)&0x1);
    digitalWrite(4,(im>>2)&0x1);
    digitalWrite(5,(im>>3)&0x1);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    
  	delay(10);
    
    
    im=char(in[3]);
    im=im-'0';
    digitalWrite(2,im&0x1);
    digitalWrite(3,(im>>1)&0x1);
    digitalWrite(4,(im>>2)&0x1);
    digitalWrite(5,(im>>3)&0x1);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    
  	delay(10);
  }
}
