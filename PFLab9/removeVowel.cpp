#include<iostream>
using namespace std;
void removeVowels(string);
main()
{
    string s,result;
    cout<<"Enter the string: ";
    getline(cin,s);
    removeVowels(s);
    //cout<<result;
}
void removeVowels(string str)
{
    int i=0,count=0;
    char space= ' ';
    string newString=" "; 
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    for(i=0;i<count;i++)
    {
        if(str[i]!='A'&&str[i]!='a'&&str[i]!='E'&&str[i]!='e'&&str[i]!='I'&&str[i]!='i'&&str[i]!='O'&&str[i]!='o'&&str[i]!='U'&&str[i]!='u')
        {
            newString[i] = str[i]; 
            newString=newString+newString[i];
            //cout<<newString[i]<<endl;
        }
        if(str[i]==space)
        {
            cout<<" ";
        }
        
    }
    //cout<<newString;
    //return newString;
    
}