#include <stdio.h>
int main() {
	int i;
	int arr[10];
	scanf("%d", &i);
	for (int n = 0; n < i; n++) {
		for (int k = 0; k < 10; k++) {
			scanf("%d ", &arr[k]);
		}
		for (int j = 0; j < 9; j++) {
			for (int l = 0; l < 9 - j; l++) {
				if (arr[l] > arr[l + 1]) {
					int temp = arr[l];
					arr[l] = arr[l + 1];
					arr[l + 1] = temp;
				}
			}
		}
		printf("%d\n", arr[7]);
	}
}