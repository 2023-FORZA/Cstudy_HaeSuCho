#include <stdio.h>

// ���� ������ �Լ�
int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

// �¿� ��Ī���� Ȯ���ϴ� �Լ�
int isSymmetric(int num) {
    int reversed = reverseNumber(num);
    return num + reversed == reverseNumber(num + reversed);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        // ��� ���
        printf("%s\n", isSymmetric(N) ? "YES" : "NO");
    }

    return 0;
}
