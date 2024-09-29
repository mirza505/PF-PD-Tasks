#include<iostream>
using namespace std;
void flowerShop(int, int, int);
main()
{
	int num_redroses , num_tulips, num_whiteroses ;
	cout<<"Enter the number of red roses:";
	cin>>num_redroses;
	cout<<"Enter the number of tulips:";
	cin>>num_tulips;
	cout<<"Enter the number of white roses:";
	cin>>num_whiteroses;
	flowerShop(num_redroses, num_tulips, num_whiteroses );


}

void flowerShop(int roses, int tulips , int whiteroses)
	{
		float orig_price, pay_price;
		orig_price = roses*2.0 + tulips*4.10 + whiteroses*2.50;
		if(orig_price>200)
		{
			pay_price = orig_price - orig_price*(20.0/100.0) ;
			cout<<"Orignal Price = $"<<orig_price<<endl;
			cout<<"Payable amount = $"<<pay_price;
		}
		if(orig_price<=200)
		{
			cout<<"Orignal Price = $"<<orig_price<<endl;
			cout<<"No discount applied";
		}
	


	}