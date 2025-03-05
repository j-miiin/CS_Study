#include <iostream>

using namespace std;

int main() {
	// 1. 변수란? 변할 수 있는 수
	// cf) 상수: 변할 수 없는 수

	/*
	1. 변수의 자료형
	2. 변수의 이름
	3.변수가 어디에 저장되는가(메모리 영역)?
	*/	

	/*
	1. 숫자로 시작할 수 없다.
	2. C++에서 사용하고 있는 키워드는 사용할 수 없다.
	3. white space를 사용할 수 없다.
	*/

	// int 77aaa; (X)
	// int return; (X)
	// int aaa a; (X)

	int a;		// 선언
	a = 7;		// 대입

	int b = 3;	// 초기화

	a = 5;
	b = 10;

	// 변수는 사용되기 이전에 정의되어야 한다.

	/*
	{
		int b;
		{
			int a;
			b = 3;
		}
		a = 5;
	}

	변수 a가 선언된 블록 안에서 벗어나서 사용 X
	*/

	cout << "a = " << a << ", b = " << b << endl;

	return 0;
}