#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int k, p, s, pens;
	cout << "Write the original fee of the pen" << endl;
	cin >> k;
	cout << "Write the percanta2ge of the expansion of the fee" << endl;
	cin >> p;
	cout << "Write the number of money that you have" << endl;
	cin >> s;
	pens = s / (k * (p / 100) + 1);
	cout >> pens;
	system("Pause");
	return 0;
}