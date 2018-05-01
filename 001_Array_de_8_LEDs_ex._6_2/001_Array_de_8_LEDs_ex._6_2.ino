const int led = 9;


void setup() {
  for (int i=0; i < 3; i++)
 {
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.print(i);
  pinMode(led, OUTPUT);
  digitalWrite(led, 1);
  delay(200);
  digitalWrite(led, 0);
  delay(200);
 }
   
}

void loop() {
 
}
