#include<iostream>
using namespace std;
main()
{
    string fruits[4]={"peach","apple","mango","guava"};
    int fruitsPrice[4]={200,150,300,100};
    int calculatePrice[4];
    int quantity,i,price;
    string fruit;
    //cout<<"Enter the fruit name: ";
    //cin>>fruit;
    //cout<<"Enter the quantity(kiograms): ";
    //cin>>quantity;
    cout<<"Enter the fruit name and quantity,one per line:"<<endl;
    for(i=0;i<4;i++)
    {
        cin>>fruit;
        cin>>quantity;
        if(fruits[i]==fruit)
        {   
            price = quantity*fruitsPrice[i];
            calculatePrice[i] = price; 

        }
    }
    for(i=0;i<4;i++)
    {
        cout<<calculatePrice[i]<<endl;
    }

}