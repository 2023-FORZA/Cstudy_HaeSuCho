#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int baskets[N];
    for (int i = 0; i < N; i++) {
        baskets[i] = i + 1; // �ʱ� �ٱ��� ���� ����
    }

    for (int i = 0; i < M; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        // a�� �ٱ��Ͽ� b�� �ٱ����� ���� ��ȯ
        int temp = baskets[a - 1];
        baskets[a - 1] = baskets[b - 1];
        baskets[b - 1] = temp;
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", baskets[i]);
    }
    printf("\n");

    return 0;
}
