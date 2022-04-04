
#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	EfficientTruckloads *et = new EfficientTruckloads();
	Truckloads *t = new Truckloads();
	Reverse *re = new Reverse();
	int num, crates, load;
	string letters;

	cin >> num;
	if (cin.fail())
	{
		cin.clear();
		cout << -1 << endl;
	}
	else
		cout << re->ReverseDigit(num) << endl;

	cin >> letters;
	if (cin.fail())
	{
		cin.clear();
		cout << "ERROR" << endl;
	}
	else
		cout << re->ReverseString(letters) << endl;

	cin >> crates;
	if (cin.fail())
	{
		cin.clear();
		cout << -1 << endl;
		cout << -1 << endl;
	}
	else
	{
		cin >> load;
		if (cin.fail())
		{
			cin.clear();
			cout << -1 << endl;
			cout << -1 << endl;
		}
		else
		{
			cout << t->numTrucks(crates, load) << endl;
			cout << et->numTrucks(crates, load) << endl;
		}
	}
}
