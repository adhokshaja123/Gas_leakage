int const gas = A1;
int green = 7;
int blue = 6;
int orange =5;
int red =4;

void setup()
{
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(red, OUTPUT);
  //pinMode(gas, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int valor = analogRead(gas);
  valor = map(valor,300,750,0,100);
  digitalWrite(green,HIGH);
  digitalWrite(blue,valor>=10 ? HIGH : LOW);
  digitalWrite(orange, valor >= 30 ? HIGH : LOW);
  digitalWrite(red, valor >= 50 ? HIGH : LOW);
  delay(250);
}