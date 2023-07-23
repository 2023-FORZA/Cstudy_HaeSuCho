#include <stdio.h>

// 주어진 길이 X를 만들기 위해 막대를 자르고 풀로 붙이는 함수
int makeX(int X) {
    int stick = 64; // 처음에 가지고 있는 막대 길이
    int cnt = 0;    // 필요한 막대의 개수

    while (X > 0) {
        if (X >= stick) {
            // 현재 막대를 붙이고 X의 길이를 줄임
            X -= stick;
            cnt++;
        }
        // 현재 막대의 길이를 절반으로 자름
        stick /= 2;
    }

    return cnt;
}

int main() {
    int X;
    scanf("%d", &X);

    int result = makeX(X);
    printf("%d\n", result);

    return 0;
}
