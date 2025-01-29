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