#include<iostream>
using namespace std;
void upper(int);
void lower(int);
main()
{
    int rows;
    cout<<"Enter the desired number of rows: ";
    cin>>rows;
    upper(rows);
    lower(rows);
    
}
void upper(int rows)
{
    int upperRows = rows/2;
    int i,j;
    for(i=1;i<=upperRows;i++)
    {
        for(j=1;j<=16;j++)
        {
            if(j<=16-i)
            cout<<" ";
            else
            cout<<"*";
        }
        cout<<"\n";

    }

}
void lower(int rows)
{
    int lowerRows = rows/2;
    int m,n;
    for(m=lowerRows;m>=1;m--)
    {
        for(n=1;n<=16;n++)
        {
            if(n<=16-m)
            cout<<" ";
            else
            cout<<"*";
        }
        cout<<"\n";

    }

}