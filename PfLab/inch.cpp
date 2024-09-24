#include<iostream>
using namespace std;
void measure(float x);
main()
{
float inch;
cout<<"Enter the measurement in inches"<<endl;
cin>>inch;
measure(inch);

}
void measure(float x)
{
float feet;
feet = x/12;
cout<<x<<" Inches in feet = "<<feet;


}