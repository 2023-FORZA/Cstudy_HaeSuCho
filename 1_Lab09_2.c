#include <iostream>
using namespace std;

int main()
{
	char* numbers; // ���� ���ڿ�
	int count; // �ִ� ����
	int result = 0; // �����

	cin >> count; // �ִ� ���� �Է�
	cin.ignore();

	numbers = new char[count]; // �޸� �Ҵ�
	cin >> numbers;
	// ���� 1 = 49 ���� 0 = 48
	// ���� ������ ���ڸ� ���������� �ٲٱ� ���ؼ� '0'�� ����.
	for (int i = 0; i < count; i++)
	{
		result += (numbers[i] - '0');
	}
	cout << result;
	delete[] numbers;
}