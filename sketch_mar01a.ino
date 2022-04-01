// A0 is de inputpin voor de lichtgevoelige weerstand LDR 
// A0 is een analoge ingang
int LDR_In = A0; // de spanningsdeler wordt aangesloten op A0

// variable lichtHoeveelheid
int lichtHoeveelheid;


uint8_t Led1 = D3;
uint8_t Led2 = D5;
uint8_t Led3 = D6;

void setup() {  
  Serial.begin(9600); // start de serial monitor 9600 Baud
}

void loop() {
  // lees de input waarde van de LDR
  lichtHoeveelheid = analogRead(LDR_In);

  // schrijf de waarde naar de Serial Monitor
  Serial.println(lichtHoeveelheid);

  if ( lichtHoeveelheid < 400){
    digitalWrite(Led1, HIGH);
  }

    else{
    digitalWrite(Led1, LOW);
  }

  delay(1000);
}
