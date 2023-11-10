#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 정렬 비교 함수
int compare(const void* a, const void* b) {
    return (*(char*)b - *(char*)a);
}

int main() {
    char num[11]; // 10자리 숫자 + 널 종료 문자('\0')을 위한 공간
    scanf("%s", num);

    // 문자열을 정렬
    qsort(num, strlen(num), sizeof(char), compare);

    // 정렬된 문자열 출력
    printf("%s\n", num);

    return 0;
}
