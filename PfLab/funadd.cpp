#include<iostream>
using namespace std;
void add(int , int );
main()
{

int n1,n2;
cout<<"Enter n1"<<endl;
cin>>n1;
cout<<"Enter n2"<<endl;
cin>>n2;
add(n1,n2);

}
void add(int x, int y){

int add;
add = x+y;
cout<<"Sum of numbers = "<<add;


}