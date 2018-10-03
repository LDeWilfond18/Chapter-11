#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(2);

	//declare array
	double prices[10] = { 10.5, 25.5, 9.75, 6.0, 35.0, 100.4, 10.65, .56, 14.75, 4.78 };
	//declare variable
	double increase = 0.0;
	double conversion;
	//update prices
	cout << "Enter increase percentage (for example, enter 15 for 15%): ";
	cin >> increase;
	conversion = (increase / 100) + 1;
	/*for (int i = 0; i < size(prices); i++) {

		cout << prices[i] * conversion << endl;
	}*/
	int j = 0;
	while (j < size(prices)) {
	
		cout << prices[j] * conversion << endl;
		j++;
	}
	system("pause");
	return 0;
}	//end of main function