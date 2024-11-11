#include<iostream>
using namespace std;
bool isSpecialArray(int arr[],int size);
main()
{
    int i,arr[50], arraySize;
    bool result;
    cout<<"Enter the size of array: ";
    cin>>arraySize;
    cout<<"Enter "<<arraySize<<" elements of array, one per line: "<<endl;
    for(i=0;i<arraySize;i++)
    {
        cin>>arr[i];
    }
    result = isSpecialArray(arr,arraySize);
    if(result==1)
    {
        cout<<"Yes special array";
    }
    else
    {
        cout<<"Not a special array";
    }
}
bool isSpecialArray(int arr[], int size)
{
    int i;
    bool flag;
    for(i=0;i<size;i++)
    {
        if(i%2==0 && arr[i]%2==0) 
        {
            flag=true;
        }
        else if(i%2!=0 && arr[i]%2!=0)
        {
            flag = true;
        }
        else
        {
        flag=false;
        break;
        }
    }
    if(flag)
    {
        return true;
    }
    else
    {
        return false;
    }
}
