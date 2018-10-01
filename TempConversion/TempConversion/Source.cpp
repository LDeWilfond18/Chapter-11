#include <iostream>
using namespace std;

double convert(double fahren)
{
	double r;
	r = (fahren - 32) * 5 / 9;
	return r;
}

int main()
{
	double z;
	double tempArray[5] = { 0.0 };

	for (int i = 0; i < size(tempArray); i++) {
		cout << "Enter a temperature >> ";
		cin >> tempArray[i];
		z = convert(tempArray[i]);
		cout << "The temp conversion is " << z << endl;
	}
	
	
	system("pause");
	return 0;
}