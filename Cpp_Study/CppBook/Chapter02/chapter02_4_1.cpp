#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char str1[] = "ABC 123 ";
	char str2[] = "DEF 456 ";
	char str3[50];

	cout << strlen(str1) << endl;
	cout << strlen(str2) << endl;
	strcpy_s(str3, str1);
	strcpy_s(str3, str2);
	cout << str3 << endl;

	if (strcmp(str1, str2) == 0)
		cout << "���ڿ� ����" << endl;
	else
		cout << "���ڿ� �ٸ�" << endl;

	return 0;
}