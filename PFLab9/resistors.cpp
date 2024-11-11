#include<iostream>
using namespace std;
main()
{
    int num,i;
    cout<<"Enter the number of resistors connected in the circuit: ";
    cin>>num;
    float arr[num], sum=0;
    cout<<"Enter "<<num<<" values, one per line"<<endl;
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout<<sum;
    
}