#include<iostream>
using namespace std;
void printMenu();
void calculateAggregate(string, float, float,float );                           
void compareMarks(string, float ,string , float);
main()
{
	string name1, name2;
	char ch;
	printMenu();
	float  matricMarks , interMarks,ecatMarks1,ecatMarks2;
	cout<<"Enter your name:"<<endl;
	cin>>name1;
	cout<<"Enter your matric marks out of 1100";
	cin>>matricMarks;
	cout<<"Enter your inter marks out of 550";
	cin>>interMarks;
	cout<<"Enter your ecat marks out of 400";
	cin>>ecatMarks1;
	cout<<"Enter your name:"<<endl;
	cin>>name2;
	cout<<"enter your ecat marks out of 400";
	cin>>ecatMarks2;
	cout<<"Choose an option to perform the desired operation"<<endl;
	cout<<"1. Aggregate calculator"<<endl;
	cout<<"2. Compare Marks"<<endl;
	cout<<"Enter 1 for aggregate calculate and 2 for compare marks:"<<endl;
	cin>>ch;
	if(ch=='1')
	{

	calculateAggregate(name1,matricMarks,interMarks,ecatMarks1);

	}
	
	if(ch=='2')

	{

	compareMarks(name1,ecatMarks1,name2,ecatMarks2);


	}

}

void printMenu()

	{

		cout<<"            ##  ##  ##### ######     ##      ##      ##     ######                      "<<endl;
		cout<<"            ##  ##  ##      ##     ##   ##   ## #  # ##    ###  ###                      "<<endl;
		cout<<"            ##  ##  #####   ##     ##   ##   ##  #   ##     ##                        "<<endl;
		cout<<"            ##  ##  ##      ##     #######   ##      ##      ####                  "<<endl;
		cout<<"            ######  ##      ##     ##   ##   ##      ##   ##     ##              "<<endl;
		cout<<"            ######  #####   ##     ##   ##   ##      ##    ######                       "<<endl;
		

	}

void calculateAggregate(string studentName, float studentMatric, float studentInter, float studentEcat)

	{
		float aggregate;
		aggregate = studentMatric*(30.0/1100.0) + studentInter*(40.0/550.0) + studentEcat*(40.0/400.0);
		cout<<"Your aggregate = %"<<aggregate;

	}

void compareMarks(string name1,float ecatMarks1, string name2, float ecatMarks2)
	{
			if(ecatMarks1>ecatMarks2)
		{
			cout<<"1st Roll.No is allotted to "<<name1;

		}
		if(ecatMarks1<ecatMarks2)
		{
			cout<<"1st Roll.No is allotted to "<<name2;

		}



	}

