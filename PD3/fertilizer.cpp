#include<iostream>
using namespace std;
main()
{

int s_f_p, c_b, area, c_f_p, c_sq; 
cout<<"Enter the size of fertilizer per pound"<<endl;
cin>>s_f_p;
cout<<"Enter the cost of bag"<<endl;
cin>>c_b;
c_f_p = c_b/s_f_p;
cout<<"The cost of fertilizer per pound = $"<<c_f_p<<endl;
cout<<"Enter the area per square foot tht can b covered by the bag";
cin>>area;
c_sq = c_b/area;
cout<<"Cost fertilizing per square foot = $"<<c_sq<<endl;









}