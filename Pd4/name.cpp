#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void name( );
main()
{

	system("cls");
	gotoxy(30,13);
	name();

}

void name()
	{
		cout<<"     #       ######  #   #  #   #  #   #  ####       #     ####  ####        #                 "<<endl;
		gotoxy(30,14);
		cout<<"    #  #     #    #  #   #  #   #  #   #  #   #     # #     #    #   #      # #               "<<endl;
		gotoxy(30,15);
		cout<<"   ######    ######  #   #  #####  #   #  ####     #####    #    ####      #####               "<<endl;
		gotoxy(30,16);
		cout<<"  #      #   #    #  #   #  #   #  #   #  #   #   #     #   #    #   #    #     #     "<<endl;
		gotoxy(30,17);
		cout<<" #        #  ######  # # #  #   #  # # #  #    # #       # ####  #    #  #       #           "<<endl;


	}

void gotoxy(int x, int y)
	{

		COORD coordinates;
		coordinates.X = x;
		coordinates.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);





	}











