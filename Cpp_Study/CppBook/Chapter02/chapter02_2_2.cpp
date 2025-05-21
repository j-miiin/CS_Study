#include <iostream>

using namespace std;

int main()
{
	const int num = 12;
	const int* ptr1 = &num;
	//const int& ref = *ptr1;
	const int*& ref = ptr1;

	cout << "ptr1: " << *ptr1 << endl;
	cout << "ref: " << *ref << endl;

	return 0;
}