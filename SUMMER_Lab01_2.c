#include <stdio.h>

// 최소값 함수
int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    // 가장 가까운 경계선까지의 거리 계산
    int min_dist = min(x, min(y, min(w - x, h - y)));

    // 결과 출력
    printf("%d\n", min_dist);

    return 0;
}
