#include <stdio.h>

int main() {
    int dwarfs[9];
    int sum = 0;

    // 입력: 아홉 난쟁이의 키를 입력받음
    for (int i = 0; i < 9; i++) {
        scanf("%d", &dwarfs[i]);
        sum += dwarfs[i];
    }

    // 완전탐색으로 일곱 난쟁이를 찾음
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - dwarfs[i] - dwarfs[j] == 100) {
                // 일곱 난쟁이를 찾았으면 출력
                int result[7];
                int idx = 0;
                for (int k = 0; k < 9; k++) {
                    if (k != i && k != j) {
                        result[idx++] = dwarfs[k];
                    }
                }

                // 일곱 난쟁이의 키를 오름차순으로 정렬
                for (int a = 0; a < 6; a++) {
                    for (int b = a + 1; b < 7; b++) {
                        if (result[a] > result[b]) {
                            int temp = result[a];
                            result[a] = result[b];
                            result[b] = temp;
                        }
                    }
                }

                // 정렬된 일곱 난쟁이 출력
                for (int a = 0; a < 7; a++) {
                    printf("%d\n", result[a]);
                }
                return 0;
            }
        }
    }

    return 1;
}
