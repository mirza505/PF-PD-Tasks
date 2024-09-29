#include<iostream>
using namespace std;
void longest_value(int , int);
main()
{
	int hours, minutes;
	cout<<"Enter the hours:";
	cin>>hours;
	cout<<"Enter the minutes:";
	cin>>minutes;
	longest_value(hours,minutes);


}

void longest_value(int hrs, int min)
	{
		if(hrs*60>min)
		{
		
			cout<<"Longest duration is "<<hrs;
		
		}
		if(hrs*60<min)
		{
			cout<<"Longest duration is "<<min;

		}



	}
