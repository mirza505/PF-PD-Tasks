#include<iostream>
using namespace std;
int cube(int );
int cubeBuilding(int number);
main()
{
    int volume,result;
    cout<<"Enter the number: ";
    cin>>volume;
    result = cubeBuilding(volume);
    cout<<result;
}
int cubeBuilding(int volume)
{
    int i=1,p=i;
    for(i=1;p<=volume;i++)
    {
        p = cube(p)+cube(p-i);
    }
    cout<<p;

}
int cube(int n)
{
     n = n*n*n;
return n;
}