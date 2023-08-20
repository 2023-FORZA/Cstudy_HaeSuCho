#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int totalWrappedCandies = 0;
        for (int i = 0; i < n; ++i) {
            int candy;
            scanf("%d", &candy);

            totalWrappedCandies += candy / k;  // »çÅÁÀ» k·Î ³ª´« ¸òÀ» ´©Àû
        }

        printf("%d\n", totalWrappedCandies);
    }

    return 0;
}
