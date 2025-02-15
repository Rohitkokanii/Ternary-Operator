//Q 1.  Accept Three Integer Values from user 
//- Print largest value

#include<stdio.h>

int main() {
	int n1, n2, n3;

	printf("Enter 3 Values = ");
	scanf_s("%d%d%d", &n1, &n2, &n3);
	int max = ((n1 > n2) || (n1 > n3)) ? n1 : ((n2 > n3) || n2 > n3) ? n2 : n3;
	printf("\nResult = %d\n", max);

	return 0;
}