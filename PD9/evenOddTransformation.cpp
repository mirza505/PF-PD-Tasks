#include<iostream>
using namespace std;
main()
{
    int array[10];
    int period,i=0,j,count=0;
    bool state=true;
    cout<<"Enter the transformation period: ";
    cin>>period;
    while(state==true)
    {
        cin>>array[i];
        cout<<"Enter 1 if you want more element, otherwise press 0";
        cin>>state;
        i++;
        count++;
    }
    for(i=0;i<=period;i++)
    {
        for(j=0;j<count;j++)
        {
            if(array[j]%2==0)
            {
                array[j]=array[i]-2;
            }
            if(array[j]%2!=0)
            {
                array[j]=array[i]+2;
            }
        
        }
    }
    for(i=0;i<count;i++)
    {
        cout<<array[i];
    }
}