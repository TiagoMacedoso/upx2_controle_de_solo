//#include "Keyboard.h"

#define btnRun 3

int aux = 1;
//void teclaEnter();
//void teclaTAB();
void gravar();

void setup() {
  pinMode(btnRun, INPUT_PULLUP);
  randomSeed(analogRead(0));

  Serial.begin(9600);

  //Keyboard.begin();
}

void loop() {
  aux = digitalRead(btnRun);
  if(aux == 0) {
    delay(200);
    Serial.println("ok");
  }
}

void gravar(){
  //Keyboard.print(ID);
  //teclaTAB();
  //teclaTAB();

  //Keyboard.print(UMIDADE);
  //teclaTAB();

  //Keyboard.print(TEMPERATURA);
  //teclaTAB();

  //Keyboard.print(FÓSFORO);
  //teclaTAB();

  //Keyboard.print(POTÁSIO);
  //teclaTAB();

  //teclaEnter();
}

/*void teclaEnter() {
  Keyboard.press(KEY_RETURN);
  delay(50);
  Keyboard.release(KEY_RETURN);
}

void teclaTAB() {
  Keyboard.press(KEY_TAB);
  delay(50);
  Keyboard.release(KEY_TAB);
}*/
