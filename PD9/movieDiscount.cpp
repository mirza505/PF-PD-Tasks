#include<iostream>
using namespace std;
main()
{
   string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
   string movieName;
   int i,price=500;
   float discount,ticketPrice;
   cout<<"Enter the movie name: ";
   cin>>movieName;
   for(i=0;i<5;i++)
   {
    if(movies[i]==movieName)
    {
        if(i%2!=0)
        {
            discount = 500*0.05;
            ticketPrice = 500-discount;
        }
        else
         if(i%2==0)
        {
            discount = 500*0.1;
            ticketPrice = 500-discount;
        }
    }
   }
    cout<<"Ticket Price = "<<ticketPrice;
}