#include "mbed.h"

DigitalIn sw1(p13);
DigitalIn sw2(p16);
DigitalOut R(p23);
DigitalOut G(p25);

// main() runs in its own thread in the OS
int main() {

  while (true) {
    if (sw1 == 1)

    {
      R = 1;
      G = 0;
      wait_us(500);
    }

    else if (sw2 == 1) {
      R = 0;
      G = 1;
     wait_us(500);
    }

    else {
      R = 0;
      G = 0;
      wait_us(500);
    }
  }
}
