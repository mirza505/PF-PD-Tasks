#include<iostream>
using namespace std;
void add(int , int);
void sub(int ,int);
void mul(int , int);
void divi(int , int);
void mod(int , int);
main()
{
  int a,b;
char op;
cout<<"Enter the value of a:";
cin>>a;
cout<<"Enter the value of b:";
cin>>b;
cout<<"Enter the operator(+,-,*,/,%)";
cin>>op;
if(op=='+')
add(a,b);
if(op=='-')
sub(a,b);
if(op=='*')
mul(a,b);
if(op=='/')
divi(a,b);
if(op=='%')
mod(a,b);

}

void add(int x,int y)
{

int sum = x+y;
cout<<"Sum = "<<sum;

}

void sub(int n1, int n2)
{

int subtraction = n1-n2;
cout<<"Subtraction = "<<subtraction;

}

void mul(int a1, int b2)
{

int multiply = a1*b2;
cout<<"Multiplication = "<<multiply;


}

void divi(int x1, int y1)
{

int division = x1/y1;
cout<<"Division = "<<division;


}

void mod(int c, int d)
{

int modulus = c%d;
cout<<"Modulus = "<<modulus;

}
















