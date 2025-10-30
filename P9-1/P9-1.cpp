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
}