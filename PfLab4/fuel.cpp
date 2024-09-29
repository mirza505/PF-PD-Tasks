#include<iostream>
using namespace std;
void distance(float);
main()
{

  float dis;
  cout<<"Enter the distance"<<endl;
  cin>>dis;
  distance(dis);

}
void distance(float x)
{
int fuel;
fuel = x*10;
cout<<"Fuel needed = "<<fuel;

}