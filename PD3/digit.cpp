#include<iostream>
using namespace std;
main()
{

int n, n1, n2, n3, n4, sum;
cout<<"Enter the four digit number"<<endl;
cin>>n;
n1 = n%10 ;
cout<<n1<<endl;
n2 = n/10;
n2 = n2%10;
cout<<n2<<endl;
n3 = n/100;
n3 = n3%10;
cout<<n3<<endl;
n4 = n/1000;
cout<<n4<<endl;
sum = n1+n2+n3+n4;
cout<<"Sum of invididual number = "<<sum;














}