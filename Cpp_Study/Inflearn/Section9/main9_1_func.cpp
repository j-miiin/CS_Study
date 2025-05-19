#include "time.h"

using namespace std;

Time::Time() {
	hours = mins = 0;
}

Time::Time(int h, int m) {
	hours = h;
	mins = m;
}

void Time::addHours(int h) {
	hours += h;
}

void Time::addMins(int m) {
	mins += m;
	hours += mins / 60;
	mins %= 60;
}

Time Time::operator+(Time& t) {
	Time sum;
	sum.mins = mins + t.mins;
	sum.hours = hours + t.hours;
	sum.hours += sum.mins / 60;
	sum.mins %= 60;
	return sum;
}

Time Time::operator*(int n) {
	Time result;
	long resultMin = hours * n * 60 + mins * n;
	result.hours = resultMin / 60;
	result.mins = resultMin % 60;
	return result;
}

void Time::show() {
	cout << "�ð�: " << hours << endl;
	cout << "��: " << mins << endl;
}

Time::~Time() {

}

// << �����ڴ� �������� ostream�� ��ü�� �䱸�ϹǷ� �������� ostream�� ������
std::ostream& operator<<(std::ostream& os, Time& t) {
	os << t.hours << "�ð� " << t.mins << "��";
	return os;
}

NewTime::NewTime() : Time() {
	day = 0;
}

NewTime::NewTime(int h, int m, int d) : Time(h, m) {
	day = d;
}

void NewTime::show() {
	cout << "��: " << day << endl;
	cout << "�ð�: " << getHour() << endl;
	cout << "��: " << getMins() << endl;
}
