#include <iostream>
// #define PIE 3.1415926535 -> C���� ����� �����ϴ� ���

using namespace std;

int main() {
	// ���� ���̸� ���ϴ� ���α׷�
	// ������ * ������ * ����

	const float PIE = 3.1415926535;

	int r = 3;
	float s = r * r * PIE;

	/*
	���
	1. �ٲ� �ʿ䰡 ���� ��
	2. �ٲ��� �ȵǴ� ��
	*/

	cout << s << endl;


	/*
	�������� ��ȯ
	1. Ư�� ���������� ������ �ٸ� ���������� ���� �������� ��
	2. ���Ŀ� ���������� ȥ���Ͽ� ������� ��
	3. �Լ��� �Ű������� ������ ��
	*/

	int a = 3.141592;
	cout << a << endl;	// 3���� ���

	// ���������� �������� ��ȯ
	// typeName(a) or (typeName)a

	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl;

	// C++
	// static_cast<typeName> -> ���� �����ϰ� ����
	cout << static_cast<int>(ch) << endl;

	return 0;
}