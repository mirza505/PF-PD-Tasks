#include<iostream>
using namespace std;
float disc(string , string, float);
main()
{
    float amount, result;
    string day, month;
    cout<<"Enter the day name:";
    cin>>day;
    cout<<"Enter the month:";
    cin>>month;
    cout<<"Enter the purchase amount:";
    cin>>amount;
    result = disc(day,month, amount);
    cout<<"Payable amount = "<<result;

}
float disc(string day_name,string month, float purAmount)
{
    float disc, payable=purAmount;
    if(day_name=="sunday" && month=="october"|| month=="august" ||month=="march" )
    {
        disc = purAmount*0.1;
        payable = purAmount-disc;
    }
    else
    {
        return payable;

    }




} 