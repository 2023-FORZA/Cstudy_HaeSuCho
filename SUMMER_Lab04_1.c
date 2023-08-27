#include <stdio.h>
#include <string.h>

#define MAX_FILES 50
#define MAX_LENGTH 50

int main() {
    int N;
    char filenames[MAX_FILES][MAX_LENGTH + 1];
    char pattern[MAX_LENGTH + 1];

    // 입력 받기
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%s", filenames[i]);
    }

    // 파일 이름의 길이를 얻어오고, 패턴을 초기화
    int length = strlen(filenames[0]);
    memset(pattern, 0, sizeof(pattern));

    // 파일 이름들을 비교하며 패턴 생성
    for (int i = 0; i < length; ++i) {
        char ch = filenames[0][i];
        int isWildcard = 1;

        for (int j = 1; j < N; ++j) {
            if (filenames[j][i] != ch) {
                isWildcard = 0;
                break;
            }
        }

        pattern[i] = (isWildcard ? ch : '?');
    }

    // 생성된 패턴 출력
    printf("%s\n", pattern);

    return 0;
}
