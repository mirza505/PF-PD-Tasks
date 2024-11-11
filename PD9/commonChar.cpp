#include<iostream>
using namespace std;
int commonChar(string ,string);
main()
{
    string s1,s2;
    int result;
    cout<<"Enter the string 1: ";
    cin>>s1;
    cout<<"Enter the string 2; ";
    cin>>s2;
    result = commonChar(s1,s2);
    cout<<"Common caharacters: "<<result;
}

int commonChar(string str1,string str2)
{
    int i=0,j=0,count1=0,count2=0,common=0;

    while(str1[i]!='\0')
    {
        count1++;
        i++;
    }

    while(str2[j]!='\0')
    {
        count2++;
        j++;
    }

    for(i=0;i<count1;i++)
    {
        for(j=0;j<count2;j++)
        {
            if(str1[i]==str2[j])
            {
                common+=1;
                str2[j]='\0';
            }
        }
    }
    return common;

}