#include <iostream>
#include <string>
using namespace std;

int average() {

	return 0;
}

int main() {

	double average;
	double highScore = 0;
	double lowScore = 100;
	double testScore;
	string result;
	double scoreArray[10] = { 0.0 };
	for (int i = 0; i <= size(scoreArray); i++) {
		cout << "Enter a test score or 999 to quit >> ";
		cin >> testScore;

		if (testScore <= lowScore) {
			lowScore = testScore;
		}
		else if (testScore >= highScore) {
			highScore = testScore;
		}
		else if (testScore > 100 || testScore < 0) {
			result = "Incorrect, number too high";
		}
	}

	system("pause");
	return 0;
}