#include<iostream>
using namespace std;
bool canPayWithChange(double arr[],double change);
main()
{
    double array[50],dueAmount;
    bool result;
    cout<<"Enter the due amount: $";
    cin>>dueAmount;
    cout<<"Enter the quarters: ";
    cin>>array[0];
    cout<<"Enter the dimes: ";
    cin>>array[1];
    cout<<"Enter the nickels: ";
    cin>>array[2];
    cout<<"Enter the pennies: ";
    cin>>array[3];
    result = canPayWithChange(array,dueAmount);
    cout<<"Can you pay the amount? "<<result;
}
bool canPayWithChange(double arr[],double dueAmount)
{
    int sum=0,quarters=0,dimes=1,nickles=2,pennies=3;;
    for(int i=0;i<4;i++)
    {
        if(quarters==i)
        {
            arr[i]=arr[i]*0.25;
            sum = sum+arr[i];
        }
        else if(dimes==i)
        {
            arr[i]=arr[i]*0.10;
            sum = sum+arr[i];
        }
        else if(nickles==i)
        {
            arr[i]=arr[i]*0.05;
            sum = sum+arr[i];
        }
        else if(pennies==i)
        {
            arr[i]=arr[i]*0.01;
            sum = sum+arr[i];
        }
    }
    if(sum>=dueAmount)
    {
        return true;
    }
    else
    {
        return false;
    }
}