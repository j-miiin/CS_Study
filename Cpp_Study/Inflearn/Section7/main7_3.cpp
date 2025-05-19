#include <iostream>

using namespace std;

int sum(int, int);
float sum(float, float);

int main() {
	// 함수의 오버로딩
	// 여러 개의 함수를 같은 이름으로 연결

	cout << "두 정수를 입력\n";
	int a, b;
	cin >> a >> b;
	cout << "두 정수의 합은 " << sum(a, b) << endl;
	cout << "두 실수를 입력\n";

	float c, d;
	cin >> c >> d;
	cout << "두 실수의 합은 " << sum(c, d) << endl;

	/*
	오버로딩을 사용할 수 없는 경우
	1. 함수의 리턴형만 다른 경우
	2. 함수를 사용할 때, 두 개 이상의 함수에 대응되는 경우
	*/

	return 0;
}

int sum(int a, int b) {
	return a + b;
}

float sum(float a, float b) {
	return a + b;
}