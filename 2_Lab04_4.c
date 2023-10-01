#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int baskets[N];
    for (int i = 0; i < N; i++) {
        baskets[i] = i + 1; // 초기 바구니 상태 설정
    }

    for (int i = 0; i < M; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        // a번 바구니와 b번 바구니의 공을 교환
        int temp = baskets[a - 1];
        baskets[a - 1] = baskets[b - 1];
        baskets[b - 1] = temp;
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", baskets[i]);
    }
    printf("\n");

    return 0;
}
