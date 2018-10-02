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
	double count = 0;
	double total = 0;
	string result;
	double scoreArray[10] = { 0.0 };
	for (int i = 0; i <= size(scoreArray); i++) {
		cout << "Enter a test score or 999 to quit >> ";
		cin >> testScore;

		if (testScore <= lowScore) {
			lowScore = testScore;
			count = count + 1;
		}
		else if (testScore >= highScore) {
			highScore = testScore;
			count = count + 1;
		}
		else if (testScore > 100 || testScore < 0) {
			result = "Incorrect, number too high";
		}
		else if (testScore < 101 && testScore > 0) {
			count = count + 1;
		}
		total = total + testScore;
		average = total / count;
	}
	cout << "The average is " << average << " the lowest score is " << lowScore << " the highest score is " << highScore;

	system("pause");
	return 0;
}