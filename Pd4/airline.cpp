#include<iostream>
using namespace std;
void airLine(string , float);
main()
{
	string name;
	float price;
	while(1)
	{
		cout<<"Enter the country name:";
		cin>>name;
		cout<<"Enter the ticket price in dollars: $";
		cin>>price;
		airLine(name,price);	
	}
}

	void airLine(string country_name , float ticket_price)
{
	float final_price;
		if(country_name=="Pakistan")
		{
			final_price = ticket_price - ticket_price*(5.0/100.0);
		}
		if(country_name=="India")
		{
			final_price = ticket_price - ticket_price*(20.0/100.0);
		}
		if(country_name=="Ireland")
		{
			final_price = ticket_price - ticket_price*(10.0/100.0);
		}
		if(country_name=="England")
		{
			final_price = ticket_price - ticket_price*(30.0/100.0);
		}
		if(country_name=="Canada")
		{
			final_price = ticket_price - ticket_price*(45.0/100.0);
		}

	cout<<"Final Price = $"<<final_price<<endl;

}