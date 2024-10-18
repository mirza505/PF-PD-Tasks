#include<iostream>
using namespace std;
string checkGender(char , int);
main()
{
    char gender;
    int age;
    cout<<"Enter your gender:";
    cin>>gender;
    cout<<"Enter your age:";
    cin>>age;
    cout<<checkGender(gender,age);

}
string checkGender(char gender, int age)
{
    if(age>16 && gender=='m')
    {
        return "Mr.";

    }
    if(age<16 && gender=='m')
    {
        return "Master";

    }
    if(age>16 && gender=='f')
    {
        return "Ms.";

    }
    if(age<16 && gender=='f')
    {
        return "Miss.";

    }



}