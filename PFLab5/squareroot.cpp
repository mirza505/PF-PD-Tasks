#include<iostream>
#include<math.h>
using namespace std;
int squareroot(int);
main()
{
	int number, result;
	cout<<"Enter a number:";
	cin>>number;
	result = squareroot(number);
	cout<<"Squareroot of "<<number<<" is "<<result;
	
}

int squareroot(int num)

	{
		int numRoot;
		numRoot = sqrt(num);
		return numRoot;
	}