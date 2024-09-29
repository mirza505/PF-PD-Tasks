#include<iostream>
using namespace std;
void equality(int , int);
main()
{
	int a,b;
	cout<<"Enter integer a"<<endl;
	cin>>a;
	cout<<"Enter integer b"<<endl;
	cin>>b;
	equality(a,b);

}

void equality(int x, int y)
	{
		if(x==y)
		{
			cout<<"True";
			
		}
		if(x!=y)
		{
			cout<<"False";
		}



	}