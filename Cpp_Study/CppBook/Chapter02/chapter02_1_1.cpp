#include <iostream>

using namespace std;

void IncreaseNum(int& num);
void ReverseNum(int& num);

int main()
{
	int num = 5;

	IncreaseNum(num);
	cout << num << endl;

	ReverseNum(num);
	cout << num << endl;

	return 0;
}

void IncreaseNum(int& num)
{
	num++;
}

void ReverseNum(int& num)
{
	num *= -1;
}