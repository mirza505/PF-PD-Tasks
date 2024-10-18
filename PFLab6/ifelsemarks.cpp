#include<iostream>
using namespace std;
string result(int);
main()
{
	int marks;
	string resultStudent;
	cout<<"Enter your marks:";
	cin>>marks;
	resultStudent = result(marks);
	cout<<resultStudent;

}

string result(int stu_marks)
{
	string stu_status;
	if(stu_marks>50)
	{
		stu_status = "You are passed with " + to_string(stu_marks) + " marks";


	}
	else
	{
		stu_status = "You are fail with " + to_string(stu_marks) + " marks";


	}
	return stu_status;




}
