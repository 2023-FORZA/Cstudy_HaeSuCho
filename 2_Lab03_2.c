#include<stdio.h>

int main() {
	int number1[3] = { 0 };
	int number2[3] = { 0 };
	int temp = 0;

	for (int i = 0; i < 3; i++) {
		scanf("%1d", &number1[i]); // �� �ڸ����� ���� �Է� ����
	}
	for (int i = 0; i < 3; i++) {
		scanf("%1d", &number2[i]); // �� �ڸ����� ���� �Է� ����
	}

	// �� �ڸ����� ������ �ڵ�
	temp = number1[0];
	number1[0] = number1[2];
	number1[2] = temp;
	temp = number2[0];
	number2[0] = number2[2];
	number2[2] = temp;

	// ������ ���� ����Ͽ� ū �� ��
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
