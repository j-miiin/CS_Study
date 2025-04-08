/*
헤더 파일
1. 함수 원형
2. #define이나 const를 사용하는 기호 상수
3. 구조체 선언
4. 클래스 선언
5. 템플릿 선언
6. 인라인 함수
*/

// 헤더 파일을 여러 파일에 포함시킬 때는 단 한 번만 포함시켜야 함
// 만약 중복으로 포함시켰을 때를 대비해서 if not define 구문을 제공

#ifndef  STRUCT

#include <iostream>

using namespace std;

struct MyStruct {
	string name;
	int age;
};

void display(MyStruct&);

#endif	// !STRUCT
