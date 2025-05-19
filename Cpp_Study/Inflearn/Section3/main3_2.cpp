#include <iostream>
#include <cstring>

using namespace std;

int main() {
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++programming";

	cout << "안녕하세요! 저는" << name2;
	cout << "입니다! 성함이 어떻게 되세요?\n";
	// cin >> name1;	// 공백은 인식 못함
	cin.getline(name1, Size);	// 공백 인식 (입력을 저장할 변수명, 입력의 최대 크기)
	cout << "음, " << name1 << "씨, 당신의 이름은 ";
	cout << strlen(name1) << " 자입니다만\n";
	cout << sizeof(name1) << " 바이트 크기의 배열에 저장되었습니다.\n";
	cout << "이름이 " << name1[0] << " 자로 시작하는군요.\n";
	name2[3] = '\0';
	cout << "제 이름의 처음 세 문자는 다음과 같습니다: ";
	cout << name2 << endl;


	/*
	C++에서 문자열을 다루는 방법 중 하나인 string
	1. C스타일로 string 객체를 초기화할 수 있음
	2. cin을 사용하여 string 객체에 키보드 입력을 저장할 수 있음
	3. cout을 사용하여 string 객체를 디스플레이할 수 있음
	4. 배열 표기를 사용하여 string 객체에 저장된 개별적인 문자들에 접근 가능
	5. 배열을 다른 배열에 통째로 대입 가능
	*/

	char char1[20];
	char char2[20] = "jauar";
	string str1;
	string str2 = "panda";
	// char1 = char2; (X)
	str1 = str2;

	cout << str1 << endl;

	return 0;
}