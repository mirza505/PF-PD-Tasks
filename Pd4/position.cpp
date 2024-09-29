#include<iostream>
using namespace std;
void position(int, int);
main()
{
	int your_pos, frnd_pos;
	cout<<"Enter your position:";
	cin>>your_pos;
	cout<<"Enter your friend position:";
	cin>>frnd_pos;
	position(your_pos,frnd_pos);

}

void position(int position_a, int position_b)
	{

		if(position_a < position_b)
		{
			cout<<"true";
		}
		if(position_a > position_b)
		{
			cout<<"false";
		}



	}