/* A parking garage charges a $20.00 minimum fee to park for up to three hours. The
garage charges an additional $5.00 per hour for each hour or part thereof in excess
of three hours. The maximum charge for any given 24-hour period is $50.00. Assume
that no car parks for longer than 24 hours at a time.
Write a program that calculates and prints the parking charges for each of three
customers who parked their cars in this garage yesterday. You should enter the
hours parked for each customer. Your program should print the results in a neat
tabular format and should calculate and print the total of yesterday’s receipts. The
program should use the function calculateCharges to determine the charge for each
customer. Your outputs should appear in the following format: 

Car		Hours		Charge
1		1.5			20.0
2		4.0			25.0
3		24.0		50.0
Total	29.5		95.50
*/

#include <iostream>

using namespace std;

int charge(int);

int main()
{
	const int SIZE = 3;

	float array[SIZE] = { 1.5, 4.0, 24 };

	for (int i = 0; i < 3; i++)

		cout << "Car " << i + 1 << " stayed " << array[i] << "hours, accumulating a total charge of $" << charge(array[i]) << endl;

	return 0;
}


int charge(int x)
{
	if (x <= 3)
	{
		return 20;
	}
	else if (x >= 9)
	{
		return 50;
	}
	else
	{
		return ((float)(20 + ((x - 3) * 5)));
	}
}
