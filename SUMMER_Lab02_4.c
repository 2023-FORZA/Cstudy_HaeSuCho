#include <stdio.h>

int main() {
    int H, M;
    scanf("%d %d", &H, &M);

    int adjustedM = M - 45;

    if (adjustedM < 0) {
        H = (H + 23) % 24;
        adjustedM += 60;
    }

    printf("%d %d\n", H, adjustedM);

    return 0;
}

