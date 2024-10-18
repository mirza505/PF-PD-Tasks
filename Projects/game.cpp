#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printMaze();
void printEnemy();
void printPlayer();
void moveEnemy();
void eraseEnemy();
void eraseEnemy1();
void printEnemy1();
void moveEnemy1();
void printEnemy2();
void moveEnemy2();
void eraseEnemy2();
void movePlayer();
void erasePlayer();
void playerRight();
void playerLeft();
void playerUp();
void playerDown(); 
char getCharAtxy(short int x, short int y);
int pX=40 , pY=20;
int eX=25, eY=3;
bool eC = true;
int e1X=60, e1Y=9;
bool e1C = true; 
int e2X=4 ,e2Y=5;
bool e2C=true;
main()
{
	system("cls");
	printMaze();
	printPlayer();
    printEnemy1();	
    printEnemy();
    printEnemy2();
	while(true)
	{
		if(eX == 60)
        {
            eC = true;
        }
        else if (eX == 25)
        {
            eC = false;
        }
        moveEnemy();
        if(e1Y == 15)
        {
            e1C = false;
        }
        else if (e1Y == 9)
        {
            e1C = true;
        }
        moveEnemy1();
		if(e2Y==12)
		{
			e2C = false;
		}
		else if(e2Y==5)
		{
			e2C = true;
		}
        moveEnemy2();


	if(GetAsyncKeyState(VK_RIGHT))
	{
		gotoxy(pX,pY);
		playerRight();
	}
	if(GetAsyncKeyState(VK_LEFT))
	{
		gotoxy(pX,pY);
		playerLeft();
	}
	if(GetAsyncKeyState(VK_UP))
	{
		gotoxy(pX,pY);
		playerUp();
	}
	if(GetAsyncKeyState(VK_DOWN))
	{
		gotoxy(pX,pY);
		playerDown();
	}	

	Sleep(70);

	}
	
}
void printMaze()
{
    cout<<"#######################################################################################################################"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#                                                                                                                     #"<<endl;
    cout<<"#######################################################################################################################"<<endl;
}

void printPlayer()
	{
		gotoxy(pX+3,pY);
		cout<<"/ \\"<<endl; 
		gotoxy(pX + 1,pY+1);
		cout<<"/ ___ \\"<<endl;
		gotoxy(pX,pY+2);
		cout<<"|       |"<<endl;
		gotoxy(pX,pY+3);
		cout<<"|  ***  |"<<endl;
		gotoxy(pX,pY+4);
		cout<<"|_______|"<<endl;
		gotoxy(pX + 2,pY+5); 
		cout <<"/~ ~\\"<<endl;

	}


void movePlayer()

	{
		erasePlayer();
		Sleep(70);
		printPlayer();
		
	}

void erasePlayer()

	{
		gotoxy(pX+3,pY);
		cout<<"   "<<endl; 
		gotoxy(pX + 1,pY+1);
		cout<<"       "<<endl;
		gotoxy(pX,pY+2);
		cout<<"         "<<endl;
		gotoxy(pX,pY+3);
		cout<<"         "<<endl;
		gotoxy(pX,pY+4);
		cout<<"         "<<endl;
		gotoxy(pX + 2,pY+5); 
		cout <<"     "<<endl;
	
	}

void playerLeft()
	{
		
		if(getCharAtxy(pX-1,pY) == ' ')
		{
		erasePlayer();
		pX = pX-1;
		printPlayer();	

		}

	}
	
void playerRight()
	{
		
		if(getCharAtxy(pX+9,pY)== ' ')
		{
		erasePlayer();
		pX = pX+1;
		printPlayer();	
		}

	}

void playerUp()
	{
		if(getCharAtxy(pX,pY-1)== ' ')
		{
		erasePlayer();
		pY = pY-1;
		printPlayer();	
		}

	}

void playerDown()
	{
		if(getCharAtxy(pX,pY+1) == ' ')
		{
		erasePlayer();
		pY = pY+1;
		printPlayer();	
		}

	}

void printEnemy()

	{
		gotoxy(eX+6,eY);
		cout<<"(\\./)"<<endl;
		gotoxy(eX+5,eY+1);
		cout<<"~(o o)~"<<endl;
		gotoxy(eX+7,eY+2);
		cout<<"^ ^"<<endl;
	}

    void eraseEnemy()
	{
		gotoxy(eX+6,eY);
		cout<<"     "<<endl;
		gotoxy(eX+5,eY+1);
		cout<<"       "<<endl;
		gotoxy(eX+7,eY+2);
		cout<<"   "<<endl;	
	}

void moveEnemy()

	{
		eraseEnemy();
		Sleep(70);
        if(eC==true)
        {
            eX--;
        }
        else
        {
            eX++;
        }
		printEnemy();
	}

void printEnemy1()

	{
		gotoxy(e1X + 10,e1Y);
		cout<<"\\    /"<<endl;
		gotoxy(e1X + 6,e1Y+1);
		cout<<"--(   o o  )--"<<endl;
		gotoxy(e1X + 11,e1Y+2);
		cout<<"\\__/"<<endl;
		
	}
void eraseEnemy1()

	{
		gotoxy(e1X + 10,e1Y);
		cout<<"      "<<endl;
		gotoxy(e1X+6,e1Y+1);
		cout<<"              "<<endl;
		gotoxy(e1X+11,e1Y+2);
		cout<<"    "<<endl;
	}
void moveEnemy1()

	{
		eraseEnemy1();
		Sleep(50);
        if(e1C==false)
        {
            e1Y-=2;
        }
        else
        {
            e1Y++;
        }
		printEnemy1();
	}
void printEnemy2()
{
	gotoxy(e2X+1,e2Y);
	cout<<".-."<<endl;
	gotoxy(e2X,e2Y+1);
	cout<<"(o o)"<<endl;
	gotoxy(e2X+1,e2Y+2);
	cout<<"|0|"<<endl;
	gotoxy(e2X,e2Y+3);
	cout<<"/ | \\"<<endl;
}
void eraseEnemy2()
{
	gotoxy(e2X+1,e2Y);
	cout<<"   "<<endl;
	gotoxy(e2X,e2Y+1);
	cout<<"     "<<endl;
	gotoxy(e2X+1,e2Y+2);
	cout<<"   "<<endl;
	gotoxy(e2X,e2Y+3);
	cout<<"      "<<endl;
}
void moveEnemy2()
{
	eraseEnemy2();
	Sleep(70);
    if(e2C == true)
	{
		e2X+=2;
		e2Y++;
	}
	else
	{
		e2X-=2;
		e2Y--;
	}
	printEnemy2();
}
void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
    coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}






