#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#define SIZE 20

using namespace std;

struct MyStruct {
	char name[20];
	int age;
};

int main() {
	char animal[SIZE];
	char* ps;

	cout << "���� �̸��� �Է��Ͻʽÿ�\n";
	cin >> animal;

	// new�� ���� ����ڰ� �� ���ڸ� �Է��ϵ� ����� ������ ps���� �Ҵ�
	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);

	cout << "�Է��Ͻ� ���� �̸��� �����Ͽ����ϴ�." << endl;
	cout << "�Է��Ͻ� ���� �̸��� " << animal << "�̰�, �� �ּҴ� " << (int*)animal << " �Դϴ�." << endl;
	cout << "����� ���� �̸��� " << ps << "�̰�, �� �ּҴ� " << (int*)ps << " �Դϴ�." << endl;


	// ���� ����ü ����
	// temp* ps = new temp;
	// ���� ����ü�� ��� �����ڴ� '.'�� �ƴ� '->'

	MyStruct* temp = new MyStruct;

	cout << "����� �̸��� �Է��Ͻʽÿ�\n";
	cin >> temp->name;

	cout << "����� ���̸� �Է��Ͻʽÿ�\n";
	cin >> (*temp).age;

	cout << "�ȳ��ϼ���! " << temp->name << "��!\n";
	cout << "����� " << temp->age << "�� �̱���!";

	return 0;
}