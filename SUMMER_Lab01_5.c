#include <stdio.h>

// 수를 뒤집는 함수
int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

// 좌우 대칭인지 확인하는 함수
int isSymmetric(int num) {
    int reversed = reverseNumber(num);
    return num + reversed == reverseNumber(num + reversed);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        // 결과 출력
        printf("%s\n", isSymmetric(N) ? "YES" : "NO");
    }

    return 0;
}
