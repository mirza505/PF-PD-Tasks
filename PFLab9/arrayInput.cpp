#include<iostream>
using namespace std;
main()
{
    int n,i;
    cout<<"Enter n: ";
    cin>>n;
    int array[n];
    for(i=0;i<n;i++)
    {
        cin>>array[i];
        cout<<i<<" element: "<<array[i]<<endl;
    }



}