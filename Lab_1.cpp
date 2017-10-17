// ConsoleApplication13.cpp: определяет точку входа для консольного приложения.
//


#include "stdafx.h"
#include "stdio.h"
#include "math.h"
#include "iostream"
#include "stdio.h"
using namespace std;


int main(void)
{

	float x, y, z;
	cout << "Enter your values \n";
	cin >> x >> y;
	z = pow(y,3)*sqrt(x*y) + y*sin(x*y)-pow(exp(1),(-x*y))*cos(x*y)+7.1/(x*y);
	cout << z << ".\n";
	return 0;
}
