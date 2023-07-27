#include <stdio.h>
void setBit(uint8_t *number, uint8_t bit) {
*number |= (1 << bit);
}
void clearBit(uint8_t *number, uint8_t bit) {
*number &= ~(1 << bit);
}
void toggleBit(uint8_t *number, uint8_t bit) {
*number ^= (1 << bit);
}
int main() {
uint8_t num = 0x25; // Example 8-bit number: 0010 0101
 
setBit(&num, 3);
printf("After setting bit 3: %x\n", num); clearBit(&num, 1);
printf("After clearing bit 1: %x\n", num); toggleBit(&num, 5);
printf("After toggling bit 5: %x\n", num); return 0;
}
