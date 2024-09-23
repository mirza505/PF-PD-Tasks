#include<iostream>
using namespace std;
main()
{
	
cout<<"Enter your marks and check your grade\n";
int marks;
cin>>marks;
if(marks>=80 && marks<=100)
cout<<"Your grade is A";
else if(marks>=75)
cout<<"Your grade is B";
else if(marks>=70)
cout<<"Your grade is C";
else if(marks>=65)
cout<<"Your gade is D";
else if(marks>=60)
cout<<"You grade is E";
else if(marks<60)
cout<<"Fail";
else 
cout<<"Invalid Input";