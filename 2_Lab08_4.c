#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ���� �� �Լ�
int compare(const void* a, const void* b) {
    return (*(char*)b - *(char*)a);
}

int main() {
    char num[11]; // 10�ڸ� ���� + �� ���� ����('\0')�� ���� ����
    scanf("%s", num);

    // ���ڿ��� ����
    qsort(num, strlen(num), sizeof(char), compare);

    // ���ĵ� ���ڿ� ���
    printf("%s\n", num);

    return 0;
}
