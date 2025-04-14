#include <iostream>
#include "time.h"

using namespace std;

int main() {

	// 다형: 함수가 처한 상황에 따라 동작을 달리하는 것

	Time temp1(30, 2);
	NewTime temp2(3, 30, 2);

	temp1.show();
	temp2.show();

	return 0;
}