#include "stdafx.h"
#include <iostream>
#include <algorithm>

using namespace std;

int main()

{
	int N, i, x, sum, thefirstsymbol, ostatok;
	cout << "Write the number" << endl;
	cin >> N;
	sum = 0;
	x = 3;
	i = 1;
	while (i != 0)
	{
		int c = N / pow(10, x - 2);
		sum = sum + c;;
		if (N / pow(10, x) == 0)
		{
			thefirstsymbol = x - 1;
			i = 0;
		}
		x = x + 1;
	}
	int c2 = N / pow(10, thefirstsymbol);
	ostatok = sum % 3;
	N = N - (c2 * pow(10, thefirstsymbol)) + (9 - ostatok) * pow(10, thefirstsymbol);
	cout << N;
	return 0;
	system("Pause");
}