#include <stdio.h>

int main()
{
    int a_divisor = 0; //����� �Է¹��� ����
    long long max = 0, min = 1000001; //�Է¹��� ����� �ִ밪�� �ּҰ��� ���� ������ ����

    int num_of_divisors; //����� ������ ������ ����
    scanf("%d", &num_of_divisors);

    for (int i = 0; i < num_of_divisors; i++) { //����� ������ŭ ����� �Է¹����� 
        scanf("%d", &a_divisor);

        if (a_divisor > max)                 //���� �ִ밪�� �ּҰ��� ã�´�.
            max = a_divisor;
        if (a_divisor < min)
            min = a_divisor;
    }

    printf("%lld\n", max * min);

    return 0;
}