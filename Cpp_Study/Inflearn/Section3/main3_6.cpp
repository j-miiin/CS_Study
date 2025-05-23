#include <iostream>

using namespace std;

int main() {
	// new 연산자
	/*
	어떤 데이터를 원하는지 new 연산자에게 알려주면,
	new 연산자는 그에 알맞은 크기의 메모리 블록을 찾아내고
	그 블록의 주소를 리턴
	*/

	// a, b 둘 다를 통해서 주소에 접근 가능
	int a;
	int* b = &a;

	// pointer를 통해서 주소에 접근 가능 (pointer는 데이터의 객체를 지시)
	// 메모리 제어권을 사용자에게 줌
	int* pointer = new int;

	
	// delete 연산자
	/*
	사용한 메모리를 다시 메모리 풀로 회수
	환수된 메모리는 프로그램의 다른 부분이 다시 사용
	
	new를 사용한 이후에는 delete를 반드시 사용해야 메모리 누수가 없음
	*/

	int* ps = new int;
	// 메모리 사용
	delete ps;		

	/*
	1. new로 대입하지 않은 메모리는 delete로 해제할 수 없음
	2. 같은 메모리 블록을 연달아 두 번 delete로 해제할 수 없음
	3. new[]로 메모리를 대입할 경우 delete[]로 해제
	4. 대괄호를 사용하지 않았다면 delete도 대괄호를 사용하지 않아야 함
	*/


	double* p3 = new double[3];	// double형 데이터 3개를 저장할 수 있는 공간을 대입
	p3[0] = 0.2;				// p3를 배열 이름처럼 취급
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1] is " << p3[1] << ".\n";

	p3 = p3 + 1;		// 포인터를 증가시킴

	cout << "Now p3[0] is " << p3[0] << " and ";

	cout << "p3[1] is " << p3[1] << ".\n";

	p3 = p3 - 1;		// 다시 시작 위치를 지시
	delete[] p3;		// 배열 메모리 해제
	// cin.get();
	return 0;
}