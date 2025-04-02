#include <iostream>

using namespace std;

int main() {
	// 논리 표현식

	// 논리합 (||): 둘 중 하나만 true여도 true
	/*
	좌항 || 우항
	5 == 5 || 5 == 9
	5 > 3 || 5 > 10
	5 > 8 || 5 < 10
	5 > 9 || 5 > 2
	*/

	// 논리곱 (&&): 둘 다 true여야 true
	/*
	5 == 5 && 9 == 9
	5 == 5 && 9 != 9
	10 < 2 && 10 > 2
	*/

	// 논리부정 (!): 뒤에 오는 표현식의 값을 반대로 함
	// !(표현식): 표현식이 참이면 전체 값은 거짓

	cout << "당신의 나이를 입력하십시오.";
	int age;
	cin >> age;

	if (age < 0 || age > 100) {
		cout << "거짓\n";
	}
	else if (20 <= age && age <= 29) {
		cout << "20대\n";
	}
	else {
		cout << "잘 모르겠습니다.\n";
	}


	return 0;
}