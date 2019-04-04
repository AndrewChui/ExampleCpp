#pragma once
#ifndef Cuishuning_Example_CPP
#define Cuishuning_Example_CPP

namespace cuishuning
{
	namespace example
	{
		bool IsPrime(int x);
		bool IsLeap(int year);
		int ParsingIntWithRadix(int x[], int n,int radix);
		char* RomoveCharAtBegin(char* str, char ch);
		char* RomoveCharAtEnd(char* str, char ch);
		int SplitString(char split[][100], char* str, char x);
		int ConvertToInt(char* str, int radix);
	}
}

#endif // !Cuishuning_Example_CPP