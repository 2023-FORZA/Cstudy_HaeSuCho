#include <stdio.h>

// �ּҰ� �Լ�
int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    // ���� ����� ��輱������ �Ÿ� ���
    int min_dist = min(x, min(y, min(w - x, h - y)));

    // ��� ���
    printf("%d\n", min_dist);

    return 0;
}
