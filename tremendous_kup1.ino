
#define LED1_R 3
#define LED1_G 5
#define LED1_B 6

#define LED2_R 9
#define LED2_G 10
#define LED2_B 11

#define LED3_R A0 
#define LED3_G A1 

#define BUZZER 2  


#undef LED2_R
#undef LED2_G
#undef LED2_B
#define LED2_R 7
#define LED2_G 8
#define LED2_B 4

#define LED3_R 9
#define LED3_G 10
#define LED3_B 11

#define PIN_BUZZER 13 

void setup() {
  // Configuración de pines de salida
  pinMode(LED1_R, OUTPUT);
  pinMode(LED1_G, OUTPUT);
  pinMode(LED1_B, OUTPUT);
  
  pinMode(LED2_R, OUTPUT);
  pinMode(LED2_G, OUTPUT);
  pinMode(LED2_B, OUTPUT);
  
  pinMode(LED3_R, OUTPUT);
  pinMode(LED3_G, OUTPUT);
  pinMode(LED3_B, OUTPUT);
  
  pinMode(PIN_BUZZER, OUTPUT);
}

void loop() {

  //  Prende el 1° LED en ROJO FUERTE 
  
  analogWrite(LED1_R, 255);
  analogWrite(LED1_G, 0);
  analogWrite(LED1_B, 0);
  
  // Los demás leds apagados
  digitalWrite(LED2_R, LOW);
  digitalWrite(LED2_G, LOW);
  digitalWrite(LED2_B, LOW);
  analogWrite(LED3_R, 0);
  analogWrite(LED3_G, 0);
  analogWrite(LED3_B, 0);
  
  delay(1000); // Tiempo 

  // Zumbido 
  analogWrite(PIN_BUZZER, 128); 
  // Sonido medio de forma analógica
  delay(100);
  analogWrite(PIN_BUZZER, 0);   
  // Apagar buzzer

 
  // STEP 2: Apaga 1° LED y prende 2° LED en MAGENTA 
  
  analogWrite(LED1_R, 0);
  analogWrite(LED1_G, 0);
  analogWrite(LED1_B, 0);
  
  digitalWrite(LED2_R, HIGH); // Rojo + Azul = Magenta
  digitalWrite(LED2_G, LOW);
  digitalWrite(LED2_B, HIGH);
  
  delay(1000);

  // Zumbido 
  analogWrite(PIN_BUZZER, 128);
  delay(100);
  analogWrite(PIN_BUZZER, 0);

  
  // STEP 3: Apaga 2° LED y prende 3° LED en CIAN TENUE

  digitalWrite(LED2_R, LOW);
  digitalWrite(LED2_G, LOW);
  digitalWrite(LED2_B, LOW);
  
  // Cian es Verde + Azul. (50), brilla tenue.
  analogWrite(LED3_R, 0);
  analogWrite(LED3_G, 50); 
  analogWrite(LED3_B, 50);
  
  delay(1000);

  // Zumbido 
  analogWrite(PIN_BUZZER, 128);
  delay(100);
  analogWrite(PIN_BUZZER, 0);
}
