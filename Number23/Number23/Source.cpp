#include <iostream>
using namespace std;

int x = 0;
int main()
{
	do {
		int points[5] = { 62, 75, 100, 83, 85 };
		char grades[5] = { 'D', 'C', 'A', 'B', 'B' };

		cout << points[x] << "->" << grades[x] << endl;
		x++;
	} while (x < 5);

	system("pause");
	return 0;
}	//end of main function