#include<iostream>
using namespace std;
int checkFrequency(int, int );
main()
{
    int number,digit,result;
    cout<<"Enter the number: ";
    cin>>number;
    cout<<"Enter the digit: ";
    cin>>digit;
    result = checkFrequency(number,digit);
    cout<<result;
}
int checkFrequency(int num, int digit)
{
    int n, frequency=0;
    if(num==0)
    {
        frequency = 1;
    }
    while(num!=0)
    {
        n = num%10;
        if(n==digit)
        {
            frequency = frequency+1;
        }
        num = num/10;

    }
    return frequency;

}