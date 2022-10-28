/* Write a program that inputs a series of integers and passes them one at a time to
function isEven, which uses the modulus operator to determine whether an integer
is even. The function should take an integer argument and return true if the integer
is even and false otherwise. */

#include <iostream>

using namespace std;

bool isEven(int);


int main()
{
	int nbr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 0; i < sizeof(nbr)/sizeof(int); ++i)
	{
		;
		
		if (isEven(nbr[i]))
			cout << "The number " << nbr[i] << " is even" << endl;
		else
			cout << "The number " << nbr[i] << " is odd" << endl;

	}

	return 0;
}

bool isEven(int x)
{
	if (x % 2)
		return false;
	else
		return true;
}