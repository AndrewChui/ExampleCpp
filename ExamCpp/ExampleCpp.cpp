#include "ExampleCpp.h"
#include <cstring>
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

//Remove char ch from string str at the begin
char* cuishuning::example::RomoveCharAtBegin(char* str, char ch)
{
	int i = 0;
	//Found the first char != ch
	while (str[i] == ch && str[i])
	{
		i++;
	}
	int j = 0;
	//move char
	while (str[j++] = str[i++]);
	return str;
}

//Remove char ch from string str at the end
char* cuishuning::example::RomoveCharAtEnd(char* str, char ch)
{
	int i = strlen(str);
	//Found the last char != ch at the end
	i--;
	while (str[i] == ch && i>=0)
	{
		i--;
	}
	//end the string
	str[++i] = 0;
	return str;
}
//split the str with separator x, return the count of splited string
int cuishuning::example::SplitString(char split[][100], char* str, char x)
{
	RomoveCharAtBegin(str, x);
	RomoveCharAtEnd(str, x);
	int sum = 0;
	int i = 0;
	int j = 0;
	while (str[i])
	{
		if (str[i] == x)
		{
			split[sum][j] = 0;
			sum++;
			j = 0;
			while (str[i++] == x);  //jump all same x
			i--;
		}
		else
		{
			split[sum][j++] = str[i++];
		}
	}
	split[sum][j] = 0;
	return ++sum;
}
//Convert a string to a int with the radix
int cuishuning::example::ConvertToInt(char * str, int radix)
{
	int i = 0;
	int sum = 0;
	while (str[i])
	{
		sum = sum * radix + (str[i] - '0');
	}
	return sum;
}


