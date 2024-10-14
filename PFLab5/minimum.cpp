#include<iostream>
using namespace std;
int minimum(int , int);
main()
{
	int number1 ,number2, result;
	cout<<"Enter the first number:";
	cin>>number1;
	cout<<"Enter the second number:";
	cin>>number2;
	result = minimum(number1, number2);
	cout<<"The minimum of "<<number1<<" and "<<number2<<" is "<<result;


}

int minimum(int num1, int num2)
	{
		int minNumber;
		if(num1<num2)
		{
			minNumber = num1;
	
		}
		
		if(num2<num1)
		{
			minNumber = num2;
			
		}

	return minNumber;
	
	}