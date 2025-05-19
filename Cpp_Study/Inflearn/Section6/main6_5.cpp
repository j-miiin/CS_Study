#include <iostream>

using namespace std;

void countDown(int);
int func(int);

int main() {
	// 재귀호출: C++에서 함수는 자기 자신을 호출할 수 있음

	countDown(5);


	// 함수를 지시하는 포인터
	// 어떠한 함수에 함수의 주소를 매개변수로 넘겨주는 경우 유용하게 사용 가능
	/*
	1. 함수의 주소를 얻음
	2. 함수를 지시하는 포인터를 선언
	3. 함수를 지시하는 포인터를 사용하여 그 함수를 호출
	*/

	cout << func << endl;	// 함수의 주소

	int (*pf)(int);	// int형 매개변수를 갖고 int를 반환하는 함수의 포인터
	pf = func;		// pf가 함수 이름과 같은 역할

	cout << (*pf)(3) << endl;

	return 0;
}

void countDown(int n) {
	cout << "Counting..." << n << endl;
	if (n > 0)
		countDown(n - 1);
	cout << n << "번째 재귀함수" << endl;
}

int func(int n) {
	return n + 1;
}