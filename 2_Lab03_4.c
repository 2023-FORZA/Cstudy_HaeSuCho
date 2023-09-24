#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Test case�� �� �Է�

    while (T--) {
        int k, n;
        scanf("%d", &k); // �� �� �Է�
        scanf("%d", &n); // ȣ�� �Է�

        int apartment[15][15] = { 0 }; // ����Ʈ �迭 �ʱ�ȭ

        // 0�� �ʱ�ȭ
        for (int i = 1; i <= 14; i++) {
            apartment[0][i] = i;
        }

        // 1������ ���
        for (int i = 1; i <= k; i++) {
            for (int j = 1; j <= n; j++) {
                apartment[i][j] = apartment[i - 1][j] + apartment[i][j - 1];
            }
        }

        printf("%d\n", apartment[k][n]); // ��� ���
    }

    return 0;
}
