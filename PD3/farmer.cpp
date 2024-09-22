#include<iostream>
using namespace std;
main()
{

float p_veg_kg, p_fruits_kg, earning;
int t_veg, t_fruits;
cout<<"Enter the price of vegetables per kilogram (in coins)";
cin>>p_veg_kg;
cout<<"Enter the price of fruits per kilogram (in coins)";
cin>>p_fruits_kg;
cout<<"Enter the total kilograms of vegetables";
cin>>t_veg;
cout<<"Enter the total kilograms of fruits";
cin>>t_fruits;
earning = t_veg*p_veg_kg*1.94  + t_fruits*p_fruits_kg*1.94;


cout<<"Farmer's total earning in rupees = "<<earning;







}