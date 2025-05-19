#include <iostream>

using namespace std;

int main()
{
	int num;

	while (true)
	{
		cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		cin >> num;

		if (num == -1)
		{
			cout << "프로그램을 종료합니다." << endl;
			break;
		}

		int pay = 50 + num * 0.12f;
		cout << "이번 달 급여: " << pay << endl;
	}

	return 0;
}