
const int PIN_LDR = A0;
const int PIN_TMP = A1;

const int LED_R = 3;  
const int LED_G = 5;
const int LED_B = 6;

void setup() {
  Serial.begin(9600);
  
  pinMode(PIN_LDR, INPUT);
  pinMode(PIN_TMP, INPUT);
  
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
}

void loop() {
 
  int lecturaLDR = analogRead(PIN_LDR);
  int lecturaTMP = analogRead(PIN_TMP);

  // MAP invertido para la luz (de 0 a 100%)
  int porcentajeLuz = map(lecturaLDR, 54, 974, 100, 0); 

  float voltaje = lecturaTMP * (5.0 / 1023.0);
  float temperaturaC = (voltaje - 0.5) * 100.0;

 
  Serial.print("El nivel de luz actual es: ");
  Serial.print(porcentajeLuz);
  Serial.print(" y la temperatura actual: ");
  Serial.print(temperaturaC);
  Serial.println("oc"); 

  //  El LED solo prende si la luz está entre 30% y 70%
  if (porcentajeLuz >= 30 && porcentajeLuz <= 70) {
    
    // Cambiar color del LED según la temperatura
    if (temperaturaC > 90.0) {
      digitalWrite(LED_R, HIGH); // Rojo
      digitalWrite(LED_G, LOW);
      digitalWrite(LED_B, LOW);
    } 
    else if (temperaturaC >= 18.0 && temperaturaC <= 90.0) {
      digitalWrite(LED_R, LOW);  // Verde
      digitalWrite(LED_G, HIGH);
      digitalWrite(LED_B, LOW);
    } 
    else if (temperaturaC < 18.0) {
      digitalWrite(LED_R, LOW);  // Azul
      digitalWrite(LED_G, LOW);
      digitalWrite(LED_B, HIGH);
    }
    
  } else {
    // Si la luz está fuera de rango, el LED se apaga
    digitalWrite(LED_R, LOW);
    digitalWrite(LED_G, LOW);
    digitalWrite(LED_B, LOW);
  }

  delay(500); 
}
