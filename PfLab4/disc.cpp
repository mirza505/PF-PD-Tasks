#include<iostream>
using namespace std;
void discount(string x, float y);
main()
{

	string d_name;
	float purchase;
	cout<<"Enter the day name:";
	cin>>d_name;
	cout<<"Enter your purchase: $";
	cin>>purchase;
	discount(d_name,purchase);
}

void discount(string x, float y)
{
	float pay_amo = 0;
	if(x == "sunday")
	{
		pay_amo = y - y*(10.0/100.0);
	}
	else
	{
		pay_amo = y;
	}
	cout<<"payable Amount = $"<<pay_amo;

}