#include <stdio.h>
int main() {
	int N;
	scanf("%d", &N);
	if (N % 2 == 1)
		printf("SK\n");
	else
		printf("CY\n");
	return 0;
}