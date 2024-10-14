#include<iostream>
using namespace std;
string timeTravel(int , int);
main()
{
	int hours,minutes;
	string result;
	cout<<"Enter the hours:";
	cin>>hours;
	cout<<"Enter the minutes:";
	cin>>minutes;
	result = timeTravel(hours,minutes);
	cout<<result;
	


}

string timeTravel(int hrs, int min)
	{

		int extraMin,extraHours;
		string answer;
		extraMin = min+15;
		if(extraMin>60)
		{
			extraHours = extraMin/60;
			hrs = hrs + extraHours;
			extraMin =  extraMin-60;
		}
		if(hrs>=24)
		{
			hrs = 0;
		
		}

		answer = to_string(hrs) + ": " + to_string(extraMin);
		return answer;

	}



