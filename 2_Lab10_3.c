#include <stdio.h>

int isHanNumber(int num) {
    // 한수인지 확인하는 함수
    if (num < 100) {
        return 1; // 두 자리 수는 모두 한수
    }

    int digit1 = num % 10;
    int digit2 = (num / 10) % 10;
    int digit3 = num / 100;

    return (digit2 - digit1) == (digit3 - digit2);
}

int main() {
    int N;
    scanf("%d", &N);

    int count = 0;

    for (int i = 1; i <= N; i++) {
        if (isHanNumber(i)) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
