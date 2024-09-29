#include<iostream>
#include<windows.h>
using namespace std;
void goto(int , int);
main()
{
	system("cls");
	cout<<"Text";
	gotop(15,15);
	cout<<"My name is Abu Huraira";
	goto(0,20);

}

void goto(int x, int y)
{

	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);




}