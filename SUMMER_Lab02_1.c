#include <stdio.h>

int calculateCycle(int n) {
    int original = n;
    int cycle = 0;

    do {
        int tens = n / 10;
        int units = n % 10;
        int sum = tens + units;

        n = units * 10 + sum % 10;
        cycle++;
    } while (original != n);

    return cycle;
}

int main() {
    int N;
    scanf("%d", &N);

    int result = calculateCycle(N);
    printf("%d\n", result);

    return 0;
}
