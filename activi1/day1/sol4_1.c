#include <stdio.h>
int main() {
uint8_t num = 0x25;
SET_BIT(num, 3);
printf("After setting bit 3: %x\n", num); CLEAR_BIT(num, 1);
printf("After clearing bit 1: %x\n", num); TOGGLE_BIT(num, 5);
printf("After toggling bit 5: %x\n", num); return 0;
}
