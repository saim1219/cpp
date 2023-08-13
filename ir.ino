int ir=7;
int led=8;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(ir,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(ir)==HIGH)
{
  digitalWrite(led,HIGH);
}
else
{
  digitalWrite(led,LOW);
}
Serial.println(ir);
}
