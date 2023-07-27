#include <stdint.h>
volatile uint8_t* INTCON_REG = (volatile uint8_t*)0x0B;
#define GIE_BIT 7
#define INTF0IF_BIT 1
void set_bit(uint8_t* reg, uint8_t bit_pos, uint8_t value) {
	if (value) {
		*reg |= (1 << bit_pos);
	} 
	else {
		*reg &= ~(1 << bit_pos);
	}
}
void set_byte(uint8_t* reg, uint8_t value) {
*reg = value;
}
int main() {
set_bit(INTCON_REG, GIE_BIT, 1); set_bit(INTCON_REG, INTF0IF_BIT, 1);
 
indicate an external interrupt on INT0 set_byte(INTCON_REG, 0x82); return 0;
}
