#include <iostream>

using namespace std;

int main() {
	/*
	산술연산자 
	+: 두 피연산자의 합
	-: 두 피연산자의 차
	*: 두 피연산자의 곱
	/: 첫 번째 피연산자를 두 번째 피연산자로 나눈 몫
	%: 첫 번째 피연산자를 두 번째 피연산자로 나눈 나머지(실수에서는 사용 불가)
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

	// C++가 복잡한 산술 연산을 수행할 수 있는가? -> 있다
	// 내부적으로 정의된 결합 규칙을 따라서 계산됨

	int multiple = a + b * c;

	cout << multiple << endl;

	// 나눗셈 연산자는 두 피연산자 중 하나라도 실수이면 결과값이 실수가 됨

	float ff = 9.0;
	int ii = 5;

	cout << ff / ii << endl;


	// auto
	// 초기화된 값을 보고 변수형을 추론

	auto n = 100;		// int
	auto x = 1.5;		// float
	auto y = 1.3e12L;	// long long

	// auto를 자주 사용하는 것은 좋은 습관은 아님
	// 복잡한 변수형을 다룰 때는 유용

	// 3개의 float형 변수
	auto x = 0.0;	// float
	float y = 0;	// float
	auto z = 0;		// int

	return 0;
}