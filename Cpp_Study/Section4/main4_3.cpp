#include <iostream>

using namespace std;

int main() {
	// while��, do while��

	//int i = 0;
	//while (i < 3) {
	//	// code
	//	i++;
	//}

	// ����
	string str = "Panda";
	int i = 0;
	while (str[i] != '\0') {
		cout << str[i] << endl;
		i++;
	}

	/*bool a = true;
	bool b = false;
	while (a) {
		cout << "hello\n";
	}*/

	int j = 0;
	do {
		cout << "while�� �Դϴ�.\n";
		j++;
	} while (j < 3);

	return 0;
}