#include<iostream>
using namespace std;
float fruitPrice(string ,string, int);
main()
{
    int quantity;
    float result;
    string fruitName,dayName;
    cout<<"Enter the fruit name: ";
    cin>>fruitName;
    cout<<"Enter the day name: ";
    cin>>dayName;
    cout<<"Enter the quantity: ";
    cin>>quantity;
    result = fruitPrice(fruitName,dayName,quantity);
    cout<<result;


}
float fruitPrice(string fruit,string day, int qt)
{
    float price;
    if(fruit=="banana"  )
    {
        if(day=="monday"||"tuesday"||"wednesday"||"thrusday"||"friday")
        {
            price = 2.50*qt;
        }
        else
        {
            price = 2.7*qt;
        }
    }
    else if(fruit=="apple"  )
    {
        if(day=="monday"||"tuesday"||"wednesday"||"thrusday"||"friday")
        {
            price = 1.2*qt;
        }
        else
        {
            price = 1.25*qt;
        }
    }
    else if(fruit=="orange"  )
    {
        if(day=="monday"||"tuesday"||"wednesday"||"thrusday"||"friday")
        {
            price = 0.85*qt;
        }
        else
        {
            price = 0.90*qt;
        }
    }
    else if(fruit=="grapefruit"  )
    {
        if(day=="monday"||"tuesday"||"wednesday"||"thrusday"||"friday")
        {
            price = 1.45*qt;
        }
        else
        {
            price = 1.60*qt;
        }
    }
    else if(fruit=="kiwi"  )
    {
        if(day=="monday"||"tuesday"||"wednesday"||"thrusday"||"friday")
        {
            price = 2.70*qt;
        }
        else
        {
            price = 3.0*qt;
        }
    }
    else if(fruit=="pineapple"  )
    {
        if(day=="monday"||"tuesday"||"wednesday"||"thrusday"||"friday")
        {
            price = 5.50*qt;
        }
        else
        {
            price = 5.60*qt;
        }
    }
    else if(fruit=="grapes"  )
    {
        if(day=="monday"||"tuesday"||"wednesday"||"thrusday"||"friday")
        {
            price = 3.85*qt;
        }
        else
        {
            price = 4.20*qt;
        }
    }
    else
    {
        cout<<"Error";
    }
    return price;

}