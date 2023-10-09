#include <stdio.h>
#include <ctype.h>

int main() {
    char input[1000001]; // 최대 입력 문자열 길이
    int count[26] = { 0 }; // 알파벳 빈도를 저장할 배열 (a~z)

    // 입력 문자열을 읽어옴
    scanf("%s", input);

    // 입력 문자열을 모두 소문자로 변환
    for (int i = 0; input[i]; i++) {
        input[i] = tolower(input[i]);
    }

    // 알파벳 빈도 계산
    for (int i = 0; input[i]; i++) {
        if (isalpha(input[i])) {
            count[input[i] - 'a']++;
        }
    }

    int maxCount = 0;
    char mostFrequentChar = '?';

    // 가장 많이 등장한 알파벳 찾기
    for (int i = 0; i < 26; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentChar = 'A' + i;
        }
        else if (count[i] == maxCount) {
            mostFrequentChar = '?';
        }
    }

    // 결과 출력
    printf("%c\n", mostFrequentChar);

    return 0;
}
