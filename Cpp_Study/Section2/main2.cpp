#include <iostream>
#include <climits>

using namespace std;

int main() {

	// 정수형: 소수부가 없는 수
	// 음의 정수, 0, 양의 정수
	// short, int, long, long long

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int는 " << sizeof n_int << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_int << " 이다." << endl;
	
	cout << "short은 " << sizeof n_short << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_short << " 이다." << endl;
	
	cout << "long은 " << sizeof n_long << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_long << " 이다." << endl;
	
	cout << "long long은 " << sizeof n_llong << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_llong << " 이다." << endl;

	// 양수만 표현
	unsigned int a;
	unsigned short b;
	unsigned long c;
	unsigned long long d;


	// 실수형: 소수부가 있는 수

	float f = 3.14;
	int i = 3.14;

	cout << f << " " << i << endl;

	return 0;
}