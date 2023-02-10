int counter = 0;
int tst = 0;

void setup()
{ 
 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(9,INPUT);
}

void func2()
{
    for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
   } 
}

void func ()
{
    for(int i=2;i<9;i++)
  {
    digitalWrite(i,LOW);
   } 
}
 
void loop() 
{
if(digitalRead(9)== HIGH && tst == 0)
{
func();
counter++;
switch(counter)
{
  case 1:  func();
            digitalWrite(8,HIGH);
            delay(600);
             break;

  case 2: 
  func();
  digitalWrite(2,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(8,HIGH);
   delay(600);
   break;

  case 3:
  func();
  digitalWrite(7,HIGH);
  digitalWrite(4,HIGH);
   delay(600);
   break;

  case 4:
  func();
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
   delay(600);
   break;

  case 5:
  func();
  digitalWrite(2,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
   delay(600);
   func2();
   break;

  case 6:
  func();
  digitalWrite(6,HIGH);
  digitalWrite(3,HIGH);
   delay(600);
   break;

  case 7:
  func();
  digitalWrite(3,HIGH);
   delay(600);
    break;

  case 8:
  func();
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
   delay(600);
   break;
  
  case 9:
  func();
  delay(600);
  break;

  case 10:
  func();
  digitalWrite(6,HIGH);
   delay(600);
   break;

  case 11:
  func();
  digitalWrite(5,HIGH);
   delay(600);
   break;

  case 12:
  func();
  delay(600);
  break;

  case 13:
  func();
   digitalWrite(8,HIGH);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   delay(600);
   break;

  case 14:
  func();
  digitalWrite(8,HIGH);
  delay(600);
  break;

  case 15:
  func();
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
   delay(600);
   break;
  
  case 16:
  func();
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
   delay(600);
   break;

  case 17:
  func();
  digitalWrite(3,HIGH);
   delay(600);
   break;
  
  case 18:
  func();
  digitalWrite(2,HIGH);
  digitalWrite(5,HIGH);
   delay(600);
   break;
  }
  tst=1;
}
else 
{
  func2();
  delay(600);
  tst=0;
}
}
