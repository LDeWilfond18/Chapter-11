#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {

	int num1;
	int num2;
	int num3;
	int low;
	int mid;
	int high;
	cout << "Enter a number >>";
	cin >> num1;
	cout << "Enter a number >>";
	cin >> num2;
	cout << "Enter a number >>";
	cin >> num3;

	if (num1 <= num2 && num1 <= num3) {
		low = num1;
		if (num2 <= num3) {
			mid = num2;
			high = num3;
		}
		else {
			mid = num3;
			high = num2;
		}
	}
	else if (num2 <= num1 && num2 <= num3) {
		low = num2;
		if (num1 <= num3) {
			mid = num1;
			high = num3;
		}
		else {
			mid = num3;
			high = num1;
		}
	}
	else if (num3 <= num1 && num3 <= num2) {
		low = num3;
		if (num1 <= num2) {
			mid = num1;
			high = num2;
		}
		else {
			mid = num2;
			high = num1;
		}
	}

	system("pause");
	return 0;
}