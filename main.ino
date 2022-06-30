void setup()
{
  pinMode(4, OUTPUT); // inisialisai pin 4 adalah output
  pinMode(5, OUTPUT); // inisialisai pin 5 adalah output
  pinMode(6, OUTPUT); // inisialisai pin 6 adalah output
}

// HIGH = nyalakan program
// LOW = matikan program

void loop()
{
  digitalWrite(4, HIGH);
  delay(50);
  digitalWrite(4, LOW);
  delay(50);
  digitalWrite(5, HIGH);
  delay(50);
  digitalWrite(5, LOW);
  delay(50);
  digitalWrite(6, HIGH);
  delay(50);
  digitalWrite(6, LOW);
  delay(50);
}
