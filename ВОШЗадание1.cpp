#include <iostream>
using namespace std;

int main()

{
	int N, M, person;
	cout << "Write the number of words in the rhyme" << endl;
	cin >> M;
	cout << "Write the number of people in the circle" << endl;
	cin >> N;
	person = M % N;
	cout << person << endl;
	system("Pause");
	return 0;
}
