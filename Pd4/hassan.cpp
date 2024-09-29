#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int , int );
void printH();
void printA1();
void printS1();
void printS2();
void printA2();
void printN();
main()
{
	system("cls");
	gotoxy(0,0);
	printH();
	gotoxy(0,5);
	printA1();
	gotoxy(0,11);
	printS1();
	gotoxy(0,17);
	printS2();
	gotoxy(0,23);
	printA2();
	gotoxy(0,29);
	printN();
	gotoxy(0,50);
	


}

void printH()
	{

		cout<<"   #     #       ";
		gotoxy(0,1);
		cout<<"   #     #       ";
		gotoxy(0,2);
		cout<<"   #######       ";
		gotoxy(0,3);
		cout<<"   #     #       ";
		gotoxy(0,4);
		cout<<"   #     #       ";


	}

void printA1()
	{
		cout<<"      #          ";
		gotoxy(0,6);
		cout<<"     # #         ";
		gotoxy(0,7);
		cout<<"    #####      ";
		gotoxy(0,8);
		cout<<"   #     # ";
		gotoxy(0,9);
		cout<<"  #       #     ";
		

	}

void printS1()
	{

		cout<<"   ######           ";
		gotoxy(0,12);
		cout<<"   #            ";
		gotoxy(0,13);
		cout<<"   ######            ";
		gotoxy(0,14);
		cout<<"        #        ";
		gotoxy(0,15);
		cout<<"   ######         ";
	}

void printS2()
	{

		cout<<"   ######           ";
		gotoxy(0,18);
		cout<<"   #            ";
		gotoxy(0,19);
		cout<<"   ######            ";
		gotoxy(0,20);
		cout<<"        #        ";
		gotoxy(0,21);
		cout<<"   ######         ";
	
	}

void printA2()

{
		cout<<"     #          ";
		gotoxy(0,24);
		cout<<"    # #         ";
		gotoxy(0,25);
		cout<<"   #####      ";
		gotoxy(0,26);
		cout<<"  #     # ";
		gotoxy(0,27);
		cout<<" #       #     ";
		

	}

void printN()
	{
		cout<<" #        #        ";
		gotoxy(0,30);
		cout<<" #  #     #         ";
		gotoxy(0,31);
		cout<<" #    #   #         ";
		gotoxy(0,32);
		cout<<" #      # #         ";
		
		

	
	}

void gotoxy(int x, int y)
	{
		COORD coordinates;
		coordinates.X = x;
		coordinates.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);	



	}