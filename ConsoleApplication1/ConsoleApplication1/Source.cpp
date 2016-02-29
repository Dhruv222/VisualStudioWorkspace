#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{ 
	int length, skip, destination, product;
	skip = 2;
	cout << "Enter Length:";
	cin >> length;
	product = 1;
	while (destination != length)
	{
		product = CalProduct(destination, skip);
	}
	return 0;
}

int CalProduct(int initial, int skip)
{
	int product=1;
	for (int i = 0;i < skip;i++)
	{
		product=
	}
}