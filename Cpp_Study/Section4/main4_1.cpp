#include <iostream>

using namespace std;

int main() {
	// 반복문이란?
	char a[10] = { 'a', 'b','c','d','e' };

	for (int i = 0; i < 5; i++) {
		cout << i << "번째입니다." << endl;
	}

	for (int i = 5; i > 0; i--) {
		cout << i << "번째입니다." << endl;
	}

	/*
	규칙
	1. 반복문에 사용할 카운터의 값을 초기화 (위에서는 i)
	2. 반복문을 진행할 것인지 '조건 검사'
	3. 반복문 몸체를 수행
	4. 카운터의 값을 변화
	*/

	return 0;
}