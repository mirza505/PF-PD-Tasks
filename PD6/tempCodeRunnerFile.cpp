#include<iostream>
using namespace std;
string decideActivity(string , string);
main()
{
    string humidity, temperature;
    cout<<"Enter the temperature: ";
    cin>>temperature;
    cout<<"Enter the humidty: ";
    cin>>humidity;
    cout<<decideActivity(temperature,humidity);
}
string decideActivity(string temperature,string humidity)
{
    if(temperature=="warm" && humidity=="dry")
    {
        return "Play Tennis";

    }
    if(temperature=="warm" && humidity=="humid")
    {
        return "Swim";

    }
    if(temperature=="cold" && humidity=="dry")
    {
        return "Play BasketBall";

    }
    if(temperature=="cold" && humidity=="humid")
    {
        return "Watch TV";

    }







}