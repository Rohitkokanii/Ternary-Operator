// - Check it is uppercase or lower case 

#include<stdio.h>

int main() {
	char ch;
	printf("Enter Character = ");
	scanf_s("%c", &ch,1);
	
	(ch >= 65 && ch <= 90) ? printf("\nUpperCase\n") : printf("\nLower Case\n");

	return 0;
}
