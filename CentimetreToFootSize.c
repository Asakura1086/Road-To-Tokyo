#include <stdio.h>
int main() {
	double foot, m, cm;
	int inch;
	scanf_s("%lf", &cm);
	m = cm / 100;
	foot = m / 0.3048;
	int f;
	f = (int)foot;
	inch = (int)((foot - f) * 12);
	printf("%d %d", f, inch);
	return 0;
}