#include<iostream>
using namespace std;
void add(int , int );
main()
{

int a,b;
char op;
cout<<"Enter a and b"<<endl;
cin>>a>>b;
cout<<"Enter the operator(+,-,*,/):"<<endl;
cin>>op;
if(op=='+')
{
add(a,b);
}

}
void add(int x,int y)
{
int add = x+y;
cout<<"Sum of two numbers = "<<add;

}
