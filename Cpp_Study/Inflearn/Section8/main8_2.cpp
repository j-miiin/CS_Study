#include <iostream>
#include "stock.h"

int main() {
	// �߻�ȭ�� Ŭ����
	// ���������̶� �����ΰ�?
	// ���������� ������� ��� ������ ������ �� �ִ°�?
	
	// Ŭ����: �߻�ȭ�� ����� ���� ������������ ��ȯ���ִ� ����
	// �߻�ȭ: ��� ��ü�� ��������� ǥ���ϴ� ���� �ƴ϶�, ����� Ư¡�� ������ ������� �����ϱ� ���� ǥ���ϴ� ��

	/*
	1. Ŭ���� ����
	2. Ŭ���� �ż��� ����
	*/

	// �����ڸ� ���� �� ���� ������� ���� ����
	//Stock temp = Stock("Panda", 100, 1000);
	//Stock temp2("Panda", 100, 1000);
	 
	//temp.acquire("Panda", 100, 1000);
	//temp.show();
	//temp.buy(10, 1200);
	//temp.show();
	//temp.sell(5, 800);
	//temp.show();

	cout << "�����ڸ� �̿��� ��ü ����\n";
	Stock temp("Panda", 100, 1000);

	cout << "����Ʈ �����ڸ� �̿��� ��ü ����\n";
	Stock temp2;

	cout << "temp�� temp2�� ����\n";
	temp2 = temp;

	cout << "temp�� temp2 ���\n";
	temp.show();
	temp2.show();

	cout << "�����ڸ� �̿��� temp ���� �缳��\n";
	temp = Stock("Coding", 200, 1000);

	cout << "�缳���� temp ���\n";
	temp.show();

	return 0;
}