#include <iostream>

using namespace std;

int main() {
	// ����ü: �ٸ� ���������� ���Ǵ� �������� ����
	// cf) �迭: ���� ���������� ����

	// �౸���� ������ -> �ϳ��� �������� �����ϸ� ������
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
	
	// ����ü ���� �� A��� ����ü�� �������
	// struct MyStruct
	// {
	// 	  string name;
	// 	  string position;
	// 	  float height;
	// 	  float weight;
	// } A;

	MyStruct A;
	// dot ������ ���
	A.name = "Son";
	A.position = "Striker";
	A.height = 183.0;
	A.weight = 77.0;

	// �ʱ�ȭ
	MyStruct B = {
		"Son",
		"Striker",
		183.0,
		77.0
	};

	// �� ���� �����
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