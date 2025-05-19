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
	1. 기초 클래스에서 가상 메서드를 선언하면 
	그 함수는 기초 클래스 및 파생되는 클래스에서도 모두 가상이 됨
	2. 객체에 대한 참조를 사용하거나 객체를 지시하는 포인터를 사용하여 가상 메서드가 호출되면, 
	참조나 포인터를 위해 정의된 메서드를 사용하지 않고 객체형을 위해 정의된 메서드를 사용 -> 동적 결합
	3. 상속을 위해 기초 클래스로 사용할 클래스를 정의할 때,
	파생 클래스에서 다시 정의해야 되는 클래스 메서드들은 가상 함수로 선언해야 함
	*/
	virtual ~Time();	// 항상 Time 객체에 대한 파괴자만 호출되므로 파괴자도 virtual로 선언해야 함
	int getHour() { return hours; }
	int getMins() { return mins; }
	friend Time operator*(int n, Time& t) {
		return t * n;	// 멤버함수 operator*를 호출하게 됨
	}
	friend std::ostream& operator<<(std::ostream&, Time&);
};

class NewTime : public Time {
	/*
	1. 파생 클래스형의 객체 안에는 기초 클래스형의 데이터 멤버들이 저장됨
	2. 파생 클래스형의 객체는 기초 클래스형의 메서드들을 사용할 수 있음
	3. 파생 클래스는 자기 자신의 생성자를 필요로 함
	4. 파생 클래스는 부가적인 데이터 멤버들과 멤버 함수들을 임의로 추가할 수 있음
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
