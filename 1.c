#include <stdio.h>
int main() {
    int years, hours;
    double salary;
    scanf("%d %d", &years, &hours);
    if (years >= 5) {
        if (hours <= 40) {
            salary = hours * 50.0;
        }
        else {
            salary = 40 * 50.0 + (hours - 40) * 50.0 * 1.5;
        }
    }
    else {
        if (hours <= 40) {
            salary = hours * 30.0;
        }
        else {
            salary = 40 * 30.0 + (hours - 40) * 30.0 * 1.5;
        }
    }
    printf("%.2f\n", salary);

    return 0;
}