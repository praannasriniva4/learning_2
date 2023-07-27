#include <stdio.h>
#include <string.h>
void generic_swap(void* ptr1, void* ptr2, size_t size)
{
char temp[size];
memcpy(temp, ptr1, size);
memcpy(ptr1, ptr2, size);
memcpy(ptr2, temp, size);
}
typedef struct Student
{
char a[10];
int b;
double c;
} Student;
int main()
{
int i1 = 10, i2 = 20;
float f1 = 1.6, f2 = 8.9;
int a1[3] = {1, 2, 3}, a2[3] = {10, 20, 30};
Student s1 = {"Adil", 42, 5.2}, s2 = {"Bilal", 9, 3};
generic_swap(&i1, &i2, sizeof(int));
printf("Swapped i1 and i2 -> %d and %d\n", i1, i2);
generic_swap(&f1, &f2, sizeof(float));
printf("Swapped f1 and f2 -> %.1f and %.1f\n", f1, f2);
generic_swap(&a1, &a2, sizeof(a1));
printf("Swapped a1 and a2 -> [%d, %d, %d] and [%d, %d, %d]\n", a1[0], a1[1], a1[2], a2[0], a2[1], a2[2]);
 
generic_swap(&s1, &s2, sizeof(Student));
printf("Swapped s1 and s2 -> {%s, %d, %.1f} and {%s, %d, %.1f}\n", s1.a, s1.b, s1.c, s2.a, s2.b, s2.c);
 return 0;
}
