#include<iostream>
#include<windows.h>
using namespace std;
void maze();
void gotoxy(int , int);
void moveplayer(int ,int );
main()
{
	int x = 3, y=4;
	system("cls");
	maze();
	while(1)
	{
		gotoxy(x,y);
		moveplayer(x,y);
		x = x+1;

	}
	
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
void moveplayer(int x ,int y )
	{
		cout<<"P";
		Sleep(300);
		gotoxy(x,y);
		cout<<" ";
		
	




	}





