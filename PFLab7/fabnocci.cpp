#include<iostream>
using namespace std;
void generateFabnocci(int );
main()
{
    int lengthFabnocci;
    cout<<"Enter length of fabnocci series: ";
    cin>>lengthFabnocci;
    generateFabnocci(lengthFabnocci);
}
void generateFabnocci(int length)
{
    int n1=0;
    int n2=1;
    int next,x=1;
    if(length>=2)
    {
    cout<<n1<<","<<n2;
    }
    else
    {
        cout<<n1;
    }
    while(x<=length-2)
    {
        
        next = n1+n2;
        cout<<","<<next;
        n1 = n2;
        n2 = next;
        x++;


    }




}