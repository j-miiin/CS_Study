#include <iostream>
#include "time.h"

using namespace std;

int main() {
	// ���� ������: �� ���� �ǿ����ڸ� �䱸�ϴ� ������
	// friend: ��� �Լ��� �ƴ����� ��� ������ ������ �� �ִ� �Լ�

	/*Time a, b;
	a = b * 3; -> ������ �����ε����δ� �ذ��� �� ���� */

	Time t1(1, 20);
	Time t2;

	//t2 = 3 * t1; -> friend �Լ��� ���ؼ� ���� 
	t2 = t1 * 3;
	t2.show();

	return 0;
}