#include<iostream>
using namespace std;
main()
{
    string s="somthing ";
    string argument;
    cout<<"Enter the argument: ";
    getline(cin,argument);
    cout<<s+argument;
}