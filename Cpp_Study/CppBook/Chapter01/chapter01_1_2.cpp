#include <iostream>

using namespace std;

int main()
{
	char name[20];
	char phoneNumber[20];

	cout << "이름: ";
	cin >> name;
	cout << "전화번호: ";
	cin >> phoneNumber;

	cout << "이름: " << name << ", 전화번호: " << phoneNumber << endl;

	return 0;
}