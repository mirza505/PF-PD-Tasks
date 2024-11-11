#include<iostream>
using namespace std;
main()
{
    string fruits[4]={"peach","apple","mango","guava"};
    int fruitsPrice[4]={200,150,300,100};
    int calculatePrice[4];
    int quantity,i,price;
    string fruit;
    cout<<"Enter the fruit name: ";
    cin>>fruit;
    cout<<"Enter the quantity(kiograms): ";
    cin>>quantity;
    for(i=0;i<4;i++)
    {
        if(fruits[i]==fruit)
        {   
            price = quantity*fruitsPrice[i];

        }
    }
    cout<<"Total Price= "<<price;
}