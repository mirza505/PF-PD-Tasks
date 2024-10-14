#include<iostream>
#include<math.h>
using namespace std;
float treeHeight(float,float);
main()
{
	float distance, angle, result;
	cout<<"Enter the distance from the base of tree(in feet):";
	cin>>distance;
	cout<<"Enter the angle of elevation:";
	cin>>angle;
	angle = angle/57.2958;
	result = treeHeight(distance,angle);
	cout<<"The height of tree is: "<<result<<" feet";


}

float treeHeight(float userDistance, float angleElevation)
	{
		float trignometricAngle , height;
		trignometricAngle = tan(angleElevation);
		height = userDistance*trignometricAngle;
		return height;




	}