#include <iostream>
#ifndef TIMEH
#define TIMEH

class Time {
private:
	int hours;
	int mins;

public:
	Time();
	Time(int, int);
	void addHours(int);
	void addMins(int);
	Time operator+(Time&);
	Time operator*(int);
	virtual void show();
	/*
	1. ���� Ŭ�������� ���� �޼��带 �����ϸ� 
	�� �Լ��� ���� Ŭ���� �� �Ļ��Ǵ� Ŭ���������� ��� ������ ��
	2. ��ü�� ���� ������ ����ϰų� ��ü�� �����ϴ� �����͸� ����Ͽ� ���� �޼��尡 ȣ��Ǹ�, 
	������ �����͸� ���� ���ǵ� �޼��带 ������� �ʰ� ��ü���� ���� ���ǵ� �޼��带 ��� -> ���� ����
	3. ����� ���� ���� Ŭ������ ����� Ŭ������ ������ ��,
	�Ļ� Ŭ�������� �ٽ� �����ؾ� �Ǵ� Ŭ���� �޼������ ���� �Լ��� �����ؾ� ��
	*/
	virtual ~Time();	// �׻� Time ��ü�� ���� �ı��ڸ� ȣ��ǹǷ� �ı��ڵ� virtual�� �����ؾ� ��
	int getHour() { return hours; }
	int getMins() { return mins; }
	friend Time operator*(int n, Time& t) {
		return t * n;	// ����Լ� operator*�� ȣ���ϰ� ��
	}
	friend std::ostream& operator<<(std::ostream&, Time&);
};

class NewTime : public Time {
	/*
	1. �Ļ� Ŭ�������� ��ü �ȿ��� ���� Ŭ�������� ������ ������� �����
	2. �Ļ� Ŭ�������� ��ü�� ���� Ŭ�������� �޼������ ����� �� ����
	3. �Ļ� Ŭ������ �ڱ� �ڽ��� �����ڸ� �ʿ�� ��
	4. �Ļ� Ŭ������ �ΰ����� ������ ������ ��� �Լ����� ���Ƿ� �߰��� �� ����
	*/

private:
	int day;
	
public:
	NewTime();
	NewTime(int, int, int);
	//void print();
	void show();
};

#endif // TIMEH
