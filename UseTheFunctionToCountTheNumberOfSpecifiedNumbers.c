#include <stdio.h>

int CountDigit(int number, int digit) {
    int count = 0;
    if (number < 0)number = -number;
    if (number == 0 && digit == 0) return 1;
    while (number > 0) {
        if (number % 10 == digit) {
            count++;
        }
        number /= 10;
    }
    return count;
}

int main()
{
    int number, digit;

    scanf_s("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

