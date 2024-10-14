#include<iostream>
using namespace std;
float percentage(int,int,int,int,int);
string studentGrade(float);
main()
{
    int marksEng, marksMath, marksChem,marksSoScience,marksBio;
    string studentName;
    float result;
    cout<<"Enter the student name: ";
    cin>>studentName;
    cout<<"Enter the marks for english: ";
    cin>>marksEng;
    cout<<"Enter the marks for math: ";
    cin>>marksMath;
    cout<<"Enter the marks for chemistry: ";
    cin>>marksChem;
    cout<<"Enter the marks for social sciences: ";
    cin>>marksSoScience;
    cout<<"Enter the marks for biology: ";
    cin>>marksBio;
    result = percentage(marksEng,marksMath,marksChem,marksSoScience,marksBio);
    cout<<"Student Name: "<<studentName;
    cout<<"Percentage = "<<result<<"%"<<endl;
    cout<<"Grade = "<<studentGrade(result);
}
float percentage(int marksEng , int marksMath,int marksSoScience, int marksChem,int marksBio)
{
    float stuPercentage;
    int totalMarks = marksEng + marksMath + marksChem + marksSoScience + marksBio;
    stuPercentage = (totalMarks*100)/500;
    return stuPercentage;

}
string studentGrade(float percentage)
{
    if(percentage>90 && percentage<=100)
    {
        return "A+";

    }
    if(percentage>80 && percentage<=90)
    {
        return "A";

    }
    if(percentage>70 && percentage<=80)
    {
        return "B+";

    }
    if(percentage>60 && percentage<=70)
    {
        return "B";

    }
    if(percentage>50 && percentage<=60)
    {
        return "C";

    }
    if(percentage>40 && percentage<=50)
    {
        return "D";

    }
    if(percentage<40 && percentage>=0)
    {
        return "F";

    }
    





}