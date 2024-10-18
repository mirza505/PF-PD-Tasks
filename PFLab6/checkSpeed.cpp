#include<iostream>
using namespace std;
string checkSpeed(float);
main()
{
    float speed;
    cout<<"Please enter your speed:";
    cin>>speed;
    cout<<checkSpeed(speed);


}
string checkSpeed(float carSpeed)
{
     if(carSpeed>1000)
    {
        return "Extremely Fast";

    }
    if(carSpeed>150 && carSpeed<=1000)
    {
        return "Ultra Fast";

    }
    if(carSpeed>50 && carSpeed<=150)
    {
        return "Fast";

    }
    if(carSpeed>10 && carSpeed<=50)
    {
        return "Average";

    }
    if(carSpeed<=10 )
    {
        return "Slow";

    }
    
}