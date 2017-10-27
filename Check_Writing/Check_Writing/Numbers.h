#ifndef NUMBERS_H
#define NUMBERS_H
#include <iostream>
#include <string>
using namespace std;


class Numbers

{
public:
	Numbers() { number = 0; }  //default constructor
	Numbers(int n);
	void print();

private:
	static string thousands[];
	static string hundreds[];
	static string tens[];
	static string less_20[];
	int number;

};

#endif 


