#include<iostream>
using namespace std;
bool areSameNumbers(int , int , int);
main()
{
    int n1, n2, n3;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    cout<<"Enter the third number: ";
    cin>>n3;
    cout<<areSameNumbers(n1,n2,n3);
}
bool areSameNumbers(int n1,int n2,int n3)
{
    if(n1==n2 && n1==n3)
    return 1;
    if(n1!=n2 || n1!=n3)
    {
        return 0;

    }

}