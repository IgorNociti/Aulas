const  int BUTTON_PIN = 6 ;
const  int LED_PIN1 = 3 ;

int estado do botão = 0 ;
void  configuração () {
  pinMode (LED_PIN1, SAÍDA);
  pinMode (BUTTON_PIN, INPUT_PULLUP);
}

void  loop () {
  buttonState = digitalRead (BUTTON_PIN);
  if (buttonState == LOW)
  {
    digitalWrite (LED_PIN1, BAIXO);
  }


  {
    digitalWrite (LED_PIN1, ALTO);
  }
}
