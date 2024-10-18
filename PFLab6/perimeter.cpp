#include<iostream>
using namespace std;
float perimeter(char, float);
main()
{
    char shape;
    float side;
    float answer;
    cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon";
    cin>>shape;
    cout<<"Enter the value of side:";
    cin>>side;
    answer = perimeter(shape,side);
    cout<<"Perimeter of "<<shape<<" = "<<answer;

}
float perimeter(char shape, float side)
{
    float radius,perimeter;
    radius = side;
    if(shape=='s')
    {
        perimeter = 4*side;

    }
    if(shape=='c')
    {
        perimeter = 6.28*radius;

    }
    if(shape=='t')
    {
        perimeter = 3*side;

    }
    if(shape=='h')
    {
        perimeter = 6*side;

    }
    return perimeter;




}