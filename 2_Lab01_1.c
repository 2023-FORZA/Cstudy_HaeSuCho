#include <stdio.h>
#include <string.h>

int compare(const void* a, const void* b) {
    return (*(char*)a - *(char*)b);
}

int main() {
    int case_number = 0;

    while (1) {
        char first_word[1001], recovered_letters[1001];
        scanf("%s", first_word);
        if (strcmp(first_word, "END") == 0) {
            break;
        }
        scanf("%s", recovered_letters);
        case_number++;

        int len1 = strlen(first_word);
        int len2 = strlen(recovered_letters);

        // 두 문자열을 정렬
        qsort(first_word, len1, sizeof(char), compare);
        qsort(recovered_letters, len2, sizeof(char), compare);

        // 정렬된 문자열을 비교하여 결과 출력
        if (strcmp(first_word, recovered_letters) == 0) {
            printf("Case %d: same\n", case_number);
        }
        else {
            printf("Case %d: different\n", case_number);
        }
    }

    return 0;
}
