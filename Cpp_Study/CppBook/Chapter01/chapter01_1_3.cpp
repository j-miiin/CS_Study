#include <iostream>

using namespace std;

int main()
{
	int num;

	cout << "���� �Է�: ";
	cin >> num;

	for (int i = 1; i <= 9; i++)
	{
		cout << num << " * " << i << " = " << num * i << endl;
	}

	return 0;
}