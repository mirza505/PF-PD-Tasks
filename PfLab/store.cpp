#include<iostream>
using namespace std;
void discount(string , float);
main()
{

string d_name;
float purchase;
while(1)
{
cout<<"Enter the day name:";
cin>>d_name;
cout<<"Enter your purchase: $";
cin>>purchase;
discount(d_name,purchase);
}

}

	void discount(string day, float purchase_amo)
	{
		float pay_amo;
			if(day=="sunday")
			{
				pay_amo = purchase_amo - purchase_amo*(10.0/100.0);

			}	
		if(day!="sunday")
		{
			pay_amo = purchase_amo;

		}
		
		cout<<"Pay amount = $"<<pay_amo<<endl;
		}

