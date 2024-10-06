#include<iostream>
#include<cmath>
using namespace std;
string firmHours(int , float , int);
main()
{
    int hours, workers, days;
    string result;
    cout<<"Enter the needed hours:";
    cin>>hours;
    cout<<"Enter the days: that the firm has:";
    cin>>days;
    cout<<"Enter the number of all workers:";
    cin>>workers;
    result = firmHours(hours, days, workers);
    cout<<result;
}
string firmHours(int neededHours, float firmDays, int firmWorkers)
{
       int findHours;
       float firmHours, trainingDays;
       string answer;
       trainingDays = firmDays*(10.0/100.0);
       firmDays = firmDays-trainingDays;
       firmHours = firmDays*firmWorkers*10;
       if(firmHours>=neededHours)
        {
            findHours = firmHours-neededHours;
            floor(findHours);
            answer = "Yes!" + to_string(findHours) + " hours left";
        }
        if(firmHours<neededHours)
        {
           findHours = neededHours - firmHours;
           floor(findHours);
            answer = "Not enough time!" + to_string(findHours) + " hours needed";

        }
    return answer;


}





