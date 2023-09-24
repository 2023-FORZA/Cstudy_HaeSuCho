#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Test case의 수 입력

    while (T--) {
        int k, n;
        scanf("%d", &k); // 층 수 입력
        scanf("%d", &n); // 호수 입력

        int apartment[15][15] = { 0 }; // 아파트 배열 초기화

        // 0층 초기화
        for (int i = 1; i <= 14; i++) {
            apartment[0][i] = i;
        }

        // 1층부터 계산
        for (int i = 1; i <= k; i++) {
            for (int j = 1; j <= n; j++) {
                apartment[i][j] = apartment[i - 1][j] + apartment[i][j - 1];
            }
        }

        printf("%d\n", apartment[k][n]); // 결과 출력
    }

    return 0;
}
