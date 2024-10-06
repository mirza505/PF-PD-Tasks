#include<iostream>
using namespace std;
void myFunction();
int x = 10;
int main()
{
    myFunction();
    int x = 30;
    cout<<"x = "<<x;
    myFunction();



}
void myFunction()
    {

        cout<<"x = "<<x;
        int x = 30;


    }