#include <stdio.h>

int main(void) {
    int arr[1000];
    int max = 0;
    int count;
    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        if (max < arr[i]) {
            max = arr[i];
            count = i + 1;
        }
    }
    printf("%d\n%d", max, count);


}