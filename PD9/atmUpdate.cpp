#include<iostream>
using namespace std;
void atmUpdate(string);
main()
{
    string pin;
    int i;
    cout<<"Enter the pin: ";
    getline(cin,pin);
    for(i=0;pin[i]!='\0';i++)
    {
        if(!isdigit(pin[i]))
        {
            cout<<"Invalid input";
            return 0;
        }
    
    }
            atmUpdate(pin);
        
}

void atmUpdate(string str)
{
    int i,j=0,value,count=0;
    string array2[20];
    string array[20]= {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", 
"Pop", "Lock", "Arabesque"};
    for(i=0;str[i]!='\0';i++)
    {
        value=(str[i])-'0';
        value = value+i;
        if(value>9)
        {
            array2[i]=array[j];
            j++;
        }
        else
        {
            array2[i] = array[value];
        }
        count++;
       
    }
    for(i=0;i<count;i++)
    {
      cout<<array2[i]<<", ";
    }
}