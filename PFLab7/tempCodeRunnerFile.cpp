#include<iostream>
using namespace std;
int howManyPrime(int);
main()
{
    int number,result;
    cout<<"Enter the number: ";
    cin>>number;
    result= howManyPrime(number);
    cout<<result;
}
int howManyPrime(int num)
{
    int i,j,product=1;
    for(i=2;i<=num;i++)
    {
        bool state=true;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                state=false;
            }
        }
        if(state==true)
        {
            product=product*i;
        }
    }
    return product;
}