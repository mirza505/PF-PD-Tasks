#include<iostream>
using namespace std;
string binaryRepresentation(int);
main()
{
    int number;
    string result;
    cout<<"Enter a number: ";
    cin>>number;
    result = binaryRepresentation(number);
    cout<<result;
}
string binaryRepresentation(int num)
{
    int i,binaryDigits,sum=0;
    string  result=" ";
    bool flag = true;
    while(num!=0)
    {
        binaryDigits = num%2;
        num= num/2;
        sum = sum+binaryDigits;
    }
    if(sum%2!=1)
    {
        result += "Evil";
    }
    if(sum%2==1)
    {
        result += "Odious";
    }
    for(i=2;i<sum;i++)
    {
        if(sum%i==0)
        {
            flag = false;
        }
        
    }
    if(flag)
    {
        result += " Pernicious";
    }
    return result;
    

}
