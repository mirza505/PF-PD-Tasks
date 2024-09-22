#include<iostream>
using namespace std;
main()
{

string m_name;
float c_t_p, a_t_p, c_t_s, a_t_s, t_amount, pctg, donation, n_amount;
cout<<"Enter the movie name"<<endl;
cin>>m_name;
cout<<"Enter the price of child ticket: $";
cin>>c_t_p;
cout<<"Enter the price of adult ticket: $";
cin>>a_t_p;
cout<<"Enter the number of child tickets sold: ";
cin>>c_t_s;
cout<<"Enter the number of child ticket sold: ";
cin>>a_t_s;
cout<<"Enter the share of donation: %";
cin>>pctg;
cout<<"Movie: "<<m_name<<endl;
t_amount = c_t_s*c_t_p + a_t_s*a_t_p;
cout<<"Total amount from tickets = $"<<t_amount<<endl;
donation = (pctg/100) * t_amount;
cout<<"Donation to the charity = $"<<donation<<endl;
n_amount = t_amount - donation;
cout<<"Net amount after donation = $"<<n_amount;











}