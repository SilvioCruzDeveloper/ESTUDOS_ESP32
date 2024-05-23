


//ta complicado senpre que conecto tenho que dar o comando "sudo chmod a+rw /dev/ttyACM0" no terminal do Linux

#include <M5Cardputer.h>

void setup() {
  // Inicializa o M5Stack
  M5.begin();

  // Configura a tela para exibir "Hello World"
  M5.Lcd.setTextSize(2);
  M5.Lcd.setTextColor(TFT_WHITE);
  M5.Lcd.setCursor(50, 40);
  M5.Lcd.print("Hello world from vscode");
}

void loop() {
  // Nada a fazer aqui
}
