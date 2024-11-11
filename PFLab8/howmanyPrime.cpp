#include<iostream>
using namespace std;
int howManyPrime(int);
main()
{
    int integer,result;
    cout<<"Enter the integer: ";
    cin>>integer;
    result = howManyPrime(integer);
    cout<<"Prime numbers between "<<integer<<" are: "<<result;
}
int howManyPrime(int integer)
{
    int i,j,count=0;
    bool flag;
    for(i=2;i<=integer;i++)
    {
        
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=false;
                
            }
    
        }
        if(flag==true)
         count = count+1;
        
    }
    return count;
}
