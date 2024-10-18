#include<iostream>
using namespace std;
string amountFootball(int , int , string);
main()
{
    int budget, people;
    string result, ticketType;
    cout<<"Enter the number of people: ";
    cin>>people;
    cout<<"Enter your budget: ";
    cin>>budget;
    cout<<"Enter the ticket type:";
    cin>>ticketType;
    result = amountFootball(people,budget,ticketType);
    cout<<result; 

}
string amountFootball(int people, int budget, string ticket)
{
    float ticketCost, amountAfterTransport, netAmount;
    string answer;
    if(ticket=="VIP")
    {
        ticketCost = 499.99*people; 

    }
    if(ticket=="Normal")
    {
        ticketCost = 249.99*people; 

    }
    if(people>=1 && people<=4)
    {
        amountAfterTransport = budget- budget*(75.0/100.0);
        netAmount = amountAfterTransport - ticketCost;
        if(amountAfterTransport>ticketCost)
        {
           
            answer = "Yes! You have " + to_string(netAmount) + " leva left"; 

        }
        else
        {
             answer = "Not enough money! You need " + to_string(netAmount) + " leva ";

        }
    }
     if(people>=5 && people<=9)
    {
        amountAfterTransport = budget- budget*(60.0/100.0);
        netAmount = amountAfterTransport - ticketCost;
       if(amountAfterTransport>ticketCost)
        {
            
            answer = "Yes! You have " + to_string(netAmount) + " leva left"; 

        }
        else
        {
             answer = "Not enough money! You need " + to_string(netAmount) + " leva ";

        }
    }
     if(people>=10 && people<=24)
    {
        amountAfterTransport = budget- budget*(50.0/100.0);
        netAmount = amountAfterTransport - ticketCost;
        if(amountAfterTransport>ticketCost)
        {
           
            answer = "Yes! You have " + to_string(netAmount) + " leva left"; 

        }
        else
        {
             answer = "Not enough money! You need " + to_string(netAmount) + " leva ";

        }
    }
     if(people>=25 && people<=49)
    {
        amountAfterTransport = budget- budget*(40.0/100.0);
        netAmount = amountAfterTransport- ticketCost;
        if(amountAfterTransport>ticketCost)
        {
            
            answer = "Yes! You have " + to_string(netAmount) + " leva left"; 

        }
        else
        {
             answer = "Not enough money! You need " + to_string(netAmount) + " leva ";

        }
    }
     if(people>=50)
    {
        amountAfterTransport = budget- budget*(25.0/100.0);
        netAmount = amountAfterTransport - ticketCost;
       if(amountAfterTransport>ticketCost)
        {
            
            answer = "Yes! You have " + to_string(netAmount) + " leva left"; 
        }
        else
        {
             answer = "Not enough money! You need " + to_string(-(netAmount)) + " leva ";

        }
        
    }
    

    return answer;



}