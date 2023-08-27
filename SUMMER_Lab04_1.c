#include <stdio.h>
#include <string.h>

#define MAX_FILES 50
#define MAX_LENGTH 50

int main() {
    int N;
    char filenames[MAX_FILES][MAX_LENGTH + 1];
    char pattern[MAX_LENGTH + 1];

    // �Է� �ޱ�
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%s", filenames[i]);
    }

    // ���� �̸��� ���̸� ������, ������ �ʱ�ȭ
    int length = strlen(filenames[0]);
    memset(pattern, 0, sizeof(pattern));

    // ���� �̸����� ���ϸ� ���� ����
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

    // ������ ���� ���
    printf("%s\n", pattern);

    return 0;
}
