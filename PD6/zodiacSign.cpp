#include<iostream>
using namespace std;
void zodiacSign(int , string );
main()
{
    int date;
    string month;
    cout<<"Enter the day: ";
    cin>>date;
    cout<<"Enter the month(e.g. january,feb,march e.t.c)";
    cin>>month;
    zodiacSign(date,month);

}
void zodiacSign(int date, string month)
{
    if(month=="march" || month=="april")
    {
        if(month=="march")
        {
            if(date>= 21 && date <=31) 
            {
                cout<<"Aries";
            } 
        }
        else if(date>=1 && date<=19)
        {
            cout<<"Aries";
        }
       
    }
    if(month=="april" || month=="may")
    {
        if(month=="april")
        {
            if(date>= 20 && date<=30 )
            {
                cout<<"Taurus";
            }    
        }
        else if(date>=1 && date <=20)
        {
            cout<<"Taurus";
        }
       
    }
    if(month=="may" || month=="june")
    {
        if(month=="may")
        {
            if(date>= 21 && date<=31)
            {
            cout<<"Gemini";
            }
        }
        else if( date>=1 && date <=20)
        {
        cout<<"Gemini";
        }
    }
    if(month=="june" || month=="july")
    {
        if(month=="june")
        {
            if(date>= 21 && date<=30)
            {
            cout<<"Cancer";
            }

        }
        else if(date>=1 && date<=22)
        {
            cout<<"Cancer";

        }
    }
    if(month=="july" || month=="august")
    {
        if(month=="july")
        {
            if(date>= 23 && date<=31) 
            {
            cout<<"Leo";
            }
        }
        else if(date>=1 && date<=22)
        {
            cout<<"Leo";
        }
    }
    if(month=="august" || month=="semptember")
    {
        if(month=="august")
        {
            if(date>= 23&& date<=31) 
            {
                cout<<"Virgo";
            }
        }
        else if(date>=1 && date <=22)
        {
            cout<<"Virgo";
        }
    }
    if(month=="september" || month=="october")
    {
        if(month=="september")
        {
            if(date>= 23 && date <=30)
            {
            cout<<"Libra";
            }
        }
        else if(date>=1 && date<=22)
        {
            cout<<"Libra";
        }
    }
    if(month=="october" || month=="november")
    {
        if(month=="october")
        {
            if(date>= 23 && date <=31)
            {
                cout<<"Scorpio";
            }
        }
        else if(date>=1 && date<=21)
        {
            cout<<"Scorpio";
        }    
    }
    if(month=="november" || month=="december")
    {
        if(month=="november")
        {
            if(date>= 22 && date <=30)
            {
                cout<<"Sagittarius";
            }
        }
        else if(date>=1 && date<=21)
        {
            cout<<"Sagittarius";
        }
    }
    if(month=="december" || month=="januray")
    {
        if(month=="december")
        {
            if(date>= 22 &&date<=31)
            {
                cout<<"Capricon";
            }
        }
        else if(date>=1 && date<=19)
        {
            cout<<"Capricon";
        }
    }
    if(month=="januray" || month=="february")
    {
        if(month=="january")
        {
            if(date>= 20 &&date <=31)
            {
            cout<<"Aquarius";
            }
        }
        else if(date>=1 && date<=18)
        {
            cout<<"Aquarius";
        }
    }

}