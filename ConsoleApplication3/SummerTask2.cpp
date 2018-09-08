#include <iostream>
#include <algrithm>
using namespace std;

int main()

{
	int print, minimalsideE, minimalsideW, minimalsideS, minimalsideN, cornerSE, cornerNW, cornerNE, cornerSW;
	int x2, x1, y2, y1, y, x;
	cout << "Write the x - coordinates for the north-east corner " << endl;
	cin >> x2;
	cout << "Write the x - coordinates for the south-west corner " << endl;
	cin >> x1;
	cout << "Write the y-coordinates for the north-east corner " << endl;
	cin >> y2;
	cout << "Write the y-coordinates for the south-east corner " << endl;
	cin >> y1;
	cout << "Write the y-coordinates of the float" << endl;
	cin >> y;
	cout << "Write the x-coordinates of the float" << endl;
	cin >> x; 
	s = 1;
	minimalsideS = 100000;
	minimalsideN = 100000;
	minimalsideW = 100000;
	minimalsideE = 100000;
	while (x2 >= x1)
	{
		sideN = pow(((x2 - x)*(x2 - x) + (y2 - y)(y2 - y)), 1 / 2);
		if (sideN < minimalsideSE)
			
			{
			minimalsideN = sideN;
			}

		if (x2 == x1)
		
			{
			cornerNW = sideN;
			}
		
		if (s == 1)

			{
			cornerNE = sideN
			}
		x2 = x2 - 1;
		s = s + 1;
	}
	
	s = 1;
	
	while (y1 <= y2)
	{
		sideW = pow(((y1 - y)*(y1 - y) + (x1 - x)(x1 - x)), 1/2);
		
		if (sideW < minimalsideW)

		{
			minimalsideW = sideW;
		}

		if (s == 1)

		{
			cornerSW = sideW;
		}
		s = s + 1;
		y1 = y1 + 1;
	}
	
	s = 1;
	
	while (x2 >= x1)
	{
		sideS = pow (((x2 - x)*(x2 - x) + (y1 - y)(y1 - y)), 1/2);
		if (s == 1)
		
		{
			cornerSE = sideS;
		}
		if (sideS < minimalsideS)

		{
			minimalsideS = sideS;
		}
		s = s + 1;
		x2 = x2 - 1;
	}

	while (y1 <= y2)
	{
		sideE = pow(((y1 - y)*(y1 - y) + (x2 - x)(x2 - x)), 1/2);

		if (sideE < minimalsideE)

		{
			minimalsideE = sideE;
		}
		y1 = y1 + 1;
	}

	print = min(minimalsideE, minimalsideW, minimalsideS, minimalsideN, cornerSE, cornerSW, cornerNE, cornerNW);
	if (print == minimalsideE)
	{
		cout << E;
	}
	else if (print == minimalsideW)
	{
		cout << W;
	}
	else if (print == minimalsideS)
	{
		cout << S;
	}
	else if (print == minimalsideN)
	{
		cout << N;
	}
	else if (print == cornerSE)
	{
		cout << SE;
	}
	else if (print == cornerSW)
	{
		cout << SW;
	}
	else if (print == cornerNE)
	{
		cout << NE;
	}
	else if (print == corner NW)
	{
		cout << NW;
	}
	system("Pause");
	return 0;
}

