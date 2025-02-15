//Q 3. Accept character from User 
// - Check it is Alphacharacter or not 



#include<stdio.h>

int main() {
	char ch;
	printf("Enter The Character = ");
	scanf_s("%c", &ch,1);

	(((ch >= 65) && (ch <= 90)) || ((ch >= 97) && (ch <= 122))) ? printf("\nAlphacharacter\n") : printf("\nNot Alphacharacter\n");

	return 0;
}