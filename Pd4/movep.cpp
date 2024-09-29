#include<iostream>
#include<windows.h>
using namespace std;
void maze();
void gotoxy(int , int);
void movePlayer(int , int);
main()
{
	int a =3, b=4;
	system("cls");
	maze();
	gotoxy(a,b);
	movePlayer(a,b);
	gotoxy(0,12);

}
void maze()
	{
		cout<<"#####################           "<<endl;
		cout<<"#                   #           "<<endl;
		cout<<"#                   #           "<<endl;
		cout<<"#                   #           "<<endl;
		cout<<"#                   #           "<<endl;
		cout<<"#                   #           "<<endl;
		cout<<"#                   #           "<<endl;
		cout<<"#                   #           "<<endl;
		cout<<"#                   #           "<<endl;
		cout<<"#####################           "<<endl;

	}
void gotoxy(int x, int y)
	{
		COORD coordinates;
		coordinates.X = x;
		coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);



	}
void movePlayer(int x1, int y1)
	{
		cout<<"P";
		Sleep(600);
		gotoxy(x1,y1);
		cout<<" ";
		gotoxy(x1 +1 , y1 +1);
		cout<<"P";	

	}