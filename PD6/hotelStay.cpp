#include<iostream>
using namespace std;
string hotelStay(string,int);
main()
{
    string month,result;
    int days;
    cout<<"Enter the month: ";
    cin>>month;
    cout<<"Enter number of days for stay: ";
    cin>>days;
    result = hotelStay(month,days);
    cout<<result;

}
string hotelStay(string month, int days)
{
    float billStudio, billApartment,discountStudio,discountApartment;
    string output;
    if(month=="may"||"october")
    {
        billStudio = 50*days;
        billApartment = 65*days;
        if(days>7 && days<=14 )
        {
            billStudio = billStudio-billStudio*0.05;
        }
        else if(days>14)
        {
            billStudio= billStudio-billStudio*0.3;
            billApartment = billApartment-billApartment*0.1;
        }
    }
    if(month=="june"||"september")
    {
        billStudio = 75.20*days;
        billApartment = 68.70*days;
        if(days>14)
        {
            billStudio = billStudio-billStudio*0.2;
            billApartment = billApartment-billApartment*0.1;
        }
        
    }
    if(month=="july"||"august")
    {
        billStudio = 76*days;
        billApartment = 77*days;
        if(days>14)
        {
            billApartment = billApartment-billApartment*0.1;
        }
    }
    output = "Studio: "  + to_string(billStudio)+ + " $" + "\n"  + "Apartment: " + to_string(billApartment ) + " $"; 
    return output;



}