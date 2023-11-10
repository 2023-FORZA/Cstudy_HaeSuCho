#include <stdio.h>
#include <math.h>
int main() {
	int mushroom[10] = { 0, };
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &mushroom[i]);
	}
	for (int i = 0; i < 10; i++) {
		if (abs(sum + mushroom[i] - 100) <= abs(sum - 100)) {
			sum += mushroom[i];
		}
		else {
			break;
		}
	}
	printf("%d", sum);
	return 0;
}