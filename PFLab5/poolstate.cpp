#include<iostream>
using namespace std;
string poolState(float , int ,int ,int);
main()
{
	int  flow1 , flow2, volume;
	float hours;
	string result;
	cout<<"Enter volume of water in liters:";
	cin>>volume;
	cout<<"Enter the flowrate of pipe1:";
	cin>>flow1;
	cout<<"Enter the flowrate of pipe2:";
	cin>>flow2;
	cout<<"Enter the hours the worker was absent:";
	cin>>hours;
	result = poolState(hours,flow1,flow2,volume);

}

string poolState(float workerHours,int flowrate1, int flowrate2, int volume)
	{
		int totalWater, volumePercentage, contributePipe1, contributePipe2;
		float  overflowWater;
		string answer;
		volumePercentage = (((flowrate1*workerHours)+(flowrate2*workerHours))/volume)*100;
		totalWater = (flowrate1*workerHours)+(flowrate2*workerHours);
		if(totalWater>volume)
		{

			overflowWater = totalWater-volume;
			cout<<"The pool was overflowing with "<<workerHours<<" with "<<overflowWater<<"litres"<<endl;
		}
		if(totalWater<volume)
		{
		cout<<"The pool is:"<<volumePercentage<<"% full"<<endl;
		contributePipe1 = ((flowrate1*workerHours)/totalWater)*100;
		contributePipe2 = ((flowrate2*workerHours)/totalWater)*100;
		cout<<"Pipe1: "<<contributePipe1<<"%"<<", Pipe2: "<<contributePipe2<<"%";
		}
		answer = to_string(volumePercentage) + to_string(contributePipe1) + to_string(contributePipe2) + to_string(overflowWater);
		return answer;
	
	
	}