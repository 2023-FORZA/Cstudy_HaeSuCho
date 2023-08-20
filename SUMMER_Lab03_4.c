#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int m = 0; m < n; m++)
    {
        int t;
        scanf("%d", &t);

        if (t >= 3)
        {
            for (int i = 0; i < t; i++)
            {
                printf("#");
            }
            printf("\n");

            for (int l = 0; l < t - 2; l++)
            {
                printf("#");
                for (int k = 0; k < t - 2; k++)  // 수정: k 범위 수정
                {
                    printf("J");
                }
                printf("#\n");
            }

            for (int i = 0; i < t; i++)
            {
                printf("#");
            }
            printf("\n\n");
        }
        else if (t == 1)
            printf("#\n\n");
        else if (t == 2)
            printf("##\n##\n\n");
    }

    return 0;
}
