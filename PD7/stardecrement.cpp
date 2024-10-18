#include<iostream>
using namespace std;
main()
{
    int rows,i,j;
    cout<<"Enter the desired number of rows: ";
    cin>>rows;
    for(i=rows;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
    cout<<endl;
    }
}