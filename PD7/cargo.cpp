#include<iostream>
#include<iomanip>
using namespace std;
string cargo(int);
main()
{
    int countCargo;
    string result;
    cout<<"Enter the count of cargo for transportation: ";
    cin>>countCargo;
    result = cargo(countCargo);
    cout<<result;
}
string cargo(int count)
{
    cout<<fixed;
    cout<<setprecision(2);
    int i,tons,totalTons=0,totalTonsMiniBus=0,totalTonsTruck=0,totalTonsTrain=0;
    float avgPriceTon,percentage1,percentage2,percentage3;
    string answer;
    for(i=1;i<=count;i++)
    {
        cout<<"Enter the tonnage of cargo "<<i<<": ";
        cin>>tons;
        if(tons<=3)
        {
            totalTonsMiniBus = totalTonsMiniBus + tons;
            
        }
        else if(tons>3 && tons<=11)
        {
            totalTonsTruck = totalTonsTruck + tons;

        }
        else 
        {
            totalTonsTrain = totalTonsTrain + tons;

        }
        totalTons = totalTons + tons;
    }
    avgPriceTon = ((totalTonsMiniBus*200.0)+ (totalTonsTruck*175.0)+(totalTonsTrain*120.0))/totalTons;
    percentage1 = (totalTonsMiniBus*100.0)/(totalTons);
    percentage2 = (totalTonsTruck*100.0)/(totalTons);
    percentage3 = (totalTonsTrain*100.0)/(totalTons);
    answer = "Average price per ton: " + to_string(avgPriceTon) + "\n" +"Percentage by MiniBus: " + to_string(percentage1) + "%\n" +"Percentage by Truck: " + to_string(percentage2) + "%\n" +"Percentage by Train: " + to_string(percentage3) + "%\n";
}