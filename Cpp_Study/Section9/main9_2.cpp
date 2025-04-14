#include <iostream>
#include "time.h"

using namespace std;

int main() {
	// 이항 연산자: 두 개의 피연산자를 요구하는 연산자
	// friend: 멤버 함수는 아니지만 멤버 변수에 접근할 수 있는 함수

	/*Time a, b;
	a = b * 3; -> 연산자 오버로딩으로는 해결할 수 없음 */

	Time t1(1, 20);
	Time t2;

	//t2 = 3 * t1; -> friend 함수를 통해서 연산 
	t2 = t1 * 3;
	t2.show();

	return 0;
}