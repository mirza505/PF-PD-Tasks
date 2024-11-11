#include<iostream>
#include<cmath>
using namespace std;
main()
{
    int count;
    float p1,p2,p3,p4,p5=0;
    cout<<"Enter the count: ";
    cin>>count;
    int i=1,number;
    while(i<=count)
    {
        cout<<"Enter a number: ";
        cin>>number;
        i++;
         if(number>=1 && number<=200)
         {
            p1 = p1+1;
         }
         if(number>200 && number<=400)
         {
             p2 = p2+1;
         }
         if(number>400 && number<=600)
         {
             p3 = p3+1;
         }
         if(number>600 && number<=800)
         {
            p4 = p4+1;
         }
         if(number>800 && number<=1000)
         {
             p5 = p5+1;
         }
    }
    p1 = (p1/count)*100;
    p2 = (p2/count)*100;
    p3 = (p3/count)*100;
    p4 = (p4/count)*100;
    p5 = (p5/count)*100;
    cout<<(round(p1*100))/100.0<<"%"<<endl<<(round(p2*100))/100.0<<"%"<<endl<<(round(p3*100))/100.0<<"%"<<endl<<(round(p4*100))/100.0<<"%"<<endl<<(round(p5*100))/100.0<<"%";
}

