#include<iostream>
void checkPosition(char arr[],int);
using namespace std;
main()
{
    string word;
    int i,j=0,count=0;
    cout<<"Enter a word: ";
    cin>>word;
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
    char w[count];
    for(i=0;i<count;i++)
    {
        w[j] = word[i];
        j++;
    }
    cout<<w<<endl;
    checkPosition(w,count);
    
}
void checkPosition(char w[],int count)
{
    int i;
     for(i=0;i<count;i++)
    {
        cout<<w[i]<<" found at position "<<i<<endl;
    }
  

}

