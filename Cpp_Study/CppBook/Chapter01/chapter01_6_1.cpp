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
		cout << "선택: ";
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
			cout << "프로그램을 종료합니다.";
			break;
		}
	}
}

void ShowMenu()
{
	cout << "-----Menu-----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

void CreateAccount()
{
	int id, balance;
	char name[NAME_LENGTH];

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: ";
	cin >> id;
	cout << "이 름: ";
	cin >> name;
	cout << "입금액: ";
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

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: ";
	cin >> id;
	cout << "입금액: ";
	cin >> balance;

	for (int i = 0; i < idx; i++)
	{
		if (accounts[i].id == id)
		{
			accounts[i].balance += balance;
			break;
		}
	}

	cout << "입금완료" << endl;
}

void Withdraw() 
{
	int id, balance;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: ";
	cin >> id;
	cout << "출금액: ";
	cin >> balance;

	for (int i = 0; i < idx; i++)
	{
		if (accounts[i].id == id)
		{
			accounts[i].balance -= balance;
			break;
		}
	}

	cout << "출금완료" << endl;
}

void PrintAllAccount() 
{
	for (int i = 0; i < idx; i++)
	{
		cout << "계좌ID: " << accounts[i].id << endl;
		cout << "이 름: " << accounts[i].name << endl;
		cout << "입금액: " << accounts[i].balance << endl;
	}
}
