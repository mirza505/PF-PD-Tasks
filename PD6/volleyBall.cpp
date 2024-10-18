#include <iostream>
using namespace std;
 int calculateVolleyballGames(string year,int holidays,int weekend);
main()
{
    string year;
    int holidays,weekend,result;
    cout<<"Enter the year type(Loop/Normal): ";
    cin>>year;
    cout<<"Enter the number of holidays: ";
    cin>>holidays;
    cout<<"Enter the number of hometown weekends: ";
    cin>>weekend;
    result = calculateVolleyballGames( year, holidays, weekend);
    cout<<result;


}
int calculateVolleyballGames(string year,int holidays,int weekend)
{
    float total_weekend,total_holidays;
    float total_plays;
    total_weekend = (3*(48-weekend))/4;
    total_holidays = (2*holidays)/3;
    total_plays= total_weekend + total_holidays + weekend;
    if (year == "Leap")
    {
        total_plays = (total_plays) + (total_plays)*0.15;
    }
    else
    {
        total_plays = total_plays;
    }
    return total_plays;
}

