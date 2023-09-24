#include<stdio.h>

int main() {
	int number1[3] = { 0 };
	int number2[3] = { 0 };
	int temp = 0;

	for (int i = 0; i < 3; i++) {
		scanf("%1d", &number1[i]); // 각 자릿수를 따로 입력 받음
	}
	for (int i = 0; i < 3; i++) {
		scanf("%1d", &number2[i]); // 각 자릿수를 따로 입력 받음
	}

	// 세 자릿수를 뒤집는 코드
	temp = number1[0];
	number1[0] = number1[2];
	number1[2] = temp;
	temp = number2[0];
	number2[0] = number2[2];
	number2[2] = temp;

	// 뒤집힌 수를 사용하여 큰 수 비교
	int reversedNumber1 = number1[0] * 100 + number1[1] * 10 + number1[2];
	int reversedNumber2 = number2[0] * 100 + number2[1] * 10 + number2[2];

	if (reversedNumber1 > reversedNumber2) {
		printf("%d", reversedNumber1);
	}
	else {
		printf("%d", reversedNumber2);
	}

	return 0;
}
