#include<iostream>
using namespace  std;
void even(int);
main()
{

int n;
cout<<"Enter an integer:";
cin>>n;
even(n);

}
void even(int x)
{
if(x%2==0)
cout<<"Even number";
if(x%2==1)
cout<<"Odd";


}