#include "Numbers.h"
#include <iostream>
using namespace std;


int main()
{
	int num;      //holds number input from the user
	//prompts the user for the input
	cout << "Enter the amount you would like to translate: ";
	cin >> num;
	//validates input
	while (num < 0 || num > 9999)
	{
		cout << "Number must to be in range 0 - 9999 /n";
		cout << "Enter the number again: ";
		cin >> num;
	}
	Numbers amount(num);  //Numbers object
	system("cls");
	//Output translation
	cout << "Number is: " << num << endl;
	cout << "This is the translation: ";
	amount.print();

	cout << endl << endl;
	system("pause");
    return 0;
}

