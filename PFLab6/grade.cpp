#include<iostream>
using namespace std;
string grade(int);
main()
{
    int marks;
    string result;
    cout<<"Enter your marks:";
    cin>>marks;
    result = grade(marks);
    cout<<"Your grade is "<<result;
}
string grade(int marks)
{
    string grade_stu;
    if(marks>85)
    {
        grade_stu = "A";
    }
    if(marks>80 && marks<85)
    {
        grade_stu = "B";
    }
    if(marks>70 && marks<80)
    {
        grade_stu = "C";
    }
    if(marks>61 && marks<70)
    {
        grade_stu = "D";
    }
    if(marks>50 && marks<60)
    {
        grade_stu = "E";
    }
    if(marks<50)
    {
        grade_stu = "F";
    }
    return grade_stu;

}