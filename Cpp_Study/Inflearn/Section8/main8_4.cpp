#include <iostream>
#include "stock.h"

int main() {
	Stock s1("A", 10, 1000);
	Stock s2("B", 20, 1200);

	s1.show();
	s2.show();

	cout << "A�� B �� share_val�� ū ��ü��\n";
	s1.topval(s2).show();


	// Ŭ���� ��ü �迭
	// Ŭ������ �迭�� �����ϱ� ���ؼ��� default �����ڰ� �ݵ�� �ʿ���
	Stock s[4] = {
		Stock("A", 10, 1000),
		Stock("B", 20, 1200),
		Stock("C", 20, 1300),
		Stock("D", 20, 1400)
	};

	s[0].show();

	/*Stock first = s[0];
	for (int i = 1; i < 4; i++)
		first = first.topval(s[i]);

	first.show();*/

	Stock *first = &s[0];
	for (int i = 1; i < 4; i++)
		first = &first->topval(s[i]);

	first->show();

	return 0;
}