#include<iostream>
using namespace std;
void checkPosition(string);
main()
{
    string word;
    cout<<"Enter a word: ";
    cin>>word;
    checkPosition(word);
}
void checkPosition(string word)
{
    int i,j=0,count=0;
    while(j!=-1)
    {
        if(word[j] == '\0')
        {
            j= -1;
        }
        else
        {
            count++;
            j++;
        }
    }
    for(i=0;i<count;i++)
    {
        cout<<word[i]<<" found at position  "<<i<<endl;
    }

}

