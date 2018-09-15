#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int day, month, i;
	i = 1;
	cout << "Write the number of the month" << endl;
	cin >> month;
	cout << "Write the number of the day" << endl;
	cin >> day;
	while (i != 0)
	{
		cout << month << " " << day << endl;
		if (month % 2 == 0 && day + 7 < 31)
		{
			day = day + 7;
			month = month;
		}
		if (month % 2 == 1 && day + 7 < 30)

		{
			day = day + 7;
			month = month;
		}

		if (month % 2 == 1 && day + 7 > 30)
		{
			day = 7 - 30 + day;
			month = month + 1;
		}

		if (month % 2 == 0 && day + 7 > 31 && month != 12)

		{
			day = 7 - 31 + day;
			month = month + 1;
		}

		else if (month % 2 == 0 && day + 7 > 31 && month == 12)

		{
			i = 0;
		}
	}
	system("Pause");
	return 0;
}