#include <stdio.h>

int main() {
    // Set up : Input
    int N;
    scanf("%d", &N);

    while (N--) {
        int X;
        scanf("%d", &X);

        // Process
        for (int i = 10; i < X; i *= 10) {
            /* i 보다 크다면 (i/10)의 자리에서 반올림하고 ... */
            if (X % i / (i / 10) >= 5) {
                X = (X / i + 1) * i;
            }
            else {
                X = X / i * i;
            }
        }

        // Control : Output
        printf("%d\n", X);
    }

    return 0;
}
