#include <stdio.h>
float pi=3.14,
	r=5,
	perimeter = 2 * pi * r,
	area = pi * r * r;
int main() {
	printf("perimeter = %.2f\n", perimeter);
	printf("area = %.2f", area);
	return 0;
}
