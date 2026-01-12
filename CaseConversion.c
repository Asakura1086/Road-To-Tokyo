#include <stdio.h>
int main() {
	char ch;
	scanf_s("%c", &ch, 1);
	printf("%c", ch + 32);
	return 0;
}