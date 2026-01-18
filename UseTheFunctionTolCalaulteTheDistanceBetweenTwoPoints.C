#include <stdio.h>
#include <math.h>
double dist(double x1, double y1, double x2, double y2) {
	double dist = 0;
	dist = sqrt(pow(x1 - x2,2) + pow(y1 - y2,2));
	return dist;
}

int main() {
	double x1, y1, x2, y2;
	scanf_s("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	printf("dist = %.2f\n", dist(x1, y1, x2, y2));
	return 0;
}