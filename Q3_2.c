// - Check Alphacharacter or numeric or symbol 

#include<stdio.h>

int main() {
	char ch;
	printf("Enter The Character = ");
	scanf_s("%c", &ch, 1);

	(((ch >= 65) && (ch <= 90)) || ((ch >= 97) && (ch <= 122))) ? printf("\nAlphacharacter\n") : (ch>=48&&ch<=57)?printf("\nNumeric\n"):printf("\nSymbol\n");

	return 0;
}