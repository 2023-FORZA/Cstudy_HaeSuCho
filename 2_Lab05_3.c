#include <stdio.h>

int main() {
    long long A, B, C;
    scanf("%lld %lld %lld", &A, &B, &C);

    if (B >= C) {
        // ���� ����� ���ݺ��� ũ�ų� ������ ���ͺб����� �������� ����
        printf("-1\n");
    }
    else {
        long long breakEvenPoint = A / (C - B) + 1;
        printf("%lld\n", breakEvenPoint);
    }

    return 0;
}
