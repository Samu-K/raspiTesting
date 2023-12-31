#include "../inc/uart.h"
#include "../inc/utils.h"
#include "../inc/common-defines.h"
#include "../inc/peripherals/base.h"
#include "../inc/peripherals/gpio.h"

void init_uart(void) {
  uint64_t selector;

  selector = read32(GPFSEL1);
  selector &= ~(7 << 12); /* clear pin 14 */ 
  selector |= 2<<12; /* set alt functino 5 for pin 14 */ 
  
  selector &= ~(7<<15); /* same for pin 15 */
  selector |= 2<<15;

}
