#include<iostream>
using namespace std;
main()
{
    int arrayNumbers[100];
    int i=0,count=0;
    bool state=true,stateNumber=false;
    while(state==true)
    {
        cin>>arrayNumbers[i];
        cout<<"Press 1 if you want another element otherwise press 0"<<endl;
        cin>>state;
        count++;
        i++;
    }
    for(i=0;i<count;i++)
    {
        if(arrayNumbers[i]==7)
        {
            stateNumber = true;
        }
        
    }
    if(stateNumber)
    {
        cout<<"Boom";
    }
    else
    {
        cout<<"There is no 7 in the array";
    }
}