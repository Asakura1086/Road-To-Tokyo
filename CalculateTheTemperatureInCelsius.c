#include <stdio.h>
int main() {
	int F, C;
	scanf_s("%d", &F);
	C = 5 * (F - 32) / 9;
	printf("Celsius = %d", C);
	return 0;
}