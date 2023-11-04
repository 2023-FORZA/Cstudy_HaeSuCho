#include <stdio.h>

int main() {
    int n, a, nowup, up, max;
    scanf("%d", &n);
    scanf("%d", &a);
    nowup = 0;  // 초기화: 현재 오르막길 길이
    max = 0;    // 초기화: 최대 오르막길 길이

    for (int i = 1; i < n; i++) {
        int p;
        scanf("%d", &p);  // p 변수 추가 및 초기화
        if (a < p) {
            up = p - a;
            nowup += up;
            if (nowup > max) {
                max = nowup;
            }
        }
        else {
            up = 0;
            nowup = 0;
        }
        a = p;
    }
    printf("%d\n", max);

    return 0;
}
