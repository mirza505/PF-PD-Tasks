#include<iostream>
using namespace std;
string oddishEvenish(int);
main()
{
	int number;
	string answer;
	cout<<"Enter a five digit number:";
	cin>>number;
	answer = oddishEvenish(number);
	cout<<answer;

}

string oddishEvenish(int num)
	{

	int digit1, digit2, digit3, digit4, digit5, checkNumber;
	string result;
	digit5 = num%10;
	digit4 = num%100;
	digit4 = digit4/10;
	digit3 = num%1000;
	digit3 = digit3/100;
	digit2 = num%10000;
	digit2 = digit2/1000;	
	digit1 = num/10000;
	checkNumber = digit1 + digit2 + digit3 +digit4 + digit5;
	if(checkNumber%2==0)
	{
		result = "Evenish";
	}

	if(checkNumber%2==1)
	{
		result = "Oddish";
	}
	
	return result;
	}
