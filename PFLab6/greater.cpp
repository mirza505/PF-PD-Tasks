#include<iostream>
using namespace std;
string greaterNumber(int , int);
main()
{
	int n1, n2;
	cout<<"Enter number1:";
	cin>>n1;
	cout<<"Enter number2:";
	cin>>n2;
	cout<<greaterNumber(n1,n2);

}

string greaterNumber(int number1, int number2)
{

	if(number1>number2)
	{
		return "True";

	}

		if(number1<number2)
	{
		return "False";

	}



}