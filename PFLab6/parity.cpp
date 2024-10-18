#include<iostream>
using namespace std;
string parityAnalysis(int );
main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	cout<<parityAnalysis(n);

}

string parityAnalysis(int number)

{
	int digit1, digit2 , digit3, digitSum;
	digit1 = number%10;
	digit2 = number%100;
	digit2 = digit2/10;
	digit3 =  number/100;
	digitSum = digit1 + digit2 + digit3;
	if(number%2==0)
	{
		if(digitSum%2==0)
		{
			return "True";
		}
		else
		{
			return "false";
		}
	
	}
	 if(number%2==1)
	{
		if(digitSum%2==1)
		{
			return "True";
		}
	else
		{
		return "False";
		}

	}
	

}