#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int n, mass, max, weight, weightofthebackpack, weightofthesuitcase;
	cout << "Write the quontity of articles" << endl;
	cin >> n;
	cout << "Write the maximum weight of articles in the backpack" << endl;
	cin >> max;
	weightofthebackpack = 0;
	weightofthesuitcase = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "Write the mass of the most usefull article" << endl;
		cin >> mass;
		if (weightofthebackpack + mass <= max)
		{
			weightofthebackpack = weightofthebackpack + mass;
		}

		else
		{
			weightofthesuitcase = weightofthesuitcase + mass;
		}
	}

	cout << weightofthesuitcase << " - weight of the suitcase" << endl;
	cout << weightofthebackpack << " - weight of the backpack" << endl;
	system("Pause");
    return 0;
}

