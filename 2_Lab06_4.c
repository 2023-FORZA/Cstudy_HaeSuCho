#include <stdio.h>

// 숫자의 자릿수를 역순으로 만드는 함수
int Rev(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    // X와 Y를 역순으로 만들어서 더한 다음 다시 역순으로 만듦
    int result = Rev(Rev(X) + Rev(Y));

    printf("%d\n", result);

    return 0;
}
