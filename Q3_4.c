// - Convert to Opposite Case if it is Alphacharacter

#include<stdio.h>

int main() {
	char ch;
	printf("Enter Character = ");
	scanf_s("%c", &ch, 1);

	(ch >= 65 && ch <= 90) ? printf("\n%c\n", ch = ch + 32) : (ch >= 97 && ch <= 122) ? printf("\n%c\n",ch = ch - 32) : printf("\nSymbol\n");

	return 0;
}