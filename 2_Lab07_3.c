#include <stdio.h>

int main() {
    int n, a, nowup, up, max;
    scanf("%d", &n);
    scanf("%d", &a);
    nowup = 0;  // �ʱ�ȭ: ���� �������� ����
    max = 0;    // �ʱ�ȭ: �ִ� �������� ����

    for (int i = 1; i < n; i++) {
        int p;
        scanf("%d", &p);  // p ���� �߰� �� �ʱ�ȭ
        if (a < p) {
            up = p - a;
            nowup += up;
            if (nowup > max) {
                max = nowup;
            }
        }
        else {
            up = 0;
            nowup = 0;
        }
        a = p;
    }
    printf("%d\n", max);

    return 0;
}
