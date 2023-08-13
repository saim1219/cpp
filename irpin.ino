unsigned long stime;
unsigned long ptime=0;
unsigned long interval=20;
int flag = 0;
int irpin = 10;
int count =0;
int revers=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(irpin,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val= digitalRead(irpin);
  //Serial.println(val);
  stime=millis();
  
    
//    Serial.println("my");
  if(val== 0  && flag==0)
  {
    if(stime-ptime>=interval)
    {
    flag=1;
    Serial.print("   by   ");
    ptime=stime;
    count++;
    Serial.println(count);
    }
  }
  if(val ==  1 && flag ==1)
  {
    if(stime-ptime>=interval)
    {
    flag=0;
    Serial.print("   hi   ");
    ptime=stime;
    revers--;
    Serial.println(revers);
    }
  }
}
