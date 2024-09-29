#include<iostream>
using namespace std;
void pet(int);
main()
{
	int holidays;
	cout<<"Enter the holidays:";
	cin>>holidays;
	pet(holidays);

}

void pet(int owner_holidays)
{
	
	int timePlay , working_days, norm_difference ,time_hrs,time_min;
	working_days = 365- owner_holidays;
	timePlay = (working_days*63) + owner_holidays*127;
	norm_difference = 30000 - timePlay;
	if(timePlay<30000)
	{
		cout<<"Tom can sleep well"<<endl;
		time_hrs = norm_difference/60;
		time_min = norm_difference%60;
		cout<<time_hrs<<" hours and "<<time_min<<" minutes less for play";
	}
	if(timePlay>30000)
	{
		cout<<"Tom will run away"<<endl;
		time_hrs = norm_difference/60;
		time_min = norm_difference%60;
		cout<<-(time_hrs)<<" hours and "<<-(time_min)<<" minutes for play";
	}





}