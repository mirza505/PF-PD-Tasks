#include<iostream>
using namespace std;
string dress(int, string);
main()
{
    int dressCost;
    string brandName;
    cout<<"Enter the cost of the dress:";
    cin>>dressCost;
    cout<<"Enter the brand name:";
    cin>>brandName;
    cout<<dress(dressCost,brandName);
}
string dress(int cost, string brandName)
{
    if(cost<1500)
    {
        if(brandName=="MTJ")
        {
                return "Cograts!You can buy the dress";


        }
    else
    {

            return "Sorry the criteria doesn't meet to buy the dress";

    }

    }




}
