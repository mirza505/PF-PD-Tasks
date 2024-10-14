#include<iostream>
#include<math.h>
using namespace std;
int power(int , int);
main()
{
	int base, exponent, result;
	cout<<"Enter the base:";
	cin>>base;
	cout<<"Enter the exponent:";
	cin>>exponent;
	result = power(base,exponent);
	cout<<base<<" raised to the power "<<exponent<<" is "<<result;

}

int power(int numBase, int numExponent)
	{
		int numPower;
		numPower = pow(numBase, numExponent);
		return numPower;
		
	
		
	}	

