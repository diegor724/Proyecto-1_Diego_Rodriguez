#include <Adafruit_NeoPixel.h>

#define PIN 6
#define LEDS 12

Adafruit_NeoPixel ring(LEDS, PIN, NEO_GRB + NEO_KHZ800);

void setup()
{
  ring.begin();
  ring.show();
}

void loop()
{


// EFECTO 1


ring.clear();
ring.setPixelColor(0, ring.Color(255,0,0));
ring.show();
delay(500);

ring.clear();
ring.setPixelColor(1, ring.Color(0,255,0));
ring.show();
delay(500);

ring.clear();
ring.setPixelColor(2, ring.Color(0,0,255));
ring.show();
delay(500);

ring.clear();
ring.setPixelColor(3, ring.Color(255,255,0));
ring.show();
delay(500);

ring.clear();
ring.setPixelColor(4, ring.Color(255,0,255));
ring.show();
delay(500);

ring.clear();
ring.setPixelColor(5, ring.Color(0,255,255));
ring.show();
delay(500);

ring.clear();
ring.setPixelColor(6, ring.Color(255,100,0));
ring.show();
delay(500);

ring.clear();
ring.setPixelColor(7, ring.Color(150,0,255));
ring.show();
delay(500);

ring.clear();
ring.setPixelColor(8, ring.Color(100,255,0));
ring.show();
delay(500);

ring.clear();
ring.setPixelColor(9, ring.Color(255,255,255));
ring.show();
delay(500);

ring.clear();
ring.setPixelColor(10, ring.Color(50,50,255));
ring.show();
delay(500);

ring.clear();
ring.setPixelColor(11, ring.Color(255,0,100));
ring.show();
delay(500);

ring.clear();
ring.show();

delay(1000);


// EFECTO 2


ring.setPixelColor(0, ring.Color(0,0,255));
ring.show();
delay(200);
ring.clear();

ring.setPixelColor(1, ring.Color(0,0,255));
ring.show();
delay(200);
ring.clear();

ring.setPixelColor(2, ring.Color(0,0,255));
ring.show();
delay(200);
ring.clear();

ring.setPixelColor(3, ring.Color(0,0,255));
ring.show();
delay(200);
ring.clear();

ring.setPixelColor(4, ring.Color(0,0,255));
ring.show();
delay(200);
ring.clear();

ring.setPixelColor(5, ring.Color(0,0,255));
ring.show();
delay(200);
ring.clear();

ring.setPixelColor(6, ring.Color(0,0,255));
ring.show();
delay(200);
ring.clear();

ring.setPixelColor(7, ring.Color(0,0,255));
ring.show();
delay(200);
ring.clear();

ring.setPixelColor(8, ring.Color(0,0,255));
ring.show();
delay(200);
ring.clear();

ring.setPixelColor(9, ring.Color(0,0,255));
ring.show();
delay(200);
ring.clear();

ring.setPixelColor(10, ring.Color(0,0,255));
ring.show();
delay(200);
ring.clear();

ring.setPixelColor(11, ring.Color(0,0,255));
ring.show();
delay(200);
ring.clear();

// Vuelta

ring.setPixelColor(11, ring.Color(255,0,0));
ring.show();
delay(200);
ring.clear();

ring.setPixelColor(10, ring.Color(255,0,0));
ring.show();
delay(200);
ring.clear();

ring.setPixelColor(9, ring.Color(255,0,0));
ring.show();
delay(200);
ring.clear();

ring.setPixelColor(8, ring.Color(255,0,0));
ring.show();
delay(200);
ring.clear();

ring.setPixelColor(7, ring.Color(255,0,0));
ring.show();
delay(200);
ring.clear();

ring.setPixelColor(6, ring.Color(255,0,0));
ring.show();
delay(200);
ring.clear();

ring.setPixelColor(5, ring.Color(255,0,0));
ring.show();
delay(200);
ring.clear();

ring.setPixelColor(4, ring.Color(255,0,0));
ring.show();
delay(200);
ring.clear();

ring.setPixelColor(3, ring.Color(255,0,0));
ring.show();
delay(200);
ring.clear();

ring.setPixelColor(2, ring.Color(255,0,0));
ring.show();
delay(200);
ring.clear();

ring.setPixelColor(1, ring.Color(255,0,0));
ring.show();
delay(200);
ring.clear();

ring.setPixelColor(0, ring.Color(255,0,0));
ring.show();
delay(200);
ring.clear();

delay(1000);


// EFECTO 3


ring.setPixelColor(0, ring.Color(255,0,0));
ring.setPixelColor(2, ring.Color(255,0,0));
ring.setPixelColor(4, ring.Color(255,0,0));
ring.setPixelColor(6, ring.Color(255,0,0));
ring.setPixelColor(8, ring.Color(255,0,0));
ring.setPixelColor(10, ring.Color(255,0,0));
ring.show();

delay(500);

ring.clear();
ring.show();

delay(500);

ring.setPixelColor(1, ring.Color(0,0,255));
ring.setPixelColor(3, ring.Color(0,0,255));
ring.setPixelColor(5, ring.Color(0,0,255));
ring.setPixelColor(7, ring.Color(0,0,255));
ring.setPixelColor(9, ring.Color(0,0,255));
ring.setPixelColor(11, ring.Color(0,0,255));
ring.show();

delay(500);

ring.clear();
ring.show();

delay(500);

// segunda combinación

ring.setPixelColor(0, ring.Color(0,255,0));
ring.setPixelColor(2, ring.Color(0,255,0));
ring.setPixelColor(4, ring.Color(0,255,0));
ring.setPixelColor(6, ring.Color(0,255,0));
ring.setPixelColor(8, ring.Color(0,255,0));
ring.setPixelColor(10, ring.Color(0,255,0));
ring.show();

delay(500);

ring.clear();
ring.show();

delay(500);

ring.setPixelColor(1, ring.Color(255,255,0));
ring.setPixelColor(3, ring.Color(255,255,0));
ring.setPixelColor(5, ring.Color(255,255,0));
ring.setPixelColor(7, ring.Color(255,255,0));
ring.setPixelColor(9, ring.Color(255,255,0));
ring.setPixelColor(11, ring.Color(255,255,0));
ring.show();

delay(500);

ring.clear();
ring.show();

delay(1000);

}
