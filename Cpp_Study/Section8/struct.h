/*
��� ����
1. �Լ� ����
2. #define�̳� const�� ����ϴ� ��ȣ ���
3. ����ü ����
4. Ŭ���� ����
5. ���ø� ����
6. �ζ��� �Լ�
*/

// ��� ������ ���� ���Ͽ� ���Խ�ų ���� �� �� ���� ���Խ��Ѿ� ��
// ���� �ߺ����� ���Խ����� ���� ����ؼ� if not define ������ ����

#ifndef  STRUCT

#include <iostream>

using namespace std;

struct MyStruct {
	string name;
	int age;
};

void display(MyStruct&);

#endif	// !STRUCT
