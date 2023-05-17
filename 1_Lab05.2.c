#include <stdio.h>

int main(void) {
    int N;
    int v;
    int count = 0;
    int arr[1000];
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);

    }
    scanf("%d", &v);
    for (int i = 0; i < N; i++) {
        if (v == arr[i])
            count += 1;
    }
    printf("%d", count);
}