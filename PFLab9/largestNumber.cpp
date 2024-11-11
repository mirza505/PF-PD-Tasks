#include<iostream>
using namespace std;
int findLargest(int arr[],int);
main()
{
    int numbers,i,result;
    cout<<"Enter the number of elements: ";
    cin>>numbers;
    int arr[numbers];
    cout<<"Enter "<<numbers<<" numbers, one per line"<<endl;
    for(i=0;i<numbers;i++)
    {
        cin>>arr[i];
    }
    result = findLargest(arr,numbers);
    cout<<"Largets number = "<<result;

}
int findLargest(int arr[],int size)
{
    int largest=arr[0],i;
    for(i=1;i<size;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    return largest;
}