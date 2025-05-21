#include <iostream>

using namespace std;

class Printer
{
private:
	string str;

public:
	void SetString(string s)
	{
		str = s;
	}

	void ShowString()
	{
		cout << str << endl;
	}
};

int main()
{
	Printer pnt;
	pnt.SetString("Hello World!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();

	return 0;
}