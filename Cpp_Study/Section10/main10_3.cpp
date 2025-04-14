#include <iostream>
#include "time.h"

using namespace std;

const int MAX = 3;

int main() {
	Time* times[MAX];
	int day;
	int hours;
	int mins;

	for (int i = 0; i < MAX; i++) {
		cout << i + 1 << "번째 원소 정의" << endl;
		cout << "시간: " << endl;
		cin >> hours;
		cout << "분 : " << endl;
		cin >> mins;
		char check;
		cout << "일 정보가 있다면 1, 없다면 0을 입력" << endl;
		cin >> check;
		if (check == '0')
			times[i] = new Time(hours, mins);
		else {
			cout << "일을 입력: " << endl;
			cin >> day;
			times[i] = new NewTime(hours, mins, day);
		}
	}

	for (int i = 0; i < MAX; i++) {
		cout << i + 1 << "번째 정보" << endl;
		times[i]->show();
	}

	for (int i = 0; i < MAX; i++) {
		delete times[i];	
	}

	return 0;
}