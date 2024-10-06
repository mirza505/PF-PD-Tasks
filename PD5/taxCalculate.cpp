#include<iostream>
using namespace std;
float taxCalculate(float , string);
main()
{
    float price,result;
    string vehicleCode;
    cout<<"Enter the vehicle type code():";
    cin>>vehicleCode;
    cout<<"Enter the price of vehicle: $";
    cin>>price;
    result = taxCalculate(price, vehicleCode);
    cout<<"The final price of a vehicle type "<<vehicleCode<<" after adding the tax is $"<<result;

}

float taxCalculate(float vehiclePrice, string vehicleCode)
    {
       float tax;
        float  finalPrice, taxPrice;
        if(vehicleCode=="M")
        {
            tax = 6;
            taxPrice = vehiclePrice*(tax/100);
        }
        if(vehicleCode=="E")
         {
            tax = 8;
            taxPrice = vehiclePrice*(tax/100);

        }
        if(vehicleCode=="S")
         {
            tax = 10;
            taxPrice = vehiclePrice*(tax/100);

        }
        if(vehicleCode=="V")
         {
            tax = 12;
            taxPrice = vehiclePrice*(tax/100);

        }
        if(vehicleCode=="T")
         {
            tax = 15;
            taxPrice = vehiclePrice*(tax/100);

        }
        finalPrice = vehiclePrice + taxPrice;
        return finalPrice;

    }