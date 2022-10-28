/* Implement the following integer functions:
a. Function celsius returns the Celsius equivalent of a Fahrenheit temperature.
b. Function fahrenheit returns the Fahrenheit equivalent of a Celsius
temperature.
c. Use these functions to write a program that prints charts showing the
Fahrenheit equivalents of all Celsius temperatures from 0 to 100 degrees, and
the Celsius equivalents of all Fahrenheit temperatures from 32 to 212 degrees.

Print the outputs in a neat tabular format that minimizes the number of lines of
output while remaining readable. */

#include <iostream>

using namespace std;

int celsius(int);
int fahrenheit(int);

int main()
{
	cout << "The Fahrenheit equivalent of Celcius temperatures from 0 to 100 are:" << endl;
	for (int i = 0; i < 101; ++i)
	{
		cout << fahrenheit(i) << "\t";
		
		if (i > 0 && (i + 1) % 10 == 0)
			cout << endl;
	}

	cout << endl;
	cout << "The Celcius equivalent of Fahrenheit temperatures from 32 to 212 are:" << endl;
	
	for (int j = 32; j < 213; ++j)
	{
		
		cout << celsius(j) << "\t";
		
		if (j > 32 && (j - 31) % 10 == 0)
			cout << endl;
	}

}

int fahrenheit(int x)
{
	int f = 0;
	f = ((x * 9 / 5) + 32);
	
	return f;
}

int celsius(int x)
{
	int c = 0;
	c = ((x - 32) * 5 / 9);

	return c;
}
