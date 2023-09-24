#include <stdio.h>
int main() {
	int N;
	int seat[100] = { 0 };
	int kick = 0;
	int tmp;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &tmp);

		if (seat[tmp - 1] == 0) { 
			seat[tmp - 1] = 1;
		}
		else {
			kick++;
		}
	}
	printf("%d", kick);
	return 0;
}
