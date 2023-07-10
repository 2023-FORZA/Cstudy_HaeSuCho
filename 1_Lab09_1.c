#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculateScore(char* quiz) {
    int score = 0;
    int consecutive = 0;
    int length = strlen(quiz);

    for (int i = 0; i < length; i++) {
        if (quiz[i] == 'O') {
            consecutive++;
            score += consecutive;
        }
        else {
            consecutive = 0;
        }
    }

    return score;
}

int main() {
    int numTests;
    scanf("%d", &numTests);
    getchar(); // 개행 문자 처리

    while (numTests--) {
        char* quiz = NULL;
        size_t bufferSize = 0;
        ssize_t length = getline(&quiz, &bufferSize, stdin);

        // 개행 문자 제거
        if (length > 0 && quiz[length - 1] == '\n') {
            quiz[length - 1] = '\0';
        }

        int score = calculateScore(quiz);
        printf("%d\n", score);

        free(quiz);
    }

    return 0;
}
