#include <iostream>

using namespace std;

void countDown(int);
int func(int);

int main() {
	// ���ȣ��: C++���� �Լ��� �ڱ� �ڽ��� ȣ���� �� ����

	countDown(5);


	// �Լ��� �����ϴ� ������
	// ��� �Լ��� �Լ��� �ּҸ� �Ű������� �Ѱ��ִ� ��� �����ϰ� ��� ����
	/*
	1. �Լ��� �ּҸ� ����
	2. �Լ��� �����ϴ� �����͸� ����
	3. �Լ��� �����ϴ� �����͸� ����Ͽ� �� �Լ��� ȣ��
	*/

	cout << func << endl;	// �Լ��� �ּ�

	int (*pf)(int);	// int�� �Ű������� ���� int�� ��ȯ�ϴ� �Լ��� ������
	pf = func;		// pf�� �Լ� �̸��� ���� ����

	cout << (*pf)(3) << endl;

	return 0;
}

void countDown(int n) {
	cout << "Counting..." << n << endl;
	if (n > 0)
		countDown(n - 1);
	cout << n << "��° ����Լ�" << endl;
}

int func(int n) {
	return n + 1;
}