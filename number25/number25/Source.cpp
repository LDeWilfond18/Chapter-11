#include <iostream>
using namespace std;

int main()
{

	//get month number
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int monthNumber;
	cout << "Enter the month number (-1 to stop): ";
	cin >> monthNumber;
	while (monthNumber != -1)
	{
		//display number of days
		if (monthNumber > 0 && monthNumber < 13)
			cout << "Number of days: " << days[monthNumber - 1] << endl << endl;
		else
			cout << "Invalid month number" << endl << endl;
		//end if
		cout << "Enter the month number (-1 to stop): ";
		cin >> monthNumber;
	}  //end while

	system("pause");
	return 0;
}	//end of main function