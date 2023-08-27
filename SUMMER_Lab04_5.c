#include <stdio.h>

int main() {
    int payment;
    scanf("%d", &payment);

    int change = 1000 - payment;  // ���� �ܵ� ���

    int coin_types[] = { 500, 100, 50, 10, 5, 1 };
    int coin_count = 0;

    for (int i = 0; i < 6; ++i) {
        coin_count += change / coin_types[i];  // �� ������ ���� ���
        change %= coin_types[i];  // ���� �ܵ� ����
    }

    printf("%d\n", coin_count);

    return 0;
}

