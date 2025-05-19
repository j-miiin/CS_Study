#include <iostream>
#include "time.h"

using namespace std;

int main() {
	// << 는 friend를 통해서 오버로딩 가능

	Time t1(3, 45);

	cout << t1;

	return 0;
}