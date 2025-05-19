#include <iostream>

using namespace std;

int main()
{
	int num;

	cout << "숫자 입력: ";
	cin >> num;

	for (int i = 1; i <= 9; i++)
	{
		cout << num << " * " << i << " = " << num * i << endl;
	}

	return 0;
}