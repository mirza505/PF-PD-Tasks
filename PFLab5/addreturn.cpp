#include<iostream>
using namespace std;
int add(int , int);
main()
{
	
	int num1,num2, result;
	cout<<"Enter number 1:";
	cin>>num1;
	cout<<"Enter number 2:";
	cin>>num2;
	result = add(num1,num2);
	cout<<"Sum of two numbers = "<<result;


}

int add(int a, int b)
	{

		int sum;
		sum = a+b;
		return sum;

	}