#include<iostream>
using namespace std;
void howmanystickers(int);
main()
{
int n;
cout<<"Enter the number of sides n"<<endl;
cin>>n;
howmanystickers(n);


}
void howmanystickers(int s)
{
   int stickers;
stickers = s*s*6;
cout<<"Numbers of stickers in rubiks's cube = "<<stickers;

}