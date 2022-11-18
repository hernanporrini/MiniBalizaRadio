

void setup() 
  {                
  pinMode(0, OUTPUT); //LED de actividad enciende cuando emite señal de audio
  pinMode(1, OUTPUT); //LED de actividad enciende cuando hay transmision
  }

void loop() 
  {
  digitalWrite(0, HIGH); // activo el PTT
  delay(1000);           // espero 1 segundo   
  mensaje();          // se emite el mensaje telegrafico
  delay(1000);           // espero 1 segundo                
  digitalWrite(0, LOW);  // desactivo el PTT
  delay(10000);          // espero 1O segundos y comienza de nuevo     
  }
void mensaje()
  {
  punto();raya();espacio();
  punto();raya();espacio();
  punto();raya();espacio();
  punto();raya();espacio();
  }

void espacio()
  {
  delay(150);                       
  }

void punto()
  {
  digitalWrite(1, HIGH);   
  tone(2,900);
  delay(50);                  
  digitalWrite(1, LOW);   
  noTone(2);
  delay(50);                      
  }

void raya()
  {
  digitalWrite(1, HIGH);   
  tone(2,900);
  delay(150);                     
  digitalWrite(1, LOW);  
  noTone(2);
  delay(50);
  }
