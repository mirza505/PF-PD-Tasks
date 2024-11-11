#include<iostream>
#include<cmath>
using namespace std;
int calculateGCD(int, int );
int calculateLCM(int , int ,int);
main()
{
    int n1,n2,resultGCD,resultLCM;
    cout<<"Enter value of n1: ";
    cin>>n1;
    cout<<"Enter value of n2: ";
    cin>>n2;
    resultGCD = calculateGCD(n1,n2);
    cout<<"GCD: "<<resultGCD;
    resultLCM = calculateLCM(n1,n2,resultGCD);
    cout<<"LCM: "<<resultLCM;

}
int calculateGCD(int num1, int num2)
{
    int n=1, maxNumber,minNumber, gcd;
    maxNumber = max(num1,num2);
    minNumber = min(num1,num2);
    while(n<=minNumber)
    {
       if((num1%n==0) && (num2%n==0))
       {
        gcd = n;
       }
        n++;
    }
return gcd;

}
int calculateLCM(int num1, int num2,int gcd)
{
    int lcm;
    lcm = (num1*num2)/gcd;
    return lcm;

}