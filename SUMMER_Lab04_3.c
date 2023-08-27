#include <stdio.h>

int d(int n) {
    int sum = n;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    int is_self_number[10001] = { 0 };  // 0으로 초기화

    for (int i = 1; i <= 10000; ++i) {
        int self_num = d(i);

        if (self_num <= 10000) {
            is_self_number[self_num] = 1;
        }
    }

    for (int i = 1; i <= 10000; ++i) {
        if (!is_self_number[i]) {
            printf("%d\n", i);
        }
    }

    return 0;
}


