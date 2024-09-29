#include<iostream>
#include<windows.h>
using namespace std;
void maze();
void gotoxy(int , int);
void first(int);
main()
{
system("Color 02");
int y = 1;
system("cls");
maze();
while(y<6)
{
	gotoxy(3,y);
	first(y);
	y = y+1;
	if(y==6)
	{
		while(y>1)
		{
			gotoxy(3,y);
			first(y);
			y = y-1;
		}
	}
	
}

}
void maze()
{
	cout<<"####################"<<endl;
	cout<<"#                  #"<<endl;
	cout<<"#                  #"<<endl;
	cout<<"#                  #"<<endl;
	cout<<"#                  #"<<endl;
	cout<<"#                  #"<<endl;
	cout<<"#                  #"<<endl;
	cout<<"####################"<<endl;
}

void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);

}
void first(int c)
{

	cout<<"P";
	Sleep(500);
	gotoxy(3,c);
	cout<<" ";

}






