//Q 2. Accept Integer Value from user 
// - Check Odd Even Print message Accordingly 


#include<stdio.h>

int main() {

	int num;
	printf("Enter Two No. = ");
	scanf_s("%d", &num);
	num % 2 == 0 ? printf("\nEven\n") : printf("\nOdd\n");

	return 0;
}