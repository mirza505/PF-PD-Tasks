#include<iostream>
using namespace std;
main()
{
    int i;
    char ch;
    bool state = false;
    string s = "Huraira";
    cout<<"Enter the character: ";
    cin>>ch;
    for(i=0;i<7;i++)
    {
        if(ch==s[i])
        {
            state = true;
        }
    }
    if(state==true)
    {
        cout<<"Present";
    }
    else
    {
        cout<<"Not Present";
    }


}