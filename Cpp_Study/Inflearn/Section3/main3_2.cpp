#include <iostream>
#include <cstring>

using namespace std;

int main() {
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++programming";

	cout << "�ȳ��ϼ���! ����" << name2;
	cout << "�Դϴ�! ������ ��� �Ǽ���?\n";
	// cin >> name1;	// ������ �ν� ����
	cin.getline(name1, Size);	// ���� �ν� (�Է��� ������ ������, �Է��� �ִ� ũ��)
	cout << "��, " << name1 << "��, ����� �̸��� ";
	cout << strlen(name1) << " ���Դϴٸ�\n";
	cout << sizeof(name1) << " ����Ʈ ũ���� �迭�� ����Ǿ����ϴ�.\n";
	cout << "�̸��� " << name1[0] << " �ڷ� �����ϴ±���.\n";
	name2[3] = '\0';
	cout << "�� �̸��� ó�� �� ���ڴ� ������ �����ϴ�: ";
	cout << name2 << endl;


	/*
	C++���� ���ڿ��� �ٷ�� ��� �� �ϳ��� string
	1. C��Ÿ�Ϸ� string ��ü�� �ʱ�ȭ�� �� ����
	2. cin�� ����Ͽ� string ��ü�� Ű���� �Է��� ������ �� ����
	3. cout�� ����Ͽ� string ��ü�� ���÷����� �� ����
	4. �迭 ǥ�⸦ ����Ͽ� string ��ü�� ����� �������� ���ڵ鿡 ���� ����
	5. �迭�� �ٸ� �迭�� ��°�� ���� ����
	*/

	char char1[20];
	char char2[20] = "jauar";
	string str1;
	string str2 = "panda";
	// char1 = char2; (X)
	str1 = str2;

	cout << str1 << endl;

	return 0;
}