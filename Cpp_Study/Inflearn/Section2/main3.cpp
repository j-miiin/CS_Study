#include <iostream>

using namespace std;

int main() {
	// char: ���� ������

	int a = 77;
	char b = a;
	cout << b << endl;

	// M�� ��µ� -> �ƽ�Ű �ڵ� �󿡼� M�� 77�� �ش�

	// ���� ����ǥ�� ǥ���ϰ��� �ϴ� ���ڸ� ���μ� ����
	char c = 'a';
	
	/*
	null ����: ���ڿ��� ����� �� �������� �������� �˷��ִ� ����
	���ڿ��� ����ϴٰ� '\0'(null ����)�� ������ ����� ����
	ū ����ǥ�� ���θ� ��������� null ���ڸ� ���Խ����� -> string
	*/


	// bool: 0(false) Ȥ�� 1(true)�� ǥ��

	bool d = 0;
	bool e = 1;
	bool f = 10;

	cout << d << " " << e << " " << f << endl;

	return 0;
}