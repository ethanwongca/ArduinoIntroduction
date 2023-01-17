// LED Dot Matrix Project

#include <LedControl.h>

const int DIN_PIN = 7;
const int CS_PIN = 6;
const int CLK_PIN = 5;

const uint64_t IMAGES[] = {
  0x1824424242424242,
  0x3c4202020202423c,
  0x3c4242424242423c,
  0x0000000000000000,
  0x3c4242424242423c,
  0x7e02020202020202,
  0x824222120e122242,
  0x7e1818181818187e,
  0x1e2242424242221e,
  0x3c42811800424200
};
const int IMAGES_LEN = sizeof(IMAGES)/8;



LedControl display = LedControl(DIN_PIN, CLK_PIN, CS_PIN);


void setup() {
  display.clearDisplay(0);
  display.shutdown(0, false);
  display.setIntensity(0, 10);
}

void displayImage(uint64_t image) {
  for (int i = 0; i < 8; i++) {
    byte row = (image >> i * 8) & 0xFF;
    for (int j = 0; j < 8; j++) {
      display.setLed(0, i, j, bitRead(row, j));
    }
  }
}

int i = 0;

void loop() {
  displayImage(IMAGES[i]);
  if (++i >= IMAGES_LEN ) {
    i = 0;
  }
  delay(1000);
}


