
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(0, OUTPUT); //LED on Model B
  pinMode(1, OUTPUT); //LED on Model A  or Pro
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(0, HIGH);
  delay(1000);               // wait for a second
  distintiva();
  delay(1000);               // wait for a second
  digitalWrite(0, LOW); 
  delay(10000);               // wait for a second
}
void distintiva()
{
  espacio();espacio();espacio();
punto();raya();punto();espacio();punto();raya();espacio();raya();punto();punto();espacio();punto();punto();espacio();raya();raya();raya();
espacio();espacio();espacio();
raya();punto();raya();punto();espacio();punto();raya();punto();punto();espacio();punto();punto();raya();espacio();raya();punto();punto();punto();
espacio();espacio();espacio();
raya();raya();raya();espacio();punto();raya();punto();punto();espacio();punto();raya();espacio();punto();punto();punto();raya();espacio();punto();raya();espacio();punto();raya();punto();espacio();punto();raya();punto();espacio();punto();punto();espacio();punto();raya();
espacio();espacio();espacio();
punto();raya();punto();punto();espacio();punto();punto();raya();espacio();punto();raya();raya();raya();raya();espacio();raya();punto();punto();espacio();punto();punto();punto();espacio();raya();raya();raya();
espacio();espacio();espacio();
raya();raya();punto();raya();espacio();raya();espacio();punto();punto();punto();punto();
espacio();espacio();espacio();
punto();punto();raya();punto();espacio();punto();punto();raya();punto();espacio();raya();raya();raya();raya();punto();espacio();punto();punto();punto();raya();raya();espacio();punto();punto();raya();espacio();raya();punto();raya();punto();
espacio();espacio();espacio();
punto();punto();punto();espacio();punto();espacio();raya();raya();punto();raya();raya();espacio();punto();raya();espacio();punto();raya();punto();punto();
espacio();espacio();espacio();
punto();espacio();raya();punto();punto();raya();espacio();punto();raya();raya();punto();espacio();punto();espacio();punto();raya();punto();espacio();punto();punto();espacio();raya();raya();espacio();punto();espacio();raya();punto();espacio();raya();espacio();punto();raya();espacio();punto();raya();punto();punto();espacio();punto();raya();raya();punto();espacio();punto();raya();punto();espacio();punto();punto();raya();espacio();punto();espacio();raya();punto();punto();punto();espacio();punto();raya();
espacio();espacio();espacio();
raya();raya();punto();raya();espacio();punto();raya();punto();espacio();raya();raya();punto();
espacio();espacio();espacio();
punto();raya();raya();raya();raya();espacio();punto();punto();punto();punto();raya();espacio();punto();punto();punto();punto();raya();espacio();punto();raya();punto();raya();punto();raya();espacio();raya();raya();raya();raya();raya();espacio();punto();punto();punto();punto();punto();espacio();punto();punto();punto();punto();punto();
espacio();espacio();espacio();
raya();raya();punto();raya();espacio();punto();raya();punto();espacio();punto();raya();raya();punto();
espacio();espacio();espacio();
punto();raya();raya();raya();raya();espacio();raya();raya();raya();raya();raya();

  }
void espacio()
{
  delay(150);                       // wait for a second  
}
void punto()
{
  digitalWrite(1, HIGH);   // turn the LED on (HIGH is the voltage level)
 tone(2,900);
  delay(50);                       // wait for a second  
  digitalWrite(1, LOW);   // turn the LED on (HIGH is the voltage level)
  noTone(2);
  delay(50);                       // wait for a second  
}
void raya()
{
  digitalWrite(1, HIGH);   // turn the LED on (HIGH is the voltage level)
 tone(2,900);
  delay(150);                       // wait for a second  
  digitalWrite(1, LOW);   // turn the LED on (HIGH is the voltage level)
  noTone(2);
  delay(50);
}
