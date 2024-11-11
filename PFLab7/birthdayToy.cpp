#include<iostream>
using namespace std;
string WashingMachinePrice(int , int , int);
main()
{
    int age,priceMachine,priceToy;
    string result;
    cout<<"Enter the age: ";
    cin>>age;
    cout<<"Enter the washing machine price: ";
    cin>>priceMachine;
    cout<<"Enter the price of each toy: ";
    cin>>priceToy;
    result = WashingMachinePrice(age,priceMachine,priceToy);
    cout<<result;

}
string WashingMachinePrice(int age, int machinePrice , int toyPrice)
{
    int i = 1,money=10, evenSaving = 0 , oddSaving =0, totalSaving=0, net, requireMoney;
    string answer;
    for(i=1;i<=age;i++)
    {
        if(i%2==0)
        {
            
                evenSaving = evenSaving + money;
                money+=10;
                evenSaving-=1;
            
        }
        if(i%2!=0)
        {
            oddSaving = oddSaving + toyPrice;
        }
    }
    totalSaving = oddSaving + evenSaving;
    net = totalSaving - machinePrice;
    requireMoney = machinePrice-totalSaving;
    if(totalSaving>machinePrice)
    {
        answer = "Yes! You have " + to_string(net)+" money left";
    }
    else
    {
        answer = "No! you need " + to_string(requireMoney)+" money";
    }
    return answer;

}