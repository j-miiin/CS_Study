#include <iostream>

using namespace std;

int main() {
	// 구조체: 다른 데이터형이 허용되는 데이터의 집합
	// cf) 배열: 같은 데이터형의 집합

	// 축구선수 데이터 -> 하나의 집합으로 관리하면 편리해짐
	// string name;
	// string position;
	// float height;
	// float weight;

	struct MyStruct 
	{
		string name;
		string position;
		float height;
		float weight;
	};
	
	// 구조체 선언 시 A라는 구조체가 만들어짐
	// struct MyStruct
	// {
	// 	  string name;
	// 	  string position;
	// 	  float height;
	// 	  float weight;
	// } A;

	MyStruct A;
	// dot 연산자 사용
	A.name = "Son";
	A.position = "Striker";
	A.height = 183.0;
	A.weight = 77.0;

	// 초기화
	MyStruct B = {
		"Son",
		"Striker",
		183.0,
		77.0
	};

	// 빈 값이 저장됨
	// MyStruct B = {
	// 
	// };

	MyStruct C[2] = {
		{ "A", "A", 1.0, 1.0 },
		{ "B", "B", 2.0, 2.0 }
	};

	cout << C[0].height << endl;

	return 0;
}