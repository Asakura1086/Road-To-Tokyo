#include <stdio.h>
#include <math.h>
int narcissistic(int number) {
	
	int a[20], i = 0,b=0,c=0;
	b = number;
	while (number != 0) {
		a[i] = number % 10;
		number /= 10;
		i++;
	}
	for (int k = 0; k < i; k++) {
		c +=(int) pow(a[k], i);
	}
	if (b == c) {
		return 1;
	}
	else {
		return 0;
	}
}

void PrintN(int m, int n) {
	int i = m;
	while (i < n-1) {
		i++;
		if (narcissistic(i) == 1) {
			printf("%d\n", i);
		}
		else {
			continue;
		}
	}
}

int main()
{
	int m, n;

	scanf_s("%d %d", &m, &n);
	if (narcissistic(m)) printf("%d is a narcissistic number\n", m);
	PrintN(m, n);
	if (narcissistic(n)) printf("%d is a narcissistic number\n", n);

	return 0;
}