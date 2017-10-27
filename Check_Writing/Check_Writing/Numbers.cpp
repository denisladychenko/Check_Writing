#include "Numbers.h"
#include <iostream>
#include <string>
using namespace std;

string Numbers::thousands[] = {"", "one thousand", "two thousand","three thousand","four thousand","five thousand",
				"six thousand","seven thousand","eight thousand", "nine thousand"};
string Numbers::hundreds[] = { "", "one hundred", "two hundred","three hundred","four hundred","five hundred",
				"six hundred","seven hundred","eight hundred", "nine hundred" };;
string Numbers::tens[] = { "", "", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety" };
string Numbers::less_20[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
				"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
					"nineteen"};

Numbers::Numbers(int n)  //class constructor
{
	if (n >= 0)
		number = n;
	else
		number = 0;
}
/*
This function determines thousands, hundreds, tens and ones, and than prints
translation on the screen.
*/
void Numbers::print()
{
	
	if (number == 0) {
		cout << "zero";
	}
	else {
		cout << thousands[number / 1000] << " " << hundreds[(number % 1000) / 100] << " "
			<< (((number % 100 < 20) ? less_20[number % 100] : tens[(number % 100) / 10] 
				+ " " + less_20[number % 10])) << endl;
	}
	
}