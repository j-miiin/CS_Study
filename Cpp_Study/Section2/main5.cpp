#include <iostream>

using namespace std;

int main() {
	/*
	��������� 
	+: �� �ǿ������� ��
	-: �� �ǿ������� ��
	*: �� �ǿ������� ��
	/: ù ��° �ǿ����ڸ� �� ��° �ǿ����ڷ� ���� ��
	%: ù ��° �ǿ����ڸ� �� ��° �ǿ����ڷ� ���� ������(�Ǽ������� ��� �Ұ�)
	*/

	int a = 10;
	int b = 3;

	int c = a + b;
	int d = a - b;
	int e = a * b;
	int f = a / b;
	int g = a % b;

	cout << "c: " << c << endl;
	cout << "d: " << d << endl;
	cout << "e: " << e << endl;
	cout << "f: " << f << endl;
	cout << "g: " << g << endl;

	// C++�� ������ ��� ������ ������ �� �ִ°�? -> �ִ�
	// ���������� ���ǵ� ���� ��Ģ�� ���� ����

	int multiple = a + b * c;

	cout << multiple << endl;

	// ������ �����ڴ� �� �ǿ����� �� �ϳ��� �Ǽ��̸� ������� �Ǽ��� ��

	float ff = 9.0;
	int ii = 5;

	cout << ff / ii << endl;


	// auto
	// �ʱ�ȭ�� ���� ���� �������� �߷�

	auto n = 100;		// int
	auto x = 1.5;		// float
	auto y = 1.3e12L;	// long long

	// auto�� ���� ����ϴ� ���� ���� ������ �ƴ�
	// ������ �������� �ٷ� ���� ����

	// 3���� float�� ����
	auto x = 0.0;	// float
	float y = 0;	// float
	auto z = 0;		// int

	return 0;
}