int pos = 0;//定义整数pos初始为0

void setup()
{
  pinMode(8, OUTPUT);//设置端口8为输出
  pinMode(6, OUTPUT);//设置端口6为输出
  pinMode(7, OUTPUT);//设置端口7为输出
}

void loop()
{
  
  noTone(8);//关闭8端口的任何声音
  tone(6, 880, 200); //端口6播放880hz的声音持续200ms
  delay(200); //延迟200ms
  
  noTone(6);//关闭6端口的任何声音
  tone(7, 988, 500); //端口7播放988hz的声音持续500ms
  delay(500); //延迟500ms
  
  noTone(7);//关闭7端口的任何声音
  tone(8, 1047, 300); //端口8播放1047hz的声音持续300ms
  delay(300); //延迟300ms
}