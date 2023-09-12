#include <stdio.h>
int main() {
	int N;
	scanf("%d", &N);
	int count[10001];
	for (int i = 0; i < 10001; i++) {
		count[i] = 0;
	}
	for (int i = 0; i < N; i++) {
		int number;
		scanf("%d", &number);
		count[number]++;
	}
	for (int i = 0; i < 10001; i++) {
		for(int j=0; j<count[i];j++) {
			printf("%d \n", i);
		}

	}

}