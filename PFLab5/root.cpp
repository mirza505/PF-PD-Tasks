#include<iostream>
#include<math.h>
using namespace std;
void quadratic(float , float , float );
main()
{
	float a,b,c;
	cout<<"Enter value of a:";
	cin>>a;
	cout<<"Enter value of b:";
	cin>>b;
	cout<<"Enter value of c:";
	cin>>c;
	quadratic(a,b,c);
	
}

void quadratic(float a, float b, float c)

	{
		float root1, root2, root, realRoot1, complexRoot1;
		
		if( (b*b) - (4*a*c) >0 )
		{
			root1 = (-b + sqrt((b*b)-4*a*c))/(2*a);
			root2 = (-b - sqrt((b*b)-4*a*c))/(2*a);		
			cout<<"x = "<<root1<<" and x = "<<root2;
		}

		if( (b*b) - (4*a*c) == 0 )
		{
			root = -b/2*a;
			cout<<"x = "<<root;
		}

		if( (b*b) - (4*a*c) <0 )
		{
			realRoot1 = -b/(2*a);
			complexRoot1 = sqrt(-(b*b - 4*a*c))/(2*a);
			cout<<" Complex solutions: x = "<<realRoot1<<" + "<<complexRoot1<<"i"<<" and x = "<<realRoot1<<" - "<<complexRoot1<<"i";
		}

		

	}