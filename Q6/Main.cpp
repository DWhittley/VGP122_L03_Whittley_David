/* Use a one-dimensional array to solve the following problem. Read in 20 numbers,
each of which is between 10 and 100, inclusive. As each number is read, validate it
and store it in the array only if it isn’t a duplicate of a number already read. After
reading all the values, display only the unique values that the user entered. Provide
for the “worst case” in which all 20 numbers are different. Use the smallest
possible array to solve this problem. */

#include <iostream>

using namespace std;

int a[20] = { 0 };
bool check(int);
bool chkDupe(int);


int main()
{
	int x = 0;
	
	for (int i = 0; i < sizeof(a) / sizeof(int);)
	{
		cout << "Please enter a number between 10 and 100, and only provide unique numbers: ";
		cin >> x;

		if (!check(x)) // checking to see if the number is not between 10 and 100
		{
			cout << "The number you entered is not between 10 and 100" << endl;
		}
		else if (chkDupe(x)) // check array for duplicate entries
		{
			cout << "The number you entered is not unique" << endl;
		}
		else // if the above two conditions are satisfied, deposit the value in the next available array location
		{
			a[i] = x;
			++i;
		}
	}

	cout << "The unique values you entered between 10 and 100 are: "; // print out the array once the functions above are finished (20 values in array)
	
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
	{
			cout << a[i] << " ";
	}

	cout << endl;

	return 0;
}

bool check(int x)
{
	if (x >= 10 && x <= 100) // if the number entered is between 10 and 100 then return true, else false.
		return true;
	else if (x < 10 || x > 100)
		return false;
}

bool chkDupe(int x)
{
	int y = 0;

	for (int i = 0; i < (sizeof(a) / sizeof(int)); ++i) // check all populated locations for duplicates.
		{
			if (x == a[i]) // if a duplicate exists increment y so that it is non-zero
				y =+ 1;
		}

	if (y != 0)
		return true;  // send "true" if there is a duplicate
	else
		return false;
}