#include <stdio.h>
#include <string.h>

int main() {
    char word[101];  // 최대 100글자 + 널 문자
    scanf("%s", word);

    int length = strlen(word);
    int count = 0;

    for (int i = 0; i < length; ++i) {
        if (word[i] == 'c') {
            if (i + 1 < length && (word[i + 1] == '=' || word[i + 1] == '-')) {
                i += 1;
            }
        }
        else if (word[i] == 'd') {
            if (i + 2 < length && word[i + 1] == 'z' && word[i + 2] == '=') {
                i += 2;
            }
            else if (i + 1 < length && word[i + 1] == '-') {
                i += 1;
            }
        }
        else if ((word[i] == 'l' || word[i] == 'n') && i + 1 < length && word[i + 1] == 'j') {
            i += 1;
        }
        else if ((word[i] == 's' || word[i] == 'z') && i + 1 < length && word[i + 1] == '=') {
            i += 1;
        }

        count++;
    }

    printf("%d\n", count);

    return 0;
}
