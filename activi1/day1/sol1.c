#include <stdio.h>
unsigned int insertBits(unsigned int X, unsigned int N, unsigned int P) { unsigned int mask = ~(0xFFFFFFFF << P);
X &= mask;
X |= (N << P);
return X; 
}
int main() {
unsigned int X = 10;
unsigned int N = 5;
unsigned int P = 6;
unsigned int result = insertBits(X, N, P);
printf("Result: %08X\n", result);
X = 10; N = 5; P = 2;
result = insertBits(X, N, P);
printf("Result: %08X\n", result);
return 0;
}
 
