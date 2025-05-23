#include <iostream>

using namespace std;

int main() {
	/*
	C++는 복합데이터형을 제공
	>> 사용자 정의대로 새로운 데이터형을 만들 수 있음
	복합데이터형: 기본 정수형과 부동소수점형의 조합
	*/

	/*
	배열(array): 같은 데이터형의 집합
	typeName arrayName[arraySize];
	*/

	//short month[12];	// 선언
	short month[12] = { 1, 2, 3 };	// 초기화

	cout << month[0] << endl;	// 배열의 출력

	/*
	배열의 규칙
	1. 배열 원소에 대입할 값들을 콤마로 구분하여 중괄호로 묶어 선언
	2. 초기화를 선언 이후 나중에 할 수는 없음
	3. 배열을 다른 배열에 통째로 대입할 수 없음
		short month[5] = { ... };
		short year[12] = { ... };
		year = month;  (X)
	4. 초기화 값의 개수를 배열 원소의 개수보다 모자라게 제공 가능
	5. 배열을 부분적으로 초기화하면 나머지 원소들은 모두 0으로 설정됨
	6. 배열을 초기화할 때 대괄호 속을 비워두면 컴파일러가 초기화 값의 개수를 헤아려 배열 원소 개수를 저장
		short month[] = { 1, 2, 3 };	-> month의 사이즈는 3이 됨
	*/


	// 문자열: 문자의 열
	// char a[5] = { 'H', 'e', 'l','l','o' }; -> null 문자가 없어서 뒤에 이상한 문자가 출력됨
	char a[6] = { 'H', 'e', 'l','l','o', '\0'};

	cout << a << endl;

	char b[] = "Hello";		// 쌍따옴표이므로 null 문자가 포함됨

	cout << b << endl;

	return 0;
}