#include<iostream>
using namespace std;
void fuel(float);
main()
{
float distance;
cout<<"Enter the distance"<<endl;
cin>>distance;
fuel(distance);

}
void fuel(float dis)
{
	float req_fuel = dis*10;
	if(req_fuel<100)
	{
		cout<<"Fuel Needed = "<<100;
		
	}
	if(req_fuel>100)
	{
		cout<<"Fuel Needed = "<<req_fuel;
  	}

}