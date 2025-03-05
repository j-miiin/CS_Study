#include <iostream>

using namespace std;

int main() {
	// char: 작은 문자형

	int a = 77;
	char b = a;
	cout << b << endl;

	// M이 출력됨 -> 아스키 코드 상에서 M이 77에 해당

	// 작은 따옴표로 표현하고자 하는 문자를 감싸서 선언
	char c = 'a';
	
	/*
	null 문자: 문자열을 출력할 때 어디까지가 문자인지 알려주는 역할
	문자열을 출력하다가 '\0'(null 문자)를 만나면 출력을 종료
	큰 따옴표로 감싸면 명시적으로 null 문자를 포함시켜줌 -> string
	*/


	// bool: 0(false) 혹은 1(true)만 표현

	bool d = 0;
	bool e = 1;
	bool f = 10;

	cout << d << " " << e << " " << f << endl;

	return 0;
}