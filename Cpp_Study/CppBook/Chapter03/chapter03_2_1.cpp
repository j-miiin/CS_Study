#include <iostream>

using namespace std;

class Calculator
{
private:
	int addCount;
	int divCount;
	int minCount;
	int mulCount;

public:
	void Init()
	{
		addCount = 0;
		divCount = 0;
		minCount = 0;
		mulCount = 0;
	}

	float Add(float f1, float f2)
	{
		addCount++;
		return f1 + f2;
	}

	float Div(float f1, float f2)
	{
		divCount++;
		return f1 / f2;
	}

	float Min(float f1, float f2)
	{
		minCount++;
		return f1 - f2;
	}

	void ShowOpCount()
	{
		cout << "µ¡¼À: " << addCount << " »¬¼À: " << minCount << " °ö¼À: " << mulCount << " ³ª´°¼À: " << divCount << endl;
	}
};

int main()
{
	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();
	return 0;
}