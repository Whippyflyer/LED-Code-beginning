#include <FastLED.h>
#define NUM_LEDS 28
#define DATA_PIN 2 
#define COLOR_ORDER GRB
#define CHIPSET WS2812B
#define BRIGHTNESS 20
#define VOLTS 5
#define MAX_AMPS 200   //value is in milliamps
CRGB leds[NUM_LEDS];
void setup() {
  // put your setup code here, to run once:

  // put your setup code here, to run once:
FastLED.addLeds<CHIPSET,DATA_PIN,COLOR_ORDER>(leds,NUM_LEDS);

 FastLED.setMaxPowerInVoltsAndMilliamps(VOLTS,MAX_AMPS);
 FastLED.setBrightness(BRIGHTNESS);
 FastLED.show();
}

void loop() {
  // put your main code here, to run repeatedly:
leds[0] = CRGB::Red; //color 1  //Start first loop of 1st post
leds[1] = CRGB::Red; //color 1
leds[2] = CRGB::Green;
leds[3] = CRGB::Green;
leds[4] = CRGB::Green;
leds[5] = CRGB::Green;
leds[6] = CRGB::Green;
leds[7] = CRGB::Green;
leds[8] = CRGB::Green;
leds[9] = CRGB::Green;
leds[10] = CRGB::Green;
leds[11] = CRGB::Green;
leds[12] = CRGB::Green;
leds[13] = CRGB::Green;
leds[14] = CRGB::Green; 
leds[15] = CRGB::Green; 
leds[16] = CRGB::Green;
leds[17] = CRGB::Green;
leds[18] = CRGB::Green;
leds[19] = CRGB::Green;
leds[20] = CRGB::Green;
leds[21] = CRGB::Green;
leds[22] = CRGB::Green;
leds[23] = CRGB::Green;
leds[24] = CRGB::Green;
leds[25] = CRGB::Green;
leds[26] = CRGB::Green;
leds[27] = CRGB::Green;
FastLED.show();
delay(100);
leds[0] = CRGB::Green;
leds[1] = CRGB::Red; //color 1
leds[2] = CRGB::Red; //color 1
leds[3] = CRGB::Green; 
leds[4] = CRGB::Green;
leds[5] = CRGB::Green;
leds[6] = CRGB::Green;
leds[7] = CRGB::Green;
leds[8] = CRGB::Green;
leds[9] = CRGB::Green;
leds[10] = CRGB::Green;
leds[11] = CRGB::Green;
leds[12] = CRGB::Green;
leds[13] = CRGB::Green;
FastLED.show();
delay(100);
leds[0] = CRGB::Green;
leds[1] = CRGB::Green;
leds[2] = CRGB::Red; //color 1
leds[3] = CRGB::Red; //color 1
leds[4] = CRGB::Green;
leds[5] = CRGB::Green;
leds[6] = CRGB::Green;
leds[7] = CRGB::Green;
leds[8] = CRGB::Green;
leds[9] = CRGB::Green;
leds[10] = CRGB::Green;
leds[11] = CRGB::Green;
leds[12] = CRGB::Green;
leds[13] = CRGB::Green;
FastLED.show();
delay(100);
leds[0] = CRGB::White; //color2
leds[1] = CRGB::Green; 
leds[2] = CRGB::Green;
leds[3] = CRGB::Red; //color 1
leds[4] = CRGB::Red; //color 1
leds[5] = CRGB::Green; 
leds[6] = CRGB::Green;
leds[7] = CRGB::Green;
leds[8] = CRGB::Green;
leds[9] = CRGB::Green;
leds[10] = CRGB::Green;
leds[11] = CRGB::Green;
leds[12] = CRGB::Green;
leds[13] = CRGB::Green;
FastLED.show();
delay(100);
leds[0] = CRGB::White;//color2
leds[1] = CRGB::White;//color2
leds[2] = CRGB::Green; 
leds[3] = CRGB::Green; 
leds[4] = CRGB::Red;//color 1
leds[5] = CRGB::Red; //color 1
leds[6] = CRGB::Green;  
leds[7] = CRGB::Green; 
leds[8] = CRGB::Green; 
leds[9] = CRGB::Green;
leds[10] = CRGB::Green;
leds[11] = CRGB::Green;
leds[12] = CRGB::Green;
leds[13] = CRGB::Green;   
FastLED.show();
delay(100);
leds[0] = CRGB::Green;
leds[1] = CRGB::White;//color2
leds[2] = CRGB::White;//color2
leds[3] = CRGB::Green; 
leds[4] = CRGB::Green;
leds[5] = CRGB::Red; //color 1
leds[6] = CRGB::Red; //color 1 
leds[7] = CRGB::Green; 
leds[8] = CRGB::Green; 
leds[9] = CRGB::Green;
leds[10] = CRGB::Green;
leds[11] = CRGB::Green;
leds[12] = CRGB::Green;
leds[13] = CRGB::Green;
FastLED.show();
delay(100);
leds[0] = CRGB::Green;
leds[1] = CRGB::Green;
leds[2] = CRGB::White;//color2
leds[3] = CRGB::White;//color2
leds[4] = CRGB::Green;
leds[5] = CRGB::Green; 
leds[6] = CRGB::Red; //color 1 
leds[7] = CRGB::Red; //color 1
leds[8] = CRGB::Green; 
leds[9] = CRGB::Green;
leds[10] = CRGB::Green;
leds[11] = CRGB::Green;
leds[12] = CRGB::Green;
leds[13] = CRGB::Green;
FastLED.show();
delay(100);
leds[0] = CRGB::Green;
leds[1] = CRGB::Green;
leds[2] = CRGB::Green;
leds[3] = CRGB::White;//color2
leds[4] = CRGB::White;//color2
leds[5] = CRGB::Green; 
leds[6] = CRGB::Green;  
leds[7] = CRGB::Red; //color 1 
leds[8] = CRGB::Red; //color 1 
leds[9] = CRGB::Green;
leds[10] = CRGB::Green;
leds[11] = CRGB::Green;
leds[12] = CRGB::Green;
leds[13] = CRGB::Green;
FastLED.show();
delay(100);
leds[0] = CRGB::Green;
leds[1] = CRGB::Green;
leds[2] = CRGB::Green;
leds[3] = CRGB::Green;
leds[4] = CRGB::White; //color2
leds[5] = CRGB::White; //color2
leds[6] = CRGB::Green;
leds[7] = CRGB::Green;
leds[8] = CRGB::Red; //color 1
leds[9] = CRGB::Red; //color 1
leds[10] = CRGB::Green;
leds[11] = CRGB::Green;
leds[12] = CRGB::Green;
leds[13] = CRGB::Green;
FastLED.show();
delay(100);
leds[0] = CRGB::Green;
leds[1] = CRGB::Green;
leds[2] = CRGB::Green;
leds[3] = CRGB::Green;
leds[4] = CRGB::Green; 
leds[5] = CRGB::White; //color2
leds[6] = CRGB::White; //color2
leds[7] = CRGB::Green;
leds[8] = CRGB::Green; 
leds[9] = CRGB::Red; //color 1
leds[10] = CRGB::Red; //color 1
leds[11] = CRGB::Green;
leds[12] = CRGB::Green;
leds[13] = CRGB::Green;
FastLED.show();
delay(100);
leds[0] = CRGB::Green;
leds[1] = CRGB::Green;
leds[2] = CRGB::Green;
leds[3] = CRGB::Green;
leds[4] = CRGB::Green;
leds[5] = CRGB::Green;
leds[6] = CRGB::White; //color2
leds[7] = CRGB::White; //color2
leds[8] = CRGB::Green;
leds[9] = CRGB::Green;
leds[10] = CRGB::Red; //color 1
leds[11] = CRGB::Red; //color 1
leds[12] = CRGB::Green;
leds[13] = CRGB::Green;
FastLED.show();
delay(100);
leds[0] = CRGB::Green;
leds[1] = CRGB::Green;
leds[2] = CRGB::Green;
leds[3] = CRGB::Green;
leds[4] = CRGB::Green;
leds[5] = CRGB::Green;
leds[6] = CRGB::Green; 
leds[7] = CRGB::White; //color2
leds[8] = CRGB::White; //color2
leds[9] = CRGB::Green;
leds[10] = CRGB::Green; 
leds[11] = CRGB::Red; //color 1
leds[12] = CRGB::Red; //color 1
leds[13] = CRGB::Green;
FastLED.show();
delay(100);
leds[0] = CRGB::Green;
leds[1] = CRGB::Green;
leds[2] = CRGB::Green;
leds[3] = CRGB::Green;
leds[4] = CRGB::Green;
leds[5] = CRGB::Green;
leds[6] = CRGB::Green;
leds[7] = CRGB::Green;
leds[8] = CRGB::White; //color2
leds[9] = CRGB::White; //color2
leds[10] = CRGB::Green;
leds[11] = CRGB::Green;
leds[12] = CRGB::Red; //color 1
leds[13] = CRGB::Red; //color 1
FastLED.show();
delay(100);
leds[0] = CRGB::Red; //color 1 //Start 2nd loop of 1st post
leds[1] = CRGB::Green;
leds[2] = CRGB::Green;
leds[3] = CRGB::Green;
leds[4] = CRGB::Green;
leds[5] = CRGB::Green;
leds[6] = CRGB::Green;
leds[7] = CRGB::Green;
leds[8] = CRGB::Green;
leds[9] = CRGB::White; //color2
leds[10] = CRGB::White; //color2
leds[11] = CRGB::Green;
leds[12] = CRGB::Green;
leds[13] = CRGB::Red; //color 1

FastLED.show();
delay(100);
leds[0] = CRGB::Red; //color 1 
leds[1] = CRGB::Red; //color 1 
leds[2] = CRGB::Green;
leds[3] = CRGB::Green;
leds[4] = CRGB::Green;
leds[5] = CRGB::Green;
leds[6] = CRGB::Green;
leds[7] = CRGB::Green;
leds[8] = CRGB::Green;
leds[9] = CRGB::Green;
leds[10] = CRGB::White; //color2
leds[11] = CRGB::White; //color2
leds[12] = CRGB::Green;
leds[13] = CRGB::Green;
FastLED.show();
delay(100);
leds[0] = CRGB::Green;          
leds[1] = CRGB::Red; //color 1
leds[2] = CRGB::Red; //color 1
leds[3] = CRGB::Green;
leds[4] = CRGB::Green;
leds[5] = CRGB::Green;
leds[6] = CRGB::Green;
leds[7] = CRGB::Green;
leds[8] = CRGB::Green;
leds[9] = CRGB::Green;
leds[10] = CRGB::Green;
leds[11] = CRGB::White; //color2
leds[12] = CRGB::White; //color2
leds[13] = CRGB::Green;
FastLED.show();
delay(100);
leds[0] = CRGB::Green;
leds[1] = CRGB::Green;
leds[2] = CRGB::Red; //color 1
leds[3] = CRGB::Red; //color 1
leds[4] = CRGB::Green;
leds[5] = CRGB::Green;
leds[6] = CRGB::Green;
leds[7] = CRGB::Green;
leds[8] = CRGB::Green;
leds[9] = CRGB::Green;
leds[10] = CRGB::Green;
leds[11] = CRGB::Green;
leds[12] = CRGB::White; //color2
leds[13] = CRGB::White; //color2  
FastLED.show();
delay(100);
leds[0] = CRGB::White; //color2
leds[1] = CRGB::Green;
leds[2] = CRGB::Green;
leds[3] = CRGB::Red; //color 1
leds[4] = CRGB::Red; //color 1
leds[5] = CRGB::Green;
leds[6] = CRGB::Green;
leds[7] = CRGB::Green;
leds[8] = CRGB::Green;
leds[9] = CRGB::Green;
leds[10] = CRGB::Green;
leds[11] = CRGB::Green;
leds[12] = CRGB::Green;
leds[13] = CRGB::White; //color2
FastLED.show();
delay(100);
leds[0] = CRGB::White; //color2
leds[1] = CRGB::White; //color2
leds[2] = CRGB::Green; 
leds[3] = CRGB::Green; 
leds[4] = CRGB::Red; //color 1
leds[5] = CRGB::Red; //color 1
leds[6] = CRGB::Green;
leds[7] = CRGB::Green;
leds[8] = CRGB::Green;
leds[9] = CRGB::Green;
leds[10] = CRGB::Green;
leds[11] = CRGB::Green;
leds[12] = CRGB::Green;
leds[13] = CRGB::Green;
FastLED.show();
delay(100);
leds[0] = CRGB::Green;
leds[1] = CRGB::White; //color2
leds[2] = CRGB::White; //color2
leds[3] = CRGB::Green; 
leds[4] = CRGB::Green; 
leds[5] = CRGB::Red; //color 1
leds[4] = CRGB::Red; //color 1
leds[7] = CRGB::Green;
leds[8] = CRGB::Green;
leds[9] = CRGB::Green;
leds[10] = CRGB::Green;
leds[11] = CRGB::Green;
leds[12] = CRGB::Green;
leds[13] = CRGB::Green;
FastLED.show();
delay(100);
leds[0] = CRGB::Green;
leds[1] = CRGB::Green;
leds[2] = CRGB::White;//color2
leds[3] = CRGB::White;//color2
leds[4] = CRGB::Green;
leds[5] = CRGB::Green; 
leds[6] = CRGB::Red; //color 1 
leds[7] = CRGB::Red; //color 1
leds[8] = CRGB::Green; 
leds[9] = CRGB::Green;
leds[10] = CRGB::Green;
leds[11] = CRGB::Green;
leds[12] = CRGB::Green;
leds[13] = CRGB::Green;
FastLED.show();
delay(100);
leds[0] = CRGB::Green;
leds[1] = CRGB::Green;
leds[2] = CRGB::Green;
leds[3] = CRGB::White;//color2
leds[4] = CRGB::White;//color2
leds[5] = CRGB::Green; 
leds[6] = CRGB::Green;  
leds[7] = CRGB::Red; //color 1 
leds[8] = CRGB::Red; //color 1 
leds[9] = CRGB::Green;
leds[10] = CRGB::Green;
leds[11] = CRGB::Green;
leds[12] = CRGB::Green;
leds[13] = CRGB::Green;
FastLED.show();
delay(100);
leds[0] = CRGB::Green;
leds[1] = CRGB::Green;
leds[2] = CRGB::Green;
leds[3] = CRGB::Green;
leds[4] = CRGB::White; //color2
leds[5] = CRGB::White; //color2
leds[6] = CRGB::Green;
leds[7] = CRGB::Green;
leds[8] = CRGB::Red; //color 1
leds[9] = CRGB::Red; //color 1
leds[10] = CRGB::Green;
leds[11] = CRGB::Green;
leds[12] = CRGB::Green;
leds[13] = CRGB::Green;
FastLED.show();
delay(100);
leds[0] = CRGB::Green;
leds[1] = CRGB::Green;
leds[2] = CRGB::Green;
leds[3] = CRGB::Green;
leds[4] = CRGB::Green; 
leds[5] = CRGB::White; //color2
leds[6] = CRGB::White; //color2
leds[7] = CRGB::Green;
leds[8] = CRGB::Green; 
leds[9] = CRGB::Red; //color 1
leds[10] = CRGB::Red; //color 1
leds[11] = CRGB::Green;
leds[12] = CRGB::Green;
leds[13] = CRGB::Green;
FastLED.show();
delay(100);
leds[0] = CRGB::Green;
leds[1] = CRGB::Green;
leds[2] = CRGB::Green;
leds[3] = CRGB::Green;
leds[4] = CRGB::Green;
leds[5] = CRGB::Green;
leds[6] = CRGB::White; //color2
leds[7] = CRGB::White; //color2
leds[8] = CRGB::Green;
leds[9] = CRGB::Green;
leds[10] = CRGB::Red; //color 1
leds[11] = CRGB::Red; //color 1
leds[12] = CRGB::Green;
leds[13] = CRGB::Green;
FastLED.show();
delay(100);
leds[0] = CRGB::Green;
leds[1] = CRGB::Green;
leds[2] = CRGB::Green;
leds[3] = CRGB::Green;
leds[4] = CRGB::Green;
leds[5] = CRGB::Green;
leds[6] = CRGB::Green; 
leds[7] = CRGB::White; //color2
leds[8] = CRGB::White; //color2
leds[9] = CRGB::Green;
leds[10] = CRGB::Green; 
leds[11] = CRGB::Red; //color 1
leds[12] = CRGB::Red; //color 1
leds[13] = CRGB::Green;
FastLED.show();
delay(100);
leds[0] = CRGB::Green;
leds[1] = CRGB::Green;
leds[2] = CRGB::Green;
leds[3] = CRGB::Green;
leds[4] = CRGB::Green;
leds[5] = CRGB::Green;
leds[6] = CRGB::Green;
leds[7] = CRGB::Green;
leds[8] = CRGB::White; //color2
leds[9] = CRGB::White; //color2
leds[10] = CRGB::Green;
leds[11] = CRGB::Green;
leds[12] = CRGB::Red; //color 1
leds[13] = CRGB::Red; //color 1
FastLED.show();
delay(100);
leds[1] = CRGB::Green;  //Start 2nd loop of 1st post
leds[1] = CRGB::Green;
leds[2] = CRGB::Green;
leds[3] = CRGB::Green;
leds[4] = CRGB::Green;
leds[5] = CRGB::Green;
leds[6] = CRGB::Green;
leds[7] = CRGB::Green;
leds[8] = CRGB::Green;
leds[9] = CRGB::White; //color2
leds[10] = CRGB::White; //color2
leds[11] = CRGB::Green;
leds[12] = CRGB::Green;
leds[13] = CRGB::Red; //color 1

FastLED.show();
delay(100);
leds[0] = CRGB::Green;  
leds[1] = CRGB::Green;
leds[2] = CRGB::Green;
leds[3] = CRGB::Green;
leds[4] = CRGB::Green;
leds[5] = CRGB::Green;
leds[6] = CRGB::Green;
leds[7] = CRGB::Green;
leds[8] = CRGB::Green;
leds[9] = CRGB::Green;
leds[10] = CRGB::White; //color2
leds[11] = CRGB::White; //color2
leds[12] = CRGB::Green;
leds[13] = CRGB::Green;
FastLED.show();
delay(100);
leds[0] = CRGB::Green;          
leds[1] = CRGB::Green;
leds[2] = CRGB::Green;
leds[3] = CRGB::Green;
leds[4] = CRGB::Green;
leds[5] = CRGB::Green;
leds[6] = CRGB::Green;
leds[7] = CRGB::Green;
leds[8] = CRGB::Green;
leds[9] = CRGB::Green;
leds[10] = CRGB::Green;
leds[11] = CRGB::White; //color2
leds[12] = CRGB::White; //color2
leds[13] = CRGB::Green;
FastLED.show();
delay(100);
leds[0] = CRGB::Green;
leds[1] = CRGB::Green;
leds[2] = CRGB::Green;
leds[3] = CRGB::Green;
leds[4] = CRGB::Green;
leds[5] = CRGB::Green;
leds[6] = CRGB::Green;
leds[7] = CRGB::Green;
leds[8] = CRGB::Green;
leds[9] = CRGB::Green;
leds[10] = CRGB::Green;
leds[11] = CRGB::Green;
leds[12] = CRGB::White; //color2
leds[13] = CRGB::White; //color2  good
FastLED.show();
delay(100);
leds[0] = CRGB::Green;
leds[1] = CRGB::Green;
leds[2] = CRGB::Green;
leds[3] = CRGB::Green;
leds[4] = CRGB::Green;
leds[5] = CRGB::Green;
leds[6] = CRGB::Green;
leds[7] = CRGB::Green;
leds[8] = CRGB::Green;
leds[9] = CRGB::Green;
leds[10] = CRGB::Green;
leds[11] = CRGB::Green;
leds[12] = CRGB::Green;
leds[13] = CRGB::White; //color2
FastLED.show();
delay(100);
leds[0] = CRGB::Green;
leds[1] = CRGB::Green;
leds[2] = CRGB::Green; 
leds[3] = CRGB::Green; 
leds[4] = CRGB::Green;
leds[5] = CRGB::Green;
leds[6] = CRGB::Green;
leds[7] = CRGB::Green;
leds[8] = CRGB::Green;
leds[9] = CRGB::Green;
leds[10] = CRGB::Green;
leds[11] = CRGB::Green;
leds[12] = CRGB::Green;
leds[13] = CRGB::Green;
FastLED.show();
delay(100);  //End 2nd loop of 1st post
 
leds[14] = CRGB::Red; //color1 //Start 1st loop 2nd post 
leds[15] = CRGB::Red; //color1
leds[16] = CRGB::Green; 
leds[17] = CRGB::Green; 
leds[18] = CRGB::Green;    
leds[19] = CRGB::Green;    
leds[20] = CRGB::Green;
leds[21] = CRGB::Green;
leds[22] = CRGB::Green;
leds[23] = CRGB::Green;
leds[24] = CRGB::Green;
leds[25] = CRGB::Green;
leds[26] = CRGB::Green;
leds[27] = CRGB::Green;
FastLED.show();
delay(100); 
leds[14] = CRGB::Green; 
leds[15] = CRGB::Green; 
leds[16] = CRGB::Red; //color1
leds[17] = CRGB::Red; //color1
leds[18] = CRGB::Green;    
leds[19] = CRGB::Green;    
leds[20] = CRGB::Green;
leds[21] = CRGB::Green;
leds[22] = CRGB::Green;
leds[23] = CRGB::Green;
leds[24] = CRGB::Green;
leds[25] = CRGB::Green;
leds[26] = CRGB::Green;
leds[27] = CRGB::Green;
FastLED.show();
delay(100);
leds[14] = CRGB::White; 
leds[15] = CRGB::White; 
leds[16] = CRGB::Green; 
leds[17] = CRGB::Green; 
leds[18] = CRGB::Red; //color1   
leds[19] = CRGB::Red; //color1   
leds[20] = CRGB::Green;
leds[21] = CRGB::Green;
leds[22] = CRGB::Green;
leds[23] = CRGB::Green;
leds[24] = CRGB::Green;
leds[25] = CRGB::Green;
leds[26] = CRGB::Green;
leds[27] = CRGB::Green;
FastLED.show();
delay(100);
leds[14] = CRGB::Green;
leds[15] = CRGB::Green;
leds[16] = CRGB::White; //color2
leds[17] = CRGB::White; //color2
leds[18] = CRGB::Green;
leds[19] = CRGB::Green;
leds[20] = CRGB::Red; //color1
leds[21] = CRGB::Red; //color1
leds[22] = CRGB::Green;
leds[23] = CRGB::Green;
leds[24] = CRGB::Green;
leds[25] = CRGB::Green;
leds[26] = CRGB::Green;
leds[27] = CRGB::Green;
FastLED.show();
delay(100);
leds[14] = CRGB::Green;
leds[15] = CRGB::Green;
leds[16] = CRGB::Green;
leds[17] = CRGB::Green;
leds[18] = CRGB::White; //color2
leds[19] = CRGB::White; //color2
leds[20] = CRGB::Green;
leds[21] = CRGB::Green;
leds[22] = CRGB::Red; //color1
leds[23] = CRGB::Red; //color1
leds[24] = CRGB::Green;
leds[25] = CRGB::Green;
leds[26] = CRGB::Green;
leds[27] = CRGB::Green;
FastLED.show();
delay(100);
leds[14] = CRGB::Green;
leds[15] = CRGB::Green;
leds[16] = CRGB::Green;
leds[17] = CRGB::Green;
leds[18] = CRGB::Green;
leds[19] = CRGB::Green;
leds[20] = CRGB::White; //color2
leds[21] = CRGB::White; //color2
leds[22] = CRGB::Green;
leds[23] = CRGB::Green;
leds[24] = CRGB::Red; //color1
leds[25] = CRGB::Red; //color1
leds[26] = CRGB::Green;
leds[27] = CRGB::Green;
FastLED.show();
delay(100);
leds[14] = CRGB::Green;
leds[15] = CRGB::Green;
leds[16] = CRGB::Green;
leds[17] = CRGB::Green;
leds[18] = CRGB::Green;
leds[19] = CRGB::Green;
leds[20] = CRGB::Green;
leds[21] = CRGB::Green;
leds[22] = CRGB::White; //color2
leds[23] = CRGB::White; //color2
leds[24] = CRGB::Green;
leds[25] = CRGB::Green;
leds[26] = CRGB::Red; //color1
leds[27] = CRGB::Red; //color1
FastLED.show();
delay(100);
leds[14] = CRGB::Red; //color1 //Start 2nd loop on 2nd post
leds[15] = CRGB::Red; //color1
leds[16] = CRGB::Green;
leds[17] = CRGB::Green;
leds[18] = CRGB::Green;
leds[19] = CRGB::Green;
leds[20] = CRGB::Green;
leds[21] = CRGB::Green;
leds[22] = CRGB::Green;
leds[23] = CRGB::Green;
leds[24] = CRGB::White; //color2
leds[25] = CRGB::White; //color2
leds[26] = CRGB::Green;
leds[27] = CRGB::Green;
FastLED.show();
delay(100);
leds[14] = CRGB::Green;
leds[15] = CRGB::Green;
leds[16] = CRGB::Red; //color1
leds[17] = CRGB::Red; //color1
leds[18] = CRGB::Green;
leds[19] = CRGB::Green;
leds[20] = CRGB::Green;
leds[21] = CRGB::Green;
leds[22] = CRGB::Green;
leds[23] = CRGB::Green;
leds[24] = CRGB::Green;
leds[25] = CRGB::Green;
leds[26] = CRGB::White; //color2
leds[27] = CRGB::White; //color2
FastLED.show();
delay(100);
leds[14] = CRGB::White; //color2
leds[15] = CRGB::White; //color2
leds[16] = CRGB::Green;
leds[17] = CRGB::Green;
leds[18] = CRGB::Red; //color1
leds[19] = CRGB::Red; //color1
leds[20] = CRGB::Green;
leds[21] = CRGB::Green;
leds[22] = CRGB::Green;
leds[23] = CRGB::Green;
leds[24] = CRGB::Green;
leds[25] = CRGB::Green;
leds[26] = CRGB::Green;
leds[27] = CRGB::Green;
FastLED.show();
delay(100);
leds[14] = CRGB::Green;
leds[15] = CRGB::Green;
leds[16] = CRGB::White; //color2
leds[17] = CRGB::White; //color2
leds[18] = CRGB::Green;
leds[19] = CRGB::Green;
leds[20] = CRGB::Red; //color1
leds[21] = CRGB::Red; //color1
leds[22] = CRGB::Green;
leds[23] = CRGB::Green;
leds[24] = CRGB::Green;
leds[25] = CRGB::Green;
leds[26] = CRGB::Green;
leds[27] = CRGB::Green;
FastLED.show();
delay(100);
leds[14] = CRGB::Green;
leds[15] = CRGB::Green;
leds[16] = CRGB::Green;
leds[17] = CRGB::Green;
leds[18] = CRGB::White; //color2
leds[19] = CRGB::White; //color2
leds[20] = CRGB::Green;
leds[21] = CRGB::Green;
leds[22] = CRGB::Red; //color1 
leds[23] = CRGB::Red; //color1
leds[24] = CRGB::Green;
leds[25] = CRGB::Green;
leds[26] = CRGB::Green;
leds[27] = CRGB::Green;
FastLED.show();
delay(100);
leds[14] = CRGB::Green;
leds[15] = CRGB::Green;
leds[16] = CRGB::Green;
leds[17] = CRGB::Green;
leds[18] = CRGB::Green;
leds[19] = CRGB::Green;
leds[20] = CRGB::White; //color2
leds[21] = CRGB::White; //color2
leds[22] = CRGB::Green;
leds[23] = CRGB::Green;
leds[24] = CRGB::Red; //color1
leds[25] = CRGB::Red; //color1
leds[26] = CRGB::Green;
leds[27] = CRGB::Green;
FastLED.show();
delay(100);
leds[14] = CRGB::Green;
leds[15] = CRGB::Green;
leds[16] = CRGB::Green;
leds[17] = CRGB::Green;
leds[18] = CRGB::Green;
leds[19] = CRGB::Green;
leds[20] = CRGB::Green;
leds[21] = CRGB::Green;
leds[22] = CRGB::White; //color2
leds[23] = CRGB::White; //color2
leds[24] = CRGB::Green; 
leds[25] = CRGB::Green; 
leds[26] = CRGB::Red; //color1
leds[27] = CRGB::Red; //color1
FastLED.show();
delay(100);
leds[14] = CRGB::Green;
leds[15] = CRGB::Green;
leds[16] = CRGB::Green;
leds[17] = CRGB::Green;
leds[18] = CRGB::Green;
leds[19] = CRGB::Green;
leds[20] = CRGB::Green;
leds[21] = CRGB::Green;
leds[22] = CRGB::Green; 
leds[23] = CRGB::Green; 
leds[24] = CRGB::White; //color2 
leds[25] = CRGB::White; //color2 
leds[26] = CRGB::Green; 
leds[27] = CRGB::Green; 
FastLED.show();
delay(100);
leds[14] = CRGB::Green;
leds[15] = CRGB::Green;
leds[16] = CRGB::Green;
leds[17] = CRGB::Green;
leds[18] = CRGB::Green;
leds[19] = CRGB::Green;
leds[20] = CRGB::Green;
leds[21] = CRGB::Green;
leds[22] = CRGB::Green; 
leds[23] = CRGB::Green; 
leds[24] = CRGB::Green; 
leds[25] = CRGB::Green; 
leds[26] = CRGB::White; //color2
leds[27] = CRGB::White; //color2 
FastLED.show();
delay(100);
leds[14] = CRGB::Green;
leds[15] = CRGB::Green;
leds[16] = CRGB::Green;
leds[17] = CRGB::Green;
leds[18] = CRGB::Green;
leds[19] = CRGB::Green;
leds[20] = CRGB::Green;
leds[21] = CRGB::Green;
leds[22] = CRGB::Green; 
leds[23] = CRGB::Green; 
leds[24] = CRGB::Green; 
leds[25] = CRGB::Green; 
leds[26] = CRGB::Green; 
leds[27] = CRGB::Green;  
FastLED.show();
delay(100);

}
