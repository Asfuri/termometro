#include <Wire.h>

#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2); 
// Endereço I2C comum: 0x27 ou 0x3F

// #include <Adafruit_LiquidCrystal.h> 
// Adafruit_LiquidCrystal lcd(0); 

// Mudar as duas linhas de cima de acordo com a biblioteca usada (a de baixo é a do simulador)

void setup() {
  Serial.begin(9600);

  /*
  // Linhas do código do simulador
  lcd.begin(16, 2);        
  lcd.setBacklight(HIGH);   
  lcd.setCursor(0, 0);
  */

  // Linhas do código real
  
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Iniciando...");
  delay(1000);
  
}

void loop() {
  int leituraAnodo = analogRead(A0);
  int leituraCatodo = analogRead(A1);

  float tensaoAnodo = leituraAnodo * (5.0 / 1023.0);
  float tensaoCatodo = leituraCatodo * (5.0 / 1023.0);

  float tensaoDiodo = tensaoAnodo - tensaoCatodo;
  
  float diodeTemp = (tensaoDiodo - 0.750)/(-0.002);

  // Exibe no Serial
  Serial.print("Tensão no diodo: ");
  Serial.print(tensaoDiodo, 3);
  Serial.println(" V");

  // Exibe no LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Tensao:");
  lcd.setCursor(0, 1);
  lcd.print(tensaoDiodo, 3); // 2 casas decimais
  lcd.print(" V");

  delay(3000);
  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temperatura :");
  lcd.setCursor(0, 1);
  lcd.print(diodeTemp, 2); // 1 casa decimal
  lcd.print(" C");
  delay(3000);
}
