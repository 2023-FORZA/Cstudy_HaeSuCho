#include <stdio.h>

// ������ �ڸ����� �������� ����� �Լ�
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

    // X�� Y�� �������� ���� ���� ���� �ٽ� �������� ����
    int result = Rev(Rev(X) + Rev(Y));

    printf("%d\n", result);

    return 0;
}
