#include <iostream>
#include <algorithm>
using namespace std;

int main()

{
	int candies, s, minimal, x;
	int vase[3];
	s = 1;
	candies = 0;
	cout << "Write the number of candies in the first vase" << endl;
	cin >> vase[0];
	cout << "Write the number of candies in the second vase" << endl;
	cin >> vase[1];
	cout << "Write the number of candies in the third vase" << endl;
	cin >> vase[2];
	minimal = min(vase[0], vase[1] / 2);
	minimal = min(minimal, vase[2]);
	vase[0] = vase[0] - minimal;
	vase[1] = vase[1] - minimal * 2;
	vase[2] = vase[2] - minimal;
	if (vase[0] == 0)
	{
		candies = minimal * 4;
	}
	
	else if (vase[2] == 0)
	{
		candies = minimal * 4 + 2;
	}

	else  if (vase[1] == 0)

	{
		candies = minimal * 4 + 1;
	}

	else if (vase[1] == 1)
	{
		candies = minimal * 4 + 3;
	}
	cout << candies << endl;
	system("Pause");
	return 0;
}
