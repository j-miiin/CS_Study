#include <iostream>

using namespace std;

int main() {
	// 공용체 (union)
	// 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음

	union MyUnion {
		int intVal;
		long longVal;
		float floatVal;
	};

	MyUnion test;
	test.intVal = 3;
	cout << test.intVal << endl;
	test.longVal = 33;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	test.floatVal = 3.3;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	cout << test.floatVal << endl;

	// 열거체 (enum)
	// 기호 상수를 만드는 것에 대한 또다른 방법

	enum spectrum { red, orange, yellow, green, blue, violet, indigo, ultraviolet };

	/*
	1. spectrum을 새로운 데이터형 이름으로 만듦
	2. red, orange, yellow.. 0에서부터 7까지 정수 값을 각각 나타내는 기호 상수로 만듦
	3. 열거자들끼리의 산술 연산은 허용되지 않음
	4. 명시적으로 열거자의 값을 지정 가능
	*/

	spectrum a = orange;
	cout << a << endl;
	
	// int형 변수에 대입하면 열거자의 값이 int로 변환되어 저장됨
	int b;
	b = blue;
	b = blue + 3;

	return 0;
}