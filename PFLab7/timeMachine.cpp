#include<iostream>
using namespace std;
#include<iomanip>
int timeMachine(int ,int);
main()
{
    int money,year,result;
    cout<<"Enter the money: ";
    cin>>money;
    cout<<"Enter the year: ";
    cin>>year;
    result = timeMachine(money,year);
    if(result>0)
    {
        cout<<"Yes!he will live a carefree life and will have "<<result<<" dollars left";
    }
    if(result<0)
    {
        cout<<"No! He needs "<<-(result)<<" dollars more to live";
    }
}
int timeMachine(int money,int year)
{
    int i,evenDollars=0,oddDollars=0,dollarsLeft,dollarsYear,age=18,dollars;
    int evenDollarsLeft,oddDollarsLeft,requireDollars;
    for(i=year;i>=1800;i--)
    {
        if(i%2==0)
        {
            evenDollars = evenDollars+12000;
        }
        else
        {
            age++;
            oddDollars= oddDollars + 12000+(50*age);
        }
    }
    dollars = evenDollars+oddDollars;
    if(dollars<money)
    {
        dollarsLeft =  money-dollars;
        return dollarsLeft;
    }
    else
    {
        requireDollars =  dollars-money;
        return requireDollars;
    }
    
}