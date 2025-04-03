#include <iostream>

using namespace std;

const int SIZE = 8;

int sumArr(int[], int);
int sumArr2(int*, int*);

int main() {
	int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
	int sum = sumArr(arr, SIZE);

	cout << "함수의 총 합은 " << sum << endl;

	sum = sumArr2(arr, arr + 3);
	cout << "함수의 세 번째 인덱스까지의 합은  " << sum;

	return 0;
}

int sumArr(int arr[], int n) {
	int total = 0;

	for (int i = 0; i < n; i++)
		total += arr[i];

	return total;
}

// 배열의 시작 주소와 끝 주소를 전달
int sumArr2(int* begin, int* end) {
	int total = 0;
	int* pt;

	for (pt = begin; pt != end; pt++)
		total += *pt;

	return total;
}

// 배열의 시작 주소와 사이즈를 전달
//int sumArr(int*, int);

//int sumArr(int* arr, int n) {
//	int total = 0;
//
//	for (int i = 0; i < n; i++)
//		total += arr[i];
//
//	return total;
//}