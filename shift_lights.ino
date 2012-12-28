
int data = 13;
int strobe = 12;
int clock = 11;

void send(int num)
{
  int i;
  for(i=0; i<10; i++) {
    int b;
    b = num & 512;
    if(b==0) 
      digitalWrite(data, LOW);
    else
      digitalWrite(data, HIGH);
    digitalWrite(clock, HIGH);
    digitalWrite(clock, LOW);
    num = num << 1;
  }
  digitalWrite(strobe, HIGH);
  digitalWrite(strobe, LOW);
}

void lightshow1()
{
  int i;
  for(i=0; i<8; i++) 
  {
  send(0b0000000001); delay(50);
  send(0b0000000010); delay(50);
  send(0b0000000100); delay(50);
  send(0b0000001000); delay(50);
  send(0b0000010000); delay(50);
  send(0b0000100000); delay(50);
  send(0b0001000000); delay(50);
  send(0b0010000000); delay(50);
  send(0b0100000000); delay(50);
  send(0b1000000000); delay(50);
  }
}

void lightshow2()
{
  int i;
  for(i=0; i<4; i++) 
  {
  send(0b0000000001); delay(50);
  send(0b0000000010); delay(50);
  send(0b0000000100); delay(50);
  send(0b0000001000); delay(50);
  send(0b0000010000); delay(50);
  send(0b0000100000); delay(50);
  send(0b0001000000); delay(50);
  send(0b0010000000); delay(50);
  send(0b0100000000); delay(50);
  send(0b1000000000); delay(50);
  send(0b0100000000); delay(50);
  send(0b0010000000); delay(50);
  send(0b0001000000); delay(50);
  send(0b0000100000); delay(50);
  send(0b0000010000); delay(50);
  send(0b0000001000); delay(50);
  send(0b0000000100); delay(50);
  send(0b0000000010); delay(50);
  }
}

void lightshow3()
{
  int i;
  for(i=0; i<8; i++) 
  {
  send(0b0000001001); delay(50);
  send(0b0000010010); delay(50);
  send(0b0000100100); delay(50);
  send(0b0001001000); delay(50);
  send(0b0010010000); delay(50);
  send(0b0100100000); delay(50);
  send(0b1001000000); delay(50);
  send(0b0010000001); delay(50);
  send(0b0100000010); delay(50);
  send(0b1000000100); delay(50);
  }
}


void lightshow4()
{
  int i;
  for(i=0; i<3; i++) 
  {
  send(0b0000000001); delay(50);
  send(0b0000000010); delay(50);
  send(0b0000000100); delay(50);
  send(0b0000001000); delay(50);
  send(0b0000010000); delay(50);
  send(0b0000100000); delay(50);
  send(0b0001000000); delay(50);
  send(0b0010000000); delay(50);
  send(0b0100000000); delay(50);
  send(0b1000000000); delay(50);
  send(0b0100000000); delay(50);
  send(0b0010000000); delay(50);
  send(0b0001000000); delay(50);
  send(0b0000100000); delay(50);
  send(0b0001000000); delay(50);
  send(0b0000100000); delay(50);
  send(0b0001000000); delay(50);
  send(0b0000100000); delay(50);
  send(0b0001000000); delay(50);
  send(0b0000100000); delay(50);
  send(0b0001000000); delay(50);
  send(0b0000100000); delay(50);
  send(0b0001000000); delay(50);
  send(0b0000100000); delay(50);
  send(0b0000010000); delay(50);
  send(0b0000001000); delay(50);
  send(0b0000000100); delay(50);
  send(0b0000000010); delay(50);
  }
}

void lightshow5()
{
  int i;
  for(i=0; i<3; i++) 
  {
  send(0b0000000001); delay(50);
  send(0b1000000000); delay(50);
  send(0b0000000010); delay(50);
  send(0b1000000000); delay(50);
  send(0b0000000100); delay(50);
  send(0b1000000000); delay(50);
  send(0b0000001000); delay(50);
  send(0b1000000000); delay(50);
  send(0b0000010000); delay(50);
  send(0b1000000000); delay(50);
  send(0b0000100000); delay(50);
  send(0b1000000000); delay(50);
  send(0b0001000000); delay(50);
  send(0b1000000000); delay(50);
  send(0b0010000000); delay(50);
  send(0b1000000000); delay(50);
  send(0b0100000000); delay(50);
  send(0b1000000000); delay(50);
  send(0b1000000000); delay(50);
  send(0b1000000000); delay(50);
  send(0b0100000000); delay(50);
  send(0b1000000000); delay(50);
  send(0b0010000000); delay(50);
  send(0b1000000000); delay(50);
  send(0b0001000000); delay(50);
  send(0b1000000000); delay(50);
  send(0b0000100000); delay(50);
  send(0b1000000000); delay(50);
  send(0b0000010000); delay(50);
  send(0b1000000000); delay(50);
  send(0b0000001000); delay(50);
  send(0b1000000000); delay(50);
  send(0b0000000100); delay(50);
  send(0b1000000000); delay(50);
  send(0b0000000010); delay(50);
  send(0b1000000000); delay(50);
  }
}

void lightshow6()
{
  int lights;
  int i;
  for(i=0; i<60; i++)
  {
    int lights;
    lights = 0;
    int j;
    for(j=0; j<10; j++)
    {
      int b = random(2);
      lights = lights << 1;
      if(b==1)
        lights = lights | 1;
    }
    send(lights); delay(50);
  }
}

void lightshow7()
{
  int i;
  for(i=0; i<8; i++) 
  {
  send(0b0000000001); delay(50);
  send(0b0000000100); delay(50);
  send(0b0000000010); delay(50);
  send(0b0000010000); delay(50);
  send(0b0000001000); delay(50);
  send(0b0001000000); delay(50);
  send(0b0000100000); delay(50);
  send(0b0100000000); delay(50);
  send(0b0010000000); delay(50);
  send(0b1000000000); delay(50);
  }
}

void lightshow8()
{
  int i;
  for(i=0; i<4; i++) 
  {
  send(0b1000000011); delay(50);
  send(0b1000000101); delay(50);
  send(0b1000001001); delay(50);
  send(0b1000010001); delay(50);
  send(0b1000100001); delay(50);
  send(0b1001000001); delay(50);
  send(0b1010000001); delay(50);
  send(0b1100000001); delay(50);
  send(0b1010000001); delay(50);
  send(0b1001000001); delay(50);
  send(0b1000100001); delay(50);
  send(0b1000010001); delay(50);
  send(0b1000001001); delay(50);
  send(0b1000000101); delay(50);
  }
}


void setup()
{
  randomSeed(analogRead(0));
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  send(0);
}


void loop()
{
  int i;
  int show;
  show = random(8) + 1;
  switch(show)
  {
    case 1: lightshow1(); break;
    case 2: lightshow2(); break;
    case 3: lightshow3(); break;
    case 4: lightshow4(); break;
    case 5: lightshow5(); break;
    case 6: lightshow6(); break;
    case 7: lightshow7(); break;
    case 8: lightshow8(); break;
  }
}
