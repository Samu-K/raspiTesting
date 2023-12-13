#include "BCM2837.h"

typedef unsigned int uint;

void delay(void) {
  volatile int i=0;
  while (i < 0x850000) {
    i++;
  }
  return;
}

void write(void *dst, uint val) {
  uint* udst = (uint*)dst;
  *udst = val;
  return;
}

uint read(void* src) {
  uint* usrc = (uint*)src;
  return *usrc;
}

int main(void) {
  int i=0;
  uint sel2 = read(BCM2837_GPFSEL2);
  sel2 |= (1<<3); /* set pin 21 to output */ 
  write(BCM2837_GPFSEL2, sel2);
  
  while(1) {
    /* turn on pin 21 */ 
    write(BCM2837_GPSET0, 1<<21);
    /* add delay */ 
    delay();
    /* turn off pin 21 */
    write(BCM2837_GPCLR0,1<<21);
    /* add delay */ 
    delay();
     
  }

  return 0;
}
