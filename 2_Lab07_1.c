#include <stdio.h>
int main() {
	long long int sum = 0, s = 0, n = 0;
	scanf("%lld", &s);
	while (1) {
		n++;
		sum += n;
		if (sum > s) {
			n--;
			break;
		}
	}
	printf("%lld", n);
}