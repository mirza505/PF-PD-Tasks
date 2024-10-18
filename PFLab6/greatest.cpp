#include<iostream>
using namespace std;
int greatestNumber(int , int , int);
main()
{
    int n1, n2, n3,result;
    cout<<"Enter the first number:";
    cin>>n1;
    cout<<"Enter the second number:";
    cin>>n2;
    cout<<"Enter the third number:";
    cin>>n3;
    result = greatestNumber(n1,n2,n3);
    cout<<"Greater number among  "<<n1<<n2<<n3<<" = "<<result;
}
int greatestNumber(int n1, int n2, int n3)
{
    int greater;
    if(n1>n2 && n1>n3)
    {
        greater = n1;
    }
    if(n2>n1 &&n2>n3)
    {
        greater = n2;
    }
    if(n3>n1 && n3>n2)
    {
        greater = n3;
    }
    return greater;


}