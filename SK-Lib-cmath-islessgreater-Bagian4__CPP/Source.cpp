#include <iostream>
#include <cmath>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	int arr[] = { 5, 2, 8, 3, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int a = 1;
	int flag = 0;

	for (int i = 0; i < n; i++) {
		if (islessgreater(arr[i], a)) {
			flag = 1;
		}
	}

	if (flag == 0) {
		cout << a << " is present in array";
	} else {
		cout << a << " is not present in array";
	}

	_getch();
	return 0;
}
