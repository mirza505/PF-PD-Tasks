#include<iostream>
using namespace std;
float fare(int , string);
main()
{
    int km;
    string dayPeriod;
    cout<<"Enter the kilometers: ";
    cin>>km;
    cout<<"Enter the day period(day/night): ";
    cin>>dayPeriod;
    cout<<"Lowest price for "<<km<<" kilometers = ERO"<<fare(km,dayPeriod);

}
float fare(int kilometers, string period)
{
    float farePrice;
    if(kilometers>=100)
    {
        if(period=="day" || period=="night")
        {
            farePrice = kilometers*0.06;

        }

    }
    if(kilometers>=20)
    {
        if(period=="day" || period=="night")
        {
            farePrice = kilometers*0.09;

        }

    }
    if(kilometers<20)
    {
        if(period=="start")
        {
            farePrice = kilometers*0.70;
        }
        else if(period=="day")
        {
            farePrice = kilometers*0.79;
        }
        else
        {
            farePrice = kilometers*0.90;
        }





    }





}