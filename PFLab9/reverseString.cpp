#include<iostream>
using namespace std;
main()
{
    string s;
    int count=0,i,j=0;
    cout<<"Enter a string: ";
    cin>>s;
    while(j!=-1)
    {
        if(s[j] == '\0')
        {
            j= -1;
        }
        else
        {
            count++;
            j++;
        }
    }
    for(i=count;i>=0;i--)
    {
        cout<<s[i];
    }
}
