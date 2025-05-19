#ifndef  STOCK

#include <iostream>

using namespace std;

class Stock {
	// ������ ����: ���α׷��� �����Ϳ� ���� �������� ���ϵ��� �����ϴ� ��
private:
	string name;
	int shares;
	float share_val;
	double total_val;
	void set_total() { total_val = shares * share_val; }

	// ��� �Լ��� ���ؼ��� �����Ϳ� ���� ����
public:
	//void acquire(string, int, float);
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();
	Stock &topval(Stock&);
	Stock(string, int, float);
	Stock();	// �����ε����� default �����ڸ� ����
	~Stock();
};

#endif // ! STOCK
