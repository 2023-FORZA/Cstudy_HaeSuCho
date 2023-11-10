
#include <stdio.h>

	// 최대공약수(Greatest Common Divisor) 구하기
	long long GCD(long long a, long long b)
	{
		if (b == 0)
		{
			return a;
		}
		else
		{
			return GCD(b, a % b);
		}
	}

	// 최소공배수(Least Common Multiple) 구하기
	long long LCM(long long a, long long b)
	{
		return (a * b) / GCD(a, b);
	}

	int main(void)
	{
		long long a, b;
		scanf("%lld %lld", &a, &b);

		printf("%lld", LCM(a, b));
		return 0;
	}