#include <stdio.h>
#include <stdlib.h>

// �߷��� ���ϴ� �Լ�
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N;
    scanf("%d", &N);

    int ropes[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &ropes[i]);
    }

    // �߷��� ������������ ����
    qsort(ropes, N, sizeof(int), compare);

    int maxWeight = 0;

    // ������ �����ϸ鼭 �ִ� �߷� ���
    for (int i = 0; i < N; i++) {
        int weight = ropes[i] * (N - i);
        if (weight > maxWeight) {
            maxWeight = weight;
        }
    }

    printf("%d\n", maxWeight);

    return 0;
}
