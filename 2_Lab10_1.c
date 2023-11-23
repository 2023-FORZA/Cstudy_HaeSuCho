#include <stdio.h>

int main() {
    // Set up : Input
    int N;
    scanf("%d", &N);

    while (N--) {
        int X;
        scanf("%d", &X);

        // Process
        for (int i = 10; i < X; i *= 10) {
            /* i ���� ũ�ٸ� (i/10)�� �ڸ����� �ݿø��ϰ� ... */
            if (X % i / (i / 10) >= 5) {
                X = (X / i + 1) * i;
            }
            else {
                X = X / i * i;
            }
        }

        // Control : Output
        printf("%d\n", X);
    }

    return 0;
}
