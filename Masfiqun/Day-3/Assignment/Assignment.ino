void setup() {

  DDRB &= !(B00000100); 

  DDRD |= B00000100; 
}

void loop() {

  if (PINB & B00000100) { 
    PORTD |= B00000100;
  } else {
    PORTD &= !(B00000100); 
  }
}