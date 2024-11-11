#include<iostream>
using namespace std;
float pokemonDamage(string,string,int,int);
main()
{
    string yourType,opponentType;
    int yourAttack,opponentDefense;
    float result;
    cout<<"Enter your type: ";
    cin>>yourType;
    cout<<"Enter the opponent type: ";
    cin>>opponentType;
    cout<<"Enter your attack: ";
    cin>>yourAttack;
    cout<<"Enter the opponent defense power: ";
    cin>>opponentDefense;
    result = pokemonDamage(yourType,opponentType,yourAttack,opponentDefense);
    cout<<"Damage = "<<result;

}
float  pokemonDamage(string yourType,string opponentType,int yourAttack,int opponentDefense)
{
    float effectiveness=1;
    if(yourType=="fire" && opponentType=="grass")
    {
        effectiveness = 2;
    }
    else if(yourType=="fire" && opponentType=="water")
    {
        effectiveness = 0.5;
    }
    else if(yourType=="fire" && opponentType=="electric")
    {
        effectiveness = 1;
    }
    else if(yourType=="water" && opponentType=="grass")
    {
        effectiveness = 0.5;
    }
    else if(yourType=="water" && opponentType=="electric")
    {
        effectiveness = 0.5;
    }
    else if(yourType=="grass" && opponentType=="electric")
    {
        effectiveness = 1;
    }
    else if(yourType=="grass" && opponentType=="fire")
    {
        effectiveness = 0.5;
    }
    else if(yourType=="water" && opponentType=="fire")
    {
        effectiveness = 2;
    }
    else if(yourType=="grass" && opponentType=="water")
    {
        effectiveness = 2;
    }
    else if(yourType=="electric" && opponentType=="water")
    {
        effectiveness = 0.5;
    } 
    float damage = 50*(yourAttack/opponentDefense)*effectiveness;
    return damage;
}