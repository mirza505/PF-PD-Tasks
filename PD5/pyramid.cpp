#include<iostream>
using namespace std;
double volumePyramid(float height, float width , float length, string unit);
main()
{
	float length, height, width;
	string unit;
    double result;
    cout<<"Enter the length of pyramid(in meters):";
    cin>>length;
    cout<<"Enter the height of pyramid(in meters):";
    cin>>height;
    cout<<"Enter the width of pyramid(in meters):";
    cin>>width;
    cout<<"Enter the unit(centimeters,millimeters,kilometers):";
    cin>>unit;
    result = volumePyramid(height,width,length,unit);
    cout<<"Volume of pyramid in your desired unit = "<<result<<" cubic "<<unit;

}

double volumePyramid(float height, float width, float length, string unit)
    {
        double volumePyramid;
        if(unit =="centimeters")
        {
            height = height*100;
            length = length*100;
            width = width*100;
            volumePyramid = (1.0/3.0)*height*length*width;
        }
        if(unit =="millimeters")
        {
             height = height*1000;
            length = length*1000;
            width = width*1000;
            volumePyramid = (1.0/3.0)*height*length*width;
        
        }
        if(unit =="kilometers")
        { 
            height = height/1000;
            length = length/1000;
            width = width/1000;
            volumePyramid = (1.0/3.0)*height*length*width;
        
        }
    return volumePyramid;
    }