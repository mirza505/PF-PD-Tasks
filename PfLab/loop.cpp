#include<iostream>
using namespace std;
void calculator(int , int);
main()
{
	int a,b;
	cout<<"Enter the value of a:";
	cin>>a;
	cout<<"Enter the value of b:";
	cin>>b;
	calculator(a,b);


}
	void calculator(int x, int y)
	{
		int result;
		char operator;
		while(1)
	{
		cout<<"Enter the operator:";
		cin>>operator;
		if(operator=='+')
		{
		result = x + y;
		}
		if(operator == '-')
		{
			result = x-y;
		}
		if(operator == '*')
		{
			result = x*y;
		}
		if(operator == '/')
		{
			result = x/y;
		}
	
	}
