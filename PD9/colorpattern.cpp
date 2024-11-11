#include<iostream>
using namespace std;
int colorPattern(string array[],int);
main()
{
    string colors[10];
    int i,result,count=0;
    bool state=true;
    cout<<"Enter the colors one per line"<<endl;
    for(i=0;state==true;i++)
    {
        cin>>colors[i];
        cout<<"Enter 1 if you want to add more element otherwise enter 0"<<endl;
        cin>>state;
        count++;
    }
    result = colorPattern(colors,count);
    cout<<"Total time= "<<result;
}

int colorPattern(string arr[], int count)
{
    int i,switchTime=0,colorTime=2,totalTime;;
    string color1 = arr[0],nextColor;
    for(i=1;i<count;i++)
    {
        nextColor = arr[i];
        if(nextColor!=color1)
        {
            switchTime = switchTime+1;
            colorTime = colorTime+2;

        }
        if(nextColor==color1)
        {
            colorTime = colorTime+2;

        }

        color1 = nextColor;
    }
    totalTime = colorTime+switchTime;
    return totalTime;
}