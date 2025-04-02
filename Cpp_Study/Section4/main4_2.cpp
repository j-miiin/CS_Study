#include <iostream>

using namespace std;

int main() {
	// 증가 연산자, 감소 연산자
	int a = 10;
	int b = 10;

	// ++가 앞에 붙으면 변수의 값을 판단한 뒤 증가시키고
	// 뒤에 붙으면 변수를 증가시키고 값을 판단
	cout << "a는 " << a << ", b는 " << b << endl;
	cout << "a++는 " << a++ << endl;
	cout << "++b는 " << ++b << endl;


	// 관계 표현식
	/*
	< : 작다
	<= : 작거나 같다
	> : 크다
	>= : 크거나 같다
	== : 같다
	!= : 같지 않다
	*/
	return 0;
}