/* Define a function hypotenuse that calculates the hypotenuse of a right triangle
when the other two sides are given. The function should take two double arguments
and return the hypotenuse as a double. Use this function in a program to determine
the hypotenuse for each of the triangles shown below. 

Triangle	Side 1		Side 2
1			3.0			4.0
2			5.0			12.0
3			8.0			15.0 */


#include <iostream>

using namespace std;

const int SIZEa = 3;
const int SIZEb = 2;
double hypotenuse();
double a[SIZEa][SIZEb] = {{3.0, 4.0}, {5.0, 12.0}, {8.0, 15.0}};

int main()
{
	
	hypotenuse();

	return 0;
}

double hypotenuse()
{
	double h = 0;
	int j = 0;

	for (int i = 0; i < SIZEa; i++)
	{
		h = (sqrt(((a[i][j]) * (a[i][j])) + ((a[i][j + 1]) * (a[i][j + 1]))));

		cout << "The hypotenuse of a right triangle with side lengths: " << a[i][j] << " and " << a[i][j + 1] << " is " << h << endl;
	}

	return 0;
}