#include<iostream>
using namespace std;
float totalIncome(string, int , int );
main()
{
    int rows, columns;
    string ticketType;
    cout<<"Enter the ticket type:";
    cin>>ticketType;
    cout<<"Enter the number of rows:";
    cin>>rows;
    cout<<"Enter the number of columns:";
    cin>>columns;
    cout<<"Total income of the cinema = "<<totalIncome(ticketType,rows,columns);
}
float totalIncome(string ticket,int rowsCinema, int columnsCinema)
{
    float income;
    if(ticket=="premiere")
    {
        income = rowsCinema*columnsCinema*12.00;

    }
    if(ticket=="normal")
    {
        income = rowsCinema*columnsCinema*7.50;

    }
    if(ticket=="discount")
    {
        income = rowsCinema*columnsCinema*5.00;

    }
    return income;



}