#include<iostream>
using namespace std;
void test(int marks);
main()
{
int marks;
cout<<"Enter your marks:";
cin>>marks;
test(marks);

}

void test(int x)
{

if(x>=50 && x<=100)
cout<<"Pass";
if(x<50)
cout<<"Fail";
}