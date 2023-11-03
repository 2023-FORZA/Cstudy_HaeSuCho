#include <stdio.h>

int main() {
    long long A, B, C;
    scanf("%lld %lld %lld", &A, &B, &C);

    if (B >= C) {
        // 가변 비용이 가격보다 크거나 같으면 손익분기점이 존재하지 않음
        printf("-1\n");
    }
    else {
        long long breakEvenPoint = A / (C - B) + 1;
        printf("%lld\n", breakEvenPoint);
    }

    return 0;
}
