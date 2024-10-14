#include<iostream>
using namespace std;
string symmetry(int);
main()
{
	int number;
	string result;
	cout<<"Enter a three digit number:";
	cin>>number;
	result = symmetry(number);
	cout<<result;

}

string symmetry(int n)
	{	
		int reverseDigit1, reverseDigit2,reverseDigit3;
		string answer;
		reverseDigit1 = n%10; 
		reverseDigit2 = n%100; 
		reverseDigit3 =  n/100;
		if(reverseDigit1==reverseDigit3)
		{
			answer = "The number is symmetrical";
		}

		if(reverseDigit1!=reverseDigit3)
		{
			answer = "The number is not symmetrical";
		}

		return answer;



	}