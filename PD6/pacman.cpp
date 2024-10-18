#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void movePlayer();
void moveEnemy1();
void moveEnemy2();
void moveEnemy3();
void playerRight();
void playerLeft();
void playerUp();
void playerDown(); 
char getCharAtxy(short int x, short int y);
void gotoxy(int x, int y);
int pX=24,pY=9;
int e1X=33,e1Y=3,e2X=4,e2Y=9,e3X=20,e3Y=11;
main()
{
    printMaze();
    gotoxy(pX,pY);
    cout<<"P";
    Sleep(300);
    gotoxy(pX,pY);
    cout<<" ";
    while(true)
    {
    if(GetAsyncKeyState(VK_RIGHT))
	{
		
		playerRight();
	}
	if(GetAsyncKeyState(VK_LEFT))
	{
		
		playerLeft();
	}
	if(GetAsyncKeyState(VK_UP))
	{
		
		playerUp();
	}
	if(GetAsyncKeyState(VK_DOWN))
	{
		
		playerDown();
	} 
    moveEnemy1();  
    moveEnemy2();
    moveEnemy3();
    }



}
void printMaze()
{
cout<<" ###################################################################         "<<endl;
cout<<" ||.. ................................................. .......       ||                  "<<endl;
cout<<" ||.. %%%%%%%%%%%%%%%%      ...          %%%%%%%%%%%%%    |%|..  %%%% ||                  "<<endl;
cout<<" ||..      |%|     |%|   |%|...         |%|       |%|     |%|..   |%| ||                  "<<endl;
cout<<" ||..      |%|     |%|   |%|...         |%|       |%|     |%|..   |%| ||               "<<endl;
cout<<" ||..      %%%%%%%%%  .. |%|...         %%%%%%%%%%%%%        ..       ||                 "<<endl;
cout<<" ||..      |%|        .. |%|...      ...............     |%| ..       ||                  "<<endl;
cout<<" ||..      %%%%%%%%%  .. |%|...         %%%%%%%%%%       |%| ..       ||                  "<<endl;
cout<<" ||..               |%|.              |%| ......         |%| ..|%|    ||                  "<<endl;
cout<<" ||..               |%|.             |%| ...... |%|         ..|%|    ||                  "<<endl;
cout<<" ||..       ....... |%|.              |%| .......|%|         ..|%|    ||          "<<endl;
cout<<" ||.. |%|  |%|%%%|%|.      %%%%%%%%%  |%| .......|%|     |%| ..       ||         "<<endl;
cout<<" ||.. |%|  |%|   |%|..        ...|%|         %%%%%%      |%| ..       ||                  "<<endl;
cout<<" ||.. |%|  |%|   |%|..        ...|%|                     |%|    ..    ||                  "<<endl;
cout<<" ||.. |%|               .     ...|%| %%%%%%%%%%%%     %%%       . |%| ||                  "<<endl;
cout<<" ||.. |%|     %%%%%%%%%%%%     ...                 |%|         .  |%| ||                  "<<endl;
cout<<" ||............................................... |%|            |%| ||                 "<<endl;
cout<<" ||.. .........................................          |%|%||%|     ||                   "<<endl;
cout<<" ||.. |%|   |%|   |%|..     %%%%%%%%%          %%%       |%|   |%|    ||                  "<<endl;
cout<<" ||.. |%|   |%|   |%|..         ...|%|           %%%     |%||%||%|    ||              "<<endl;
cout<<" ||.. |%|             .       G ...|%|         |%|   %%%%%% |%|       ||        "<<endl;
cout<<" ||.. |%|   %%%%%%%%%%%%        ...|%|    %%%        |%| |%|          ||                  "<<endl;
cout<<" ||..      ...           %%%       |%|   %%%%%%  ||                   || "<<endl;
cout<<" ||.............................................                      ||     "<<endl;
cout<<" ###################################################################  ||       "<<endl;
}
void gotoxy(int x, int y)

	{
		COORD coordinates;
		coordinates.X = x;
		coordinates.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);

	}
    void movePlayer()
    {
        gotoxy(pX,pY);
        cout<<"P";
        Sleep(200);
        gotoxy(pX,pY);
        cout<<" ";
        if(pX>=36)
        {
            pX=24;
        }
        else 
        {
            pX++;
        }
    }
    void moveEnemy1()
    {
        gotoxy(e1X,e1Y);
        cout<<"G";
        Sleep(200);
        gotoxy(e1X,e1Y);
        cout<<" ";
        if(e1Y>=7)
        {
            e1Y=3;
        }
        else 
        {
            e1Y++;
        }
    }
    void moveEnemy2()
    {
        gotoxy(e2X,e2Y);
        cout<<"G";
        Sleep(200);
        gotoxy(e2X,e2Y);
        cout<<" ";
        if(e2X>=16)
        {
            e2X=4;
        }
        else 
        {
            e2X++;
        }
    }
      void moveEnemy3()
    {
        gotoxy(e3X,e3Y);
        cout<<"G";
        Sleep(200);
        gotoxy(e3X,e3Y);
        cout<<" ";
        if(e3Y>=15)
        {
            e3X=20;
            e3Y=11;
        }
        else 
        {
            e3X+=2;
            e3Y++;
        }
    }
    void playerLeft()
	{
		
		if(getCharAtxy(pX-1,pY) == ' ')
		{
		pX = pX-1;
        gotoxy(pX,pY);
		cout<<"P";
        Sleep(200);
        gotoxy(pX,pY);
        cout<<" ";
		}

	}
	
void playerRight()
	{
		
		if(getCharAtxy(pX+1,pY)== ' ')
		{
		pX = pX+1;
        gotoxy(pX,pY);
        cout<<"P";
        Sleep(200);
        gotoxy(pX,pY);
        cout<<" ";
		
		}

	}

void playerUp()
	{
		if(getCharAtxy(pX,pY-1)== ' ')
		{
		pY = pY-1;
        gotoxy(pX,pY);
		cout<<"P";
        Sleep(200);
        gotoxy(pX,pY);
        cout<<" ";
		}

	}

void playerDown()
	{
		if(getCharAtxy(pX,pY+1) == ' ')
		{
		
		pY = pY+1;
        gotoxy(pX,pY);
		cout<<"P";
        Sleep(200);
        gotoxy(pX,pY);
        cout<<" ";
		}

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

    
