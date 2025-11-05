#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main(void)
{
	srand(time(0));
	int numbers[10];

	cout << "The random integers: ";
	for (int i = 0; i < 10; i++)
	{
		numbers[i] = 1000 + rand() % (10000 - 1000) + 1;

		cout << numbers[i] << " ";
	}
	cout << endl;

	cout << "Even indices: ";
	cout << numbers[0] << " " << numbers[2] << " " << numbers[4] << " " << numbers[6] << " " << numbers[8] << " ";
	cout << endl;

	cout << "Even values: ";
	for (int i = 0; i < 10; i++)
	{
		if (numbers[i] % 2 == 0)
		{
			cout << numbers[i] << " ";
		}
	}
	cout << endl;

	cout << "Reversed Order; ";
	for (int i = 9; i >= 0; i--)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;

	cout << "First and last: ";
	cout << numbers[0] << " " << numbers[9];
	cout << endl;
	
}