#include<iostream>
using namespace std;
int triangleDots(int);
main()
{
    int triangle,result;
    cout<<"Enter the triangular: ";
    cin>>triangle;
    result= triangleDots(triangle);
    cout<<result;
}
int triangleDots(int triangle)
{
    int i=1,dots=0;
    for(i=1;i<=triangle;i++)
    {
        dots = dots+i;
    }
    return dots;
}