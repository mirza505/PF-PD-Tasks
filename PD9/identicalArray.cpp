#include<iostream>
using namespace std;
main()
{
    string array[4],firstElement= " ";
    int i;
    bool flag=false;
    cout<<"Enter the 4 elements, on per line";
    for(i=0;i<4;i++)
    {
        cin>>array[i];
    }
    firstElement = array[0];
    for(i=0;i<4;i++)
    {
        if(firstElement == array[i])
        {
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if(flag)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
} 