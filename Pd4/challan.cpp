#include<iostream>
using namespace std;
void checkSpeed(int );
main()
{

	int speed;
	cout<<"Enter the car speed:";
	cin>>speed;
	checkSpeed(speed);

}

void checkSpeed(int car_speed)
	{
		if(car_speed<=100)
		{
			cout<<"Perfect!You're going good";

		}
		if(car_speed>100)
		{
			cout<<"Halt..You Will be Challenged!!!";
		}



	}
