#include <iostream>

using namespace std;

int main() 
{
	int sum = 0;
	int num;

	for (int i = 1; i <= 5; i++)
	{
		cout << i << "��° ���� �Է�: ";
		cin >> num;

		sum += num;
	}

	cout << "�հ�: " << sum << endl;
	return 0;
}