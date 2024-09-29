#include<iostream>
using namespace std;
void covid(int , int);
main()
{
	int tissue_roll , people;
	cout<<"Enter the number of people:";
	cin>>people;
	cout<<"Enter the number of sheets in tissue roll:";
	cin>>tissue_roll;
	covid(people,tissue_roll);
	
}

void covid(int num_people , int roll_tissuepapers)
	{
		int days, tissue_usage, total_sheets;
		total_sheets = roll_tissuepapers*500;
		tissue_usage = num_people*57;
		days = total_sheets/tissue_usage;
		if(days<14)
		{
			cout<<"You tissue will only last  "<<days<<" days, buy more";

		}
		if(days>14)
		{
			cout<<"You tissue will  last  "<<days<<" days, no need to panic";

		}



	}