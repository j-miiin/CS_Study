#include <iostream>
#include <cstring>

using namespace std;

const int NAME_LENGTH = 20;

typedef struct
{
	int id;
	char name[NAME_LENGTH];
	int balance;
} Account;

void ShowMenu();
void CreateAccount();
void Deposit();
void Withdraw();
void PrintAllAccount();

Account accounts[100];
int idx = 0;

int main()
{
	int choice;

	while (true)
	{
		ShowMenu();
		cout << "����: ";
		cin >> choice;
		cout << endl;

		if (choice == 1)
		{
			CreateAccount();
		}
		else if (choice == 2)
		{
			Deposit();
		}
		else if (choice == 3)
		{
			Withdraw();
		}
		else if (choice == 4)
		{
			PrintAllAccount();
		}
		else
		{
			cout << "���α׷��� �����մϴ�.";
			break;
		}
	}
}

void ShowMenu()
{
	cout << "-----Menu-----" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. �� ��" << endl;
	cout << "3. �� ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
}

void CreateAccount()
{
	int id, balance;
	char name[NAME_LENGTH];

	cout << "[���°���]" << endl;
	cout << "����ID: ";
	cin >> id;
	cout << "�� ��: ";
	cin >> name;
	cout << "�Աݾ�: ";
	cin >> balance;
	cout << endl;

	accounts[idx].id = id;
	accounts[idx].balance = balance;
	strcpy_s(accounts[idx].name, name);
	idx++;
}

void Deposit()
{
	int id, balance;

	cout << "[���°���]" << endl;
	cout << "����ID: ";
	cin >> id;
	cout << "�Աݾ�: ";
	cin >> balance;

	for (int i = 0; i < idx; i++)
	{
		if (accounts[i].id == id)
		{
			accounts[i].balance += balance;
			break;
		}
	}

	cout << "�ԱݿϷ�" << endl;
}

void Withdraw() 
{
	int id, balance;

	cout << "[���°���]" << endl;
	cout << "����ID: ";
	cin >> id;
	cout << "��ݾ�: ";
	cin >> balance;

	for (int i = 0; i < idx; i++)
	{
		if (accounts[i].id == id)
		{
			accounts[i].balance -= balance;
			break;
		}
	}

	cout << "��ݿϷ�" << endl;
}

void PrintAllAccount() 
{
	for (int i = 0; i < idx; i++)
	{
		cout << "����ID: " << accounts[i].id << endl;
		cout << "�� ��: " << accounts[i].name << endl;
		cout << "�Աݾ�: " << accounts[i].balance << endl;
	}
}
