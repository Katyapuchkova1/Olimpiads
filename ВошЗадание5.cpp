#include <iostream>
using namespace std;

int main()
{
	int N, min2, proisvedeniye, max, min, max2;
	int massiv[100];
	cout << "Write the number of numbers"<< endl;
	cin >> N;
	min = 10000;
	max = -10000;
	for (int i = 0; i < N; i++)
	{
		cout << "Write the number" << endl;
		cin >> massiv[i];
		
		if (massiv[i] <= min)
		{
			min2 = min;
			min = massiv[i];
		}
		else if (massiv[i] <= min2)

		{
			min2 = massiv[i];
		}

	}

	for (int i = 0; i < N; i++)

	{
		if (massiv[i] >= max)
		{
			max2 = max;
			max = massiv[i];
		}

		else if (massiv[i] >= max2)

		{
			max2 = massiv[i];
		}
	}

	if (min > 0)
	{
		proisvedeniye = min * min2;
	}

	else if (min < 0 && max > 0)
	{
		proisvedeniye = min * max;
	}

	else if (min < 0 && max < 0)

	{
		proisvedeniye = max * max2;
	}
	cout << proisvedeniye;
	system("Pause");
	return 0;
}
