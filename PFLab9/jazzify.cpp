#include<iostream>
using namespace std;
void jazzify(string arr[],int size);
main()
{
    string arr[50];
    int size,i;
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter "<<size<<" elements of array, one per line"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    jazzify(arr,size);
}
void jazzify(string array[], int size)
{
    int i,j;
    bool flag=false;
    for(i=0;i<size;i++)
    {
        for(j=0;array[i][j]!='\0';j++)
        {
            if(array[i][j]!='7')
            {
                flag = true;
            }
            if(array[i][j]=='7')
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            array[i] = array[i]+"7";
            cout<<array[i];
        }
        else
         {
            cout<<array[i];
        }
    }
}