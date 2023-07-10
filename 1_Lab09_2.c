#include <iostream>
using namespace std;

int main()
{
	char* numbers; // 숫자 문자열
	int count; // 최대 길이
	int result = 0; // 결과값

	cin >> count; // 최대 길이 입력
	cin.ignore();

	numbers = new char[count]; // 메모리 할당
	cin >> numbers;
	// 문자 1 = 49 문자 0 = 48
	// 따라서 문자형 숫자를 정수형으로 바꾸기 위해선 '0'을 뺀다.
	for (int i = 0; i < count; i++)
	{
		result += (numbers[i] - '0');
	}
	cout << result;
	delete[] numbers;
}