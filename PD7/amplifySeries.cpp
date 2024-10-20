#include<iostream>
using namespace std;
void amplifySeries(int);
main()
{
    int number;
    cout<<"Enter the value of n: ";
    cin>>number;
    amplifySeries(number);
}
void amplifySeries(int n)
{
    int i,m;
    for(i=1;i<=n;i++)
    {
        if(i%4==0)
        {
            m = i*10;
            cout<<m<<",";
        }
        else
        {
            cout<<i<<",";
        }

    }
}