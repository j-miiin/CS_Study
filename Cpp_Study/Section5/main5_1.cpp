#include <iostream>

using namespace std;

int main() {
	// 분기 구문: if구문
	if (true)
		cout << "조건이 참입니다.";

	if (false)
		cout << "조건이 거짓입니다.";

	if (true) {
		cout << "조건이 ";
		cout << "참입니다." << endl;
	}
	else {
		cout << "조건이 ";
		cout << "거짓입니다." << endl;
	}

	if (false) {
		cout << "#1";
	}
	else {
		if (true) {
			cout << "#2";
		}
		else {
			cout << "#1";
		}
	}

	if (false) {
		cout << "#1";
	}
	else if (true) {
		cout << "#2";
	}
	else {
		cout << "#1";
	}

	cout << "프로그램이 종료되었습니다.";

	return 0;
}