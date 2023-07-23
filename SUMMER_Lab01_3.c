#include <stdio.h>

// �־��� ���� X�� ����� ���� ���븦 �ڸ��� Ǯ�� ���̴� �Լ�
int makeX(int X) {
    int stick = 64; // ó���� ������ �ִ� ���� ����
    int cnt = 0;    // �ʿ��� ������ ����

    while (X > 0) {
        if (X >= stick) {
            // ���� ���븦 ���̰� X�� ���̸� ����
            X -= stick;
            cnt++;
        }
        // ���� ������ ���̸� �������� �ڸ�
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
