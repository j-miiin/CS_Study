#include <iostream>

using namespace std;

int main() 
{
	int sum = 0;
	int num;

	for (int i = 1; i <= 5; i++)
	{
		cout << i << "번째 정수 입력: ";
		cin >> num;

		sum += num;
	}

	cout << "합계: " << sum << endl;
	return 0;
}