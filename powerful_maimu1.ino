#include <Adafruit_NeoPixel.h>
#include <LiquidCrystal.h>

#define Flex A0
#define Boton 2
#define Pixel 3
#define Cantidad 6 

Adafruit_NeoPixel tira(CANTIDAD, PIXEL, NEO_RGB + NEOkHZ800);
LiquidCrystal lcd(12, 11, 10, 9, 8,7);

bool encendido = false;
bool estadoAnterior = HIGH;

int lectura = 0;
int angulo = 0;
int numeroLed = 0;
String color = "";

void setup()
{
  pinMode(Boton,INPUT_PULLUP);
  
  tira.begin();
  tira.show();
  
  lcd.begin(16,2);
  
  serial.begin(9600);
}

void loop()
{
  //boton en segundo plano
  if (digitalRead(BOTON) == LOW && estadoAnterior == HIGH)
  {
encendido = !encendido;
delay(200)
}
estadoAnterior = digitalRead(BOTON);
if (encendido)
{
  lectura = analogRead(FLEX);
  angulo = map(lectura,0,1023,0,180);
  angulo = constrain(angulo,0,180);
  numeroLed = map(angulo,0,180,0,6);
  
  if (angulo <= 45)
  {
    color = "VERDE";
  }
  else if (angulo <= 90)
  {
    color = "AMARILLO";
  }
  else
  {
    color = "ROJO";
  }
  
  for(int i= 0, i < 6; i++)
  {
    if (i < numeroLed)
    {
      if( i <= 1)
      {
        tira.setPixelColor(i,tira.Color(0,255,0));
      }
      else if (i <= 3)
      {
        tira.setPixelColor(i,tira.Color(255,255,0));
      }
      else
      {
        tira.setPixelColor(i,tira.Color(255,0,0));
      }
    }
    else
    {
      tira.setPixelColor(i,0);
    }
  }
  
  tira.show();
  
  //prueba de sensores
  Serial.print("flex: ");
   Serial.print(lectura);
  Serial.print(" Angulo: ");
   Serial.print(angulo);
   Serial.print(" N°led: ");
   Serial.print(numeroled);
   Serial.print(" Color: ");
   Serial.printIn(color);
  
  lcd.clear(),
  
  lcd.setCursor(,0);
  lcd.print("Ang:");
  lcd.print(angulo);
  
  lcd.setCursor(16, color.legth(),1);
  lcd.print(color);
  
  delay(100);
}
  else
  {
    for(int =0;i<6;i++)
    {
      tiral,setPixelColor(i,0);
    }
    tira.show();
    
    lcd.clear();
    
  }
}
