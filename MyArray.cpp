// MyArray.cpp : Defines the entry point for the console application.
// writen by 192101-01�
#include "stdafx.h"

#include<iostream>

using std::endl;
using std::cin;
using std::cout;
using std::ios_base;
#include"ss.h"
int _tmain(int argc, _TCHAR* argv[])

{
	MyArray first(5);
	first.Input();
	first.Display();

	SortArray second(4);
	second.Input();
	second.Sort();
	second.Display();

	ReArray third(7);
	third.Input();
	third.Re();
	third.Display();

	AverArray forth(4);
	forth.Input();
	cout.setf(ios_base::fixed);
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	forth.Display();
	forth.show();


	return 0;
}
