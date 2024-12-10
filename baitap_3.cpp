#include <stdio.h>
short a = 4, b = 2,
	sum = a + b,
	difference = a - b,
	product = a * b;
float quotient = a / b;
int main() {
	printf("sum = %d\n", sum);
	printf("difference = %d\n", difference);
	printf("product = %d\n", product);
	printf("quotient = %.2f", quotient);
	return 0;	
}
