#include<iostream>
using namespace std;
void Vote(int);
main()
{

int age;
cout<<"Enter your age:"<<endl;
cin>>age;
Vote(age);


}

void Vote(int x)
{
if(x>=18)
cout<<"You are eligible for vote";
if(x<18)
cout<<"Your are not eligible for vote";

}