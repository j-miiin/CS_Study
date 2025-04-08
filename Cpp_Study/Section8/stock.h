#ifndef  STOCK

#include <iostream>

using namespace std;

class Stock {
	// 데이터 은닉: 프로그램이 데이터에 직접 접근하지 못하도록 차단하는 것
private:
	string name;
	int shares;
	float share_val;
	double total_val;
	void set_total() { total_val = shares * share_val; }

	// 멤버 함수를 통해서만 데이터에 접근 가능
public:
	//void acquire(string, int, float);
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();
	Stock &topval(Stock&);
	Stock(string, int, float);
	Stock();	// 오버로딩으로 default 생성자를 선언
	~Stock();
};

#endif // ! STOCK
