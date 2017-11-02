#include <stdio.h>
int main(void) {
	float flo = 9.5;
	printf("Enter a Float\n");
	scanf_s("%f", &flo);
	printf("%f", flo);
	return 0;
}