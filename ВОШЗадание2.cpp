#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

int main()

{
	int candies, s;
	int vase[3];
	s = 1;
	candies = 0;
	cout << "Write the number of candies in the first vase" << endl;
	cin >> vase[0];
	cout << "Write the number of candies in the second vase" << endl;
	cin >> vase[1];
	cout << "Write the number of candies in the third vase" << endl;
	cin >> vase[2];
	while (s != 0)
	{
		for (int i = 0; i <= 2; i++)
		{
			vase[i] = vase[i] - 1;
			candies = candies + 1;
			if (vase[i] == 0)
			{
				i = 3;
				s = 0;
			}
		}
	}
	cout << candies << endl;
	return 0;
	system("Pause");
}