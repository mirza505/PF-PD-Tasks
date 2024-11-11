#include<iostream>
using namespace std;
void table(int);
main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    table(n);
}
void table(int num)
{
    int i;
    for(i=1;i<=10;i++)
    {
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    }

}