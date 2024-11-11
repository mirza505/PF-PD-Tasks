#include<iostream>
using namespace std;
int digitSum(int);
main()
{
    int number,result;
    cout<<"Enter the number: ";
    cin>>number;
    result = digitSum(number);
    cout<<result;
    
}
int digitSum(int num)
{
    int digit,sum=0;
    while(num!=0)
    {
        digit = num%10;
        sum = sum+digit;
        num = num/10;
    }
    return sum;


}