#include <iostream>
using namespace std;

int main()
{
	int N, massivaftersale[100], massivcost[100];
	cout << "Write the number of papers" <<endl ;
	cin >> N;
	for (int i = 0; i <= N; i++)
	{
		cout << "Write the cost of the paper" << endl;
		cin >> massivcost[i];
		massivaftersale[i] = massivcost[i] * 75 / 100;
	}
	for (int m = 0; m <= N; m++)
	
	{
		for (int i = 0; i <= N; i++)
		{
			if (massivcost[m] == massivaftersale[i])
			{
				cout << massivcost[m] << endl;
				i = m + 1;
			}
		}
	}
	system("Pause");
	return 0;
}