#include<iostream>
using namespace std;
void reverse(string);
main()
{
	string input;
	cout<<"Enter true or false:";
	cin>>input;
	reverse(input);

}

void reverse(string state)
	{
		if(state=="true")
		{
			cout<<"False";

		}
		if(state=="false")
		{
			cout<<"True";
		}


	}