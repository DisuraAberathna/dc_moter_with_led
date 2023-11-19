void setup() {
  // put your setup code here, to run once:

  // Motor A (OUT 1 & 2)
  pinMode(11, OUTPUT);  //ENA
  pinMode(10, OUTPUT);  //IN1
  pinMode(9, OUTPUT);   //IN2
  analogWrite(11, 250);
  
  // Motor B (OUT 3 & 4)
  pinMode(5, OUTPUT);  //ENB
  pinMode(7, OUTPUT);  //IN3
  pinMode(6, OUTPUT);   //IN4
  analogWrite(5, 250);
}

void loop() {
  // put your main code here, to run repeatedly:
}
