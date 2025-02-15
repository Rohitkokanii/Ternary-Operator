//Q 2. Accept Integer Value from user 
// - Check it is completly divisible by 5 or not

#include<stdio.h>

int main() {
	int num;
	printf("Enter No. = ");
	scanf_s("%d", &num);
	num % 5 == 0 ? printf("\nDivisible by 5\n") : printf("\nNot Divisible by 5\n");

	return 0;
}