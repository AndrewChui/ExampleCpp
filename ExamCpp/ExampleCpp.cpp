#include "ExampleCpp.h"

//Judge x>=2 is prime or not
bool cuishuning::example::IsPrime(int x)
{
	for (int i = 2; i <= x / i; i++)
	{
		if (x%i == 0)
			return false;
	}
	return true;
}
//Judge a year>=0 is a leapyear or not
bool cuishuning::example::IsLeap(int year)
{
	return (year % 4 == 0 && year % 100) || (year % 400 == 0);
}
//parsing a integer n>=0 to array x with a given radix
//for example: 7 with radix 2 to be parsinged 1 1 1
//return total digital of parsinged result
int cuishuning::example::ParsingIntWithRadix(int x[], int n, int radix)
{
	int i = 0;
	while (n)
	{
		x[i++] = n % radix;
		n /= radix;
	}
	return i;
}


