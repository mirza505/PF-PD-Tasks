#include<iostream>
using namespace std;
void insertArrayInMiddle(int[], int firstArraySize, int[], int secondArraySize);
int main()
{
    int i,firstArray[100], secondArray[100];
    int firstArraySize, secondArraySize;
    cout << "Enter the number of elements for the first array (must be 2): ";
    cin >> firstArraySize;
    cout << "Enter " << firstArraySize << " elements for the first array, one per line: "<<endl;
    for(i=0;i<firstArraySize;i++)
    {
        cin>>firstArray[i];
    }
    cout << "Enter the number of elements for the second array (must be 2): ";
    cin >> secondArraySize;
    cout << "Enter " << secondArraySize << " elements for the second array, one per line: "<<endl;
    for(i=0;i<secondArraySize;i++)
    {
        cin>>secondArray[i];
    }
    insertArrayInMiddle(firstArray,firstArraySize,secondArray,secondArraySize);
}
void insertArrayInMiddle(int firstArray[], int firstArraySize, int secondArray[], int secondArraySize)
{
    int i,j,newArraySize;
    newArraySize = firstArraySize+secondArraySize;
    int newArray[newArraySize];
    for(i=0;i<1;i++)
    {
        newArray[i]=firstArray[i];
        for(j=0;j<secondArraySize;j++)
        {
            newArray[j+1]=secondArray[j];
        }
        newArray[j+1] = firstArray[i+1];
    }
    for(i=0;i<newArraySize;i++)
    {
        cout<<newArray[i];
    }
   
}