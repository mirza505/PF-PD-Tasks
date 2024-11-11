#include<iostream>
using namespace std;
void shiftString(string);
main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    shiftString(str);
}
void shiftString(string s)
{
    int i,j=0,count=0,shift;
    char charShift;
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
    
    for(i=0;i<count;i++)
    {
        shift = s[i];
        if(s[i]!=' ')
        {
            shift+=1;
        }
        if(s[i]=='Z')
        {
            shift = 65;
        }
        charShift = shift;
        cout<<charShift;
        
    }
}