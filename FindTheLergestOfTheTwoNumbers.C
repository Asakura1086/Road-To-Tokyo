#include <stdio.h>
int max(int a, int b) {
	int max;
	if (a > b) {
		max = a;
	}
	else {
		max = b;
	}
	return max;
}
int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("max = %d", max(a, b));
	return 0;
}