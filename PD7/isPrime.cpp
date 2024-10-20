#include<iostream>
using namespace std;
bool isPrime(int);
main()
{
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    cout<<isPrime(number);
}
bool isPrime(int num)
{
    int i;
    for(i=2;i<=num-1;i++)
    {
        if(num%i==0 )
        {
            return 0;
        }
    }
    return 1;
}