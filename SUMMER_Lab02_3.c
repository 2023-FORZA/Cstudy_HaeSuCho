#include <stdio.h>

int main() {
    int dwarfs[9];
    int sum = 0;

    // �Է�: ��ȩ �������� Ű�� �Է¹���
    for (int i = 0; i < 9; i++) {
        scanf("%d", &dwarfs[i]);
        sum += dwarfs[i];
    }

    // ����Ž������ �ϰ� �����̸� ã��
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - dwarfs[i] - dwarfs[j] == 100) {
                // �ϰ� �����̸� ã������ ���
                int result[7];
                int idx = 0;
                for (int k = 0; k < 9; k++) {
                    if (k != i && k != j) {
                        result[idx++] = dwarfs[k];
                    }
                }

                // �ϰ� �������� Ű�� ������������ ����
                for (int a = 0; a < 6; a++) {
                    for (int b = a + 1; b < 7; b++) {
                        if (result[a] > result[b]) {
                            int temp = result[a];
                            result[a] = result[b];
                            result[b] = temp;
                        }
                    }
                }

                // ���ĵ� �ϰ� ������ ���
                for (int a = 0; a < 7; a++) {
                    printf("%d\n", result[a]);
                }
                return 0;
            }
        }
    }

    return 1;
}
