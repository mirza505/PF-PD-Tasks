#include<iostream>
using namespace std;
float cellularCompany(string,int);
main()
{
    string serviceType;
    int minutes;
    float result;
    cout<<"Enter the service type(P/p for preium or R/r for regular): ";
    cin>>serviceType;
    cout<<"Enter the number of minutes used: ";
    cin>>minutes;
    result = cellularCompany(serviceType,minutes);
    cout<<"Service: "<<serviceType<<endl<<"Minutes used: "<<minutes<<endl<<"Bill: "<<result;

}
float cellularCompany(string service, int minutes)
{
    float bill;
    int netMinutes;
    string timeDay;
    if(service== "R" || "r")
    {
        if(minutes<=50)
        {
            bill = 10;
        }
        else
        {
            netMinutes = minutes-50;
            bill = 10 + netMinutes*0.20;
        }
    }
    if(service== "P"||  "p")
    {
        cout<<"Enter the time of call(D/d for day, N/n for night): ";
        cin>>timeDay;
        if(timeDay=="day")
        {
            if(minutes<=75)
            {
                bill=25;
            }
            else{
            netMinutes = minutes-75;
            bill = 25+netMinutes*0.1;
            }
        }
        else
        {
            if(minutes<=100)
            {
                bill = 25;
            }
            else
            {
            netMinutes = minutes-100;
            bill = 25+netMinutes*0.05;
            }
            
        }

    }
    return bill;

}
