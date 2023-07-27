#include <stdio.h>
int main() {
uint8_t decimalValue = 37;
uint8_t bcdValue;
bcdValue = DEC_TO_BCD(decimalValue);
printf("Decimal: %d, BCD: 0x%X\n", decimalValue, bcdValue); bcdValue = decimalToBCD(decimalValue);
printf("Decimal: %d, BCD: 0x%X\n", decimalValue, bcdValue); return 0;
}
 
