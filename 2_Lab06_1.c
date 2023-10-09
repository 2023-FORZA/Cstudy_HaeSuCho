#include <stdio.h>
#include <ctype.h>

int main() {
    char input[1000001]; // �ִ� �Է� ���ڿ� ����
    int count[26] = { 0 }; // ���ĺ� �󵵸� ������ �迭 (a~z)

    // �Է� ���ڿ��� �о��
    scanf("%s", input);

    // �Է� ���ڿ��� ��� �ҹ��ڷ� ��ȯ
    for (int i = 0; input[i]; i++) {
        input[i] = tolower(input[i]);
    }

    // ���ĺ� �� ���
    for (int i = 0; input[i]; i++) {
        if (isalpha(input[i])) {
            count[input[i] - 'a']++;
        }
    }

    int maxCount = 0;
    char mostFrequentChar = '?';

    // ���� ���� ������ ���ĺ� ã��
    for (int i = 0; i < 26; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentChar = 'A' + i;
        }
        else if (count[i] == maxCount) {
            mostFrequentChar = '?';
        }
    }

    // ��� ���
    printf("%c\n", mostFrequentChar);

    return 0;
}
