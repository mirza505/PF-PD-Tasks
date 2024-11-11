#include<iostream>
using namespace std;
void reverseNumbers(int arr[], int);
main()
{
    int num,i;
    cout<<"Enter the number of element: ";
    cin>>num;
    int arr[num];
    if(num>0)
    {
        cout<<"Enter "<<num<<" number, on per line"<<endl;
        for(i=0;i<num;i++)
        {
            cin>>arr[i];

        }
        reverseNumbers(arr,num);
    }
    else
    {
        cout<<"Invalid input.Number of elements must be greater than 0";
    }
}
void reverseNumbers(int arr[],int num)
{
    int i;
    for(i=num-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }

}