#include <iostream>

using namespace std;

const int SIZE = 30;

int main() {
	/*int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "�Է��� ���� 1\n";
		break;
	case 2:
		cout << "�Է��� ���� 2\n";
		break;
	case 3:
		cout << "�Է��� ���� 3\n";
		break;
	default:
		cout << "�Է��� ���� 1, 2, 3 �̿��� �ٸ� ��\n";
		break;
	}*/
	//cout << "switch ���� ��\n";


	// break
	int i = 0;
	while (true) {
		cout << "i�� ���� " << i << " �Դϴ�." << endl;
		if (i > 10)
			break;
		i++;
	}


	// continue
	cout << "������ �Է��Ͻʽÿ�\n";
	char line[SIZE];
	cin.get(line, SIZE);
	cout << "�Է��Ͻ� ������\n";
	int spaces = 0;
	for (int i = 0; line[i] != '\0'; i++) {
		cout << line[i];

		if (line[i] != ' ')
			continue;

		spaces++;
	}

	cout << " �Դϴ�.\n";
	cout << "�Է��Ͻ� ���忡�� ������ ������ ���� ���� " << spaces << "�� �Դϴ�.\n";
	cout << "for���� �������ϴ�.\n";
}