int DATA = 2;
int CLK = 3;
int ROW1 = 4;
int ROW2 = 5;
int ROW3 = 6;
int ROW4 = 7;
int ROW5 = 8;
int ROW6 = 9;
int ROW7 = 10;
int CLR = 11;

// the setup function runs once when you press reset or power the board
void setup()
{
  pinMode(DATA, OUTPUT);
  pinMode(CLK, OUTPUT);
  pinMode(ROW1, OUTPUT);
  pinMode(ROW2, OUTPUT);
  pinMode(ROW3, OUTPUT);
  pinMode(ROW4, OUTPUT);
  pinMode(ROW5, OUTPUT);
  pinMode(ROW6, OUTPUT);
  pinMode(ROW7, OUTPUT);
  pinMode(CLR, OUTPUT);
  digitalWrite(DATA, LOW);
  digitalWrite(CLK, LOW);
  digitalWrite(ROW1, LOW);
  digitalWrite(ROW2, LOW);
  digitalWrite(ROW3, LOW);
  digitalWrite(ROW4, LOW);
  digitalWrite(ROW5, LOW);
  digitalWrite(ROW6, LOW);
  digitalWrite(ROW7, LOW);
  digitalWrite(CLR, LOW);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop()
{
  int i;

  for (i = 0; i < 20; i++)
  {
    if (i % 2)
    {
      Serial.println(i);
      digitalWrite(DATA, HIGH);
    }
    else
    {
      digitalWrite(DATA, LOW);
    }
    delay(1);
    digitalWrite(CLK, HIGH);
    delay(1);
    digitalWrite(CLK, LOW);
  }

  digitalWrite(DATA, LOW);
  digitalWrite(ROW2, HIGH);

  while (1)
  {
  }
}
