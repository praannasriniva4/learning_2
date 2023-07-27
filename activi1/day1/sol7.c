#include <stdio.h>
#include <string.h>
void removeDuplicateChar(char *s, char c) { 
int len = strlen(s);
int currentIndex = 0;
 for (int i = 0; i < len; i++) {
	if (s[i] != c || (i > 0 && s[i - 1] != c)) { 
		s[currentIndex] = s[i];
		currentIndex++;
	}
}
 s[currentIndex] = '\0';
}
int main() {
char inputString[100]; char charToRemove;
printf("Enter the input string: "); 
fgets(inputString, sizeof(inputString), stdin);
printf("Enter the character to remove: "); 
scanf("%c", &charToRemove);
 
int len = strlen(inputString);
if (inputString[len - 1] == '\n')
inputString[len - 1] = '\0'; 
removeDuplicateChar(inputString, charToRemove); 
printf("Result: %s\n", inputString);
return 0;
}
