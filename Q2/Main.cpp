/* Function floor can be used to round a number to a specific decimal place. The
statement y = floor(x * 10 + 0.5) / 10; rounds x to the tenths position (the
first position to the right of the decimal point). The statement y = floor(x * 100
+ 0.5) / 100; rounds x to the hundredths position (the second position to the
right of the decimal point). Write a program that defines four functions to round a
number x in various ways:
a. roundToInteger(number)
b. roundToTenths(number)
c. roundToHundredths(number)
d. roundToThousandths(number)

For each value read, your program should print the original value, the number
rounded to the nearest integer, the number rounded to the nearest tenth, the
number rounded to the nearest hundredth and the number rounded to the nearest
thousandth. */

#include <iostream>

using namespace std;

float roundToInteger(float);
float roundToTenths(float);
float roundToHundredths(float);
float roundToThousandths(float);


int main()
{
	float nbr = 0;

	cout << "Enter a number :";
	cin >> nbr;
	
	roundToInteger(nbr);
	roundToTenths(nbr);
	roundToHundredths(nbr);
	roundToThousandths(nbr);

	return 0;
}

float roundToInteger(float x)
{
	cout << "The number " << x << "you entered rounded to a whole number = " << floor(x * 1 + 0.5) / 1 << endl;
	
	return 0;
}

float roundToTenths(float x)
{
	cout << "The number " << x << "you entered rounded to Tenths = " << floor(x * 10 + 0.5) / 10 << endl;

	return 0;
}

float roundToHundredths(float x)
{
	cout << "The number " << x << "you entered rounded to Hundredths = " << floor(x * 100 + 0.5) / 100 << endl;

	return 0;
}

float roundToThousandths(float x)
{
	cout << "The number " << x << "you entered rounded to Thousandths = " << floor(x * 1000 + 0.5) / 1000 << endl;

	return 0;
}
