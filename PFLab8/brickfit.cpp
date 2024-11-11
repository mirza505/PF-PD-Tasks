#include<iostream>
using namespace std;
string doesBrickFit(int,int,int,int,int);
main()
{
    int heightBrick,widthBrick,depthBrick,heightHole,widthHole;
    string result;
    cout<<"Enter the height of brick: ";
    cin>>heightBrick;
    cout<<"Enter the width of brick: ";
    cin>>widthBrick;
    cout<<"Enter the depth of brick: ";
    cin>>depthBrick;
    cout<<"Enter the height of hole: ";
    cin>>heightHole;
    cout<<"Enter the width of hole: ";
    cin>>widthHole;
    result = doesBrickFit(heightBrick,widthBrick,depthBrick, heightHole,widthHole);
    cout<<result; 
}
string doesBrickFit(int heightBrick,int widthBrick,int depthBrick,int heightHole, int widthHole)
{
    if((heightBrick*widthBrick == (heightHole||widthHole)) || (heightBrick*depthBrick == (heightHole||widthHole)) || ( widthBrick*depthBrick==(heightHole||widthHole)))
    {
        return "true";
    }
    else
    {
        return "false";
    }
}
