#include <iostream>

using namespace std;

int main() {
	// �б� ����: if����
	if (true)
		cout << "������ ���Դϴ�.";

	if (false)
		cout << "������ �����Դϴ�.";

	if (true) {
		cout << "������ ";
		cout << "���Դϴ�." << endl;
	}
	else {
		cout << "������ ";
		cout << "�����Դϴ�." << endl;
	}

	if (false) {
		cout << "#1";
	}
	else {
		if (true) {
			cout << "#2";
		}
		else {
			cout << "#1";
		}
	}

	if (false) {
		cout << "#1";
	}
	else if (true) {
		cout << "#2";
	}
	else {
		cout << "#1";
	}

	cout << "���α׷��� ����Ǿ����ϴ�.";

	return 0;
}