#include <stdio.h>
#include <stdlib.h>

// 중량을 비교하는 함수
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

    // 중량을 오름차순으로 정렬
    qsort(ropes, N, sizeof(int), compare);

    int maxWeight = 0;

    // 로프를 선택하면서 최대 중량 계산
    for (int i = 0; i < N; i++) {
        int weight = ropes[i] * (N - i);
        if (weight > maxWeight) {
            maxWeight = weight;
        }
    }

    printf("%d\n", maxWeight);

    return 0;
}
