#include <iostream>

using namespace std;

int main()
{
	int num;

	while (true)
	{
		cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		cin >> num;

		if (num == -1)
		{
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		}

		int pay = 50 + num * 0.12f;
		cout << "�̹� �� �޿�: " << pay << endl;
	}

	return 0;
}