#include <iostream>

using namespace std;

void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);

int main() {
	// 참조(reference)란?
	// 미리 정의된 변수의 실제 이름 대신 사용할 수 있는 대용 이름
	// 함수의 매개변수에 사용
	// 참조를 사용하면 함수에서 복사본 대신 원본을 사용

	int a;
	int& b = a;		

	int wallet1 = 100;
	int wallet2 = 200;

	cout << "최초 상태" << endl;
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << "참조로 값 교환\n";
	swapA(wallet1, wallet2);
	cout << "참조 교환 이후\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << "포인터로 값 교환\n";
	swapB(&wallet1, &wallet2);
	cout << "참조 교환 이후\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << "값으로 값 교환\n";
	swapC(wallet1, wallet2);
	cout << "참조 교환 이후\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	return 0;
}

// 참조로 전달
void swapA(int& a, int& b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}

// 포인터로 전달
void swapB(int* a, int* b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// 값으로 전달
void swapC(int a, int b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}
