#include <stdio.h>
#include <stdlib.h>

int calculateScore(char* quizResult) {
    int score = 0;
    int consecutiveO = 0;

    for (int i = 0; quizResult[i] != '\0'; i++) {
        if (quizResult[i] == 'O') {
            consecutiveO++;
            score += consecutiveO;
        }
        else {
            consecutiveO = 0;
        }
    }

    return score;
}

int main() {
    int numTestCases;
    scanf("%d", &numTestCases);

    char** testCases = (char**)malloc(numTestCases * sizeof(char*));
    for (int i = 0; i < numTestCases; i++) {
        testCases[i] = (char*)malloc(81 * sizeof(char));
        scanf("%s", testCases[i]);
    }

    for (int i = 0; i < numTestCases; i++) {
        int totalScore = calculateScore(testCases[i]);
        printf("%d\n", totalScore);
        free(testCases[i]);
    }
    free(testCases);

    return 0;
}