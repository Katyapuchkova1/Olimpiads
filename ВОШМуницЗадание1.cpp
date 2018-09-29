#include <iostream>
using namespace std;

int main()
{
	int people, districts, votesofpeople, windistricts, numberofvoters;
	cout << "Write the number of people in the district" << endl;
	cin >> people;
	cout << "Write the number of districts" << endl;
	cin >> districts;
	if (people % 2 == 0, districts )
	{
		votesofpeople = (people - people%2) / 2 + 1 ;
		windistricts = (districts - districts % 2) / 2 + 1;
	}

	numberofvoters = votesofpeople * windistricts;
	cout << numberofvoters << endl;
	system("Pause");
	return 0;
}