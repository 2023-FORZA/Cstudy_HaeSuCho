#include <stdio.h>

int main() {
    int pieces[5];

    // Input
    for (int i = 0; i < 5; i++) {
        scanf("%d", &pieces[i]);
    }

    while (1) {
        int swapped = 0;

        // Process
        for (int i = 0; i < 4; i++) {
            if (pieces[i] > pieces[i + 1]) {
                // Swap
                int temp = pieces[i];
                pieces[i] = pieces[i + 1];
                pieces[i + 1] = temp;

                // Output the current order
                for (int j = 0; j < 5; j++) {
                    printf("%d ", pieces[j]);
                }
                printf("\n");

                swapped = 1;
            }
        }

        // Check if the order is 1, 2, 3, 4, 5
        if (!swapped) {
            break;
        }
    }

    return 0;
}
