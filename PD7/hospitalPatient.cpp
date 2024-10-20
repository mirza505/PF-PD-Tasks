#include<iostream>
using namespace std;
string hospitalPatient(int n);
main()
{
    int days;
    string result;
    cout<<"Enter the number of days: ";
    cin>>days;
    result = hospitalPatient(days);
}
string hospitalPatient(int d)
{
    string answer;
    int treated=0,untreated=0,totalTreated=0,totalUntreated=0,doctors=7; 
    int i,patients;
    for(i=1;i<=d;i++)
    {
        cout<<"Enter the patients visited for Day "<<i<<": ";
        cin>>patients;
        if(patients>doctors)
        {
            treated = doctors;
            untreated = patients-treated;

        }
        else
        {
            treated = patients;
            untreated = 0;
        }
        totalTreated = totalTreated+treated;
        totalUntreated = totalUntreated+untreated;
        if(i==2)
        {
            if(totalTreated<totalUntreated)
            {
                doctors++;
            }
        }
        
    }
    answer = "Total Treated: " + "\n" + "Total Untreated: " + to_string(totalTreated) + to_string (totalUntreated);
    return answer;
}