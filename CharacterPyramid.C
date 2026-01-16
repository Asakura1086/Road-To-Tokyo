#include <stdio.h>
void CharPyramid(int n, char ch) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= i; k++) {
			printf("%c ", ch);
		}
		printf("\n");
	}
}
int main() {
	int n;
	char ch;
	scanf_s("%d %c", &n, &ch);
	CharPyramid(n, ch);
	return 0;
}