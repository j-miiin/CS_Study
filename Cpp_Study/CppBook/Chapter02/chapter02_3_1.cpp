#include <iostream>

using namespace std;

typedef struct __Point
{
	int xpos;
	int ypos;
} Point;

Point& PntAdder(const Point& p1, const Point& p2);

int main()
{
	Point* p1 = new Point;
	p1->xpos = 5;
	p1->ypos = 5;

	Point* p2 = new Point;
	p2->xpos = 3;
	p2->ypos = 3;

	Point& result = PntAdder(*p1, *p2);

	cout << result.xpos << ", " << result.ypos << endl;

	delete p1;
	delete p2;
	delete &result;

	return 0;
}

Point& PntAdder(const Point& p1, const Point& p2)
{
	/*Point result;
	result.xpos = p1.xpos + p2.xpos;
	result.ypos = p1.ypos + p2.ypos;

	Point& ref = result;*/

	Point* point = new Point;
	point->xpos = p1.xpos + p2.xpos;
	point->ypos = p1.xpos + p2.ypos;

	return *point;
}
