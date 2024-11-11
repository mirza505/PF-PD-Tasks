#include<iostream>
using namespace std;
int countDigit(int);
main()
{
    int n, result;
    cout<<"Enter the number: ";
    cin>>n;
    result = countDigit(n);
    cout<<result;
}
int countDigit(int number)
{
    int digit =0;
    if(number==0)
    {
        digit = 1;
        return digit;
    }
    if(number<0)
    {
        number = (-1)*number;
    }
    while(number!=0)
    {
        number = number/10;
        digit++;

    }
    return digit;




}
