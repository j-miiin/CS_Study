#include <iostream>

using namespace std;

int sum(int, int);
float sum(float, float);

int main() {
	// �Լ��� �����ε�
	// ���� ���� �Լ��� ���� �̸����� ����

	cout << "�� ������ �Է�\n";
	int a, b;
	cin >> a >> b;
	cout << "�� ������ ���� " << sum(a, b) << endl;
	cout << "�� �Ǽ��� �Է�\n";

	float c, d;
	cin >> c >> d;
	cout << "�� �Ǽ��� ���� " << sum(c, d) << endl;

	/*
	�����ε��� ����� �� ���� ���
	1. �Լ��� �������� �ٸ� ���
	2. �Լ��� ����� ��, �� �� �̻��� �Լ��� �����Ǵ� ���
	*/

	return 0;
}

int sum(int a, int b) {
	return a + b;
}

float sum(float a, float b) {
	return a + b;
}