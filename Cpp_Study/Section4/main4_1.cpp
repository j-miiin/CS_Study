#include <iostream>

using namespace std;

int main() {
	// �ݺ����̶�?
	char a[10] = { 'a', 'b','c','d','e' };

	for (int i = 0; i < 5; i++) {
		cout << i << "��°�Դϴ�." << endl;
	}

	for (int i = 5; i > 0; i--) {
		cout << i << "��°�Դϴ�." << endl;
	}

	/*
	��Ģ
	1. �ݺ����� ����� ī������ ���� �ʱ�ȭ (�������� i)
	2. �ݺ����� ������ ������ '���� �˻�'
	3. �ݺ��� ��ü�� ����
	4. ī������ ���� ��ȭ
	*/

	return 0;
}