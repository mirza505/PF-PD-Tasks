#include<iostream>
using namespace std;
string flowerStem(string,int,int,int);
main()
{
    string flower;
    int water,fertilizer,temperature;
    string result;
    cout<<"Enter the flower type: ";
    cin>>flower;
    cout<<"Enter the water: ";
    cin>>water;
    cout<<"Enter the fertilizer: ";
    cin>>fertilizer;
    cout<<"Enter the temperature; ";
    cin>>temperature;
    result = flowerStem(flower,water,fertilizer,temperature);
    cout<<result;
}
string flowerStem(string flowerType,int water,int fert,int temp)
{
    int i,j,k,l;
    string stem = "-",flowerCount,segment,segmentCount;
    for(i=1;i<water;i++)
    {
        stem = "-" + stem;
            
    }
    if(temp>=20 && temp<=30)
    {
        flowerCount = flowerType;
         for(j=1;j<fert;j++)
        {
            flowerCount = flowerCount + flowerType;
            
        }
        segment = stem+flowerCount;
        for(k=1;k<water;k++)
        {
            segment = segment + stem +flowerCount;
            
        }
    }
    else
    {
        segmentCount = stem;
        for(l=1;l<water;l++)
        {
            segmentCount = segmentCount + stem ;
            
        }
        segment = segmentCount+flowerType;
    }
    return segment;
    
}