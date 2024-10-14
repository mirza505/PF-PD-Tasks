#include<iostream>
using namespace std;
string alphabetCase(string);
main()
{
	string ch;
	string result;
	cout<<"Enter a character (A/a):";
	cin>>ch;
	result = alphabetCase(ch);
	cout<<result;

}

string alphabetCase(string chInput)
	{
		string resultStr;
		if(chInput =="A")
		{
			resultStr = "You have entered capital A";
		}
		
		if(chInput =="a")
		{
			resultStr = "You have entered lowercase a";
		}

		return resultStr;

	}