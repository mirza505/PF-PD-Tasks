#include<iostream>
using namespace std;
string checkLength(string );
main()
{
    string input,result;
    cout<<"Enter the string: ";
    getline(cin,input);
    result = checkLength(input);
    cout<<result;
}
string checkLength(string str)
{
    int i=0,count=0;
    while(str[i]!='\0')
    {
        count = count+1;
        i = i+1;
    }
    if(count%2!=0)
    {
        return "false";
    }
    else
    {
        return "true";
    }
}