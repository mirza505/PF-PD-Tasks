#include <iostream>
#include <windows.h>
#include<random>
#include<chrono>
#include <conio.h>
using namespace std;
void gotoxy(int x, int y);
void printMaze();
void printHeader();
string menu();
void general();
int instructions();
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
void erasePlayer();
void playerRight();
void playerLeft();
void playerUp();
void playerDown();
void printLives();
void printBulletRight();
void printBulletLeft();
void moveBulletRight();
void moveBulletLeft();
void printEnemyBullet();
void moveEnemyBullet();
void printEnemy1Bullet();
void moveEnemy1Bullet();
void printEnemy2Bullet();
void moveEnemy2Bullet();
void bulletRight();
void printBullet();
void moveBullerRight();
void moveBullerLeft();
void resetColor();
void hideCursor();
void score();
int getRandomNumber(int lower, int upper);
void initializeRandomGenerator() ;
void playerHealth();
void won();
void lose();
void calculateScore();
void decreaseHealth();
void collisionDetection();
void checkPills();
void gameOver();
char getCharAtxy(short int x, short int y);
bool x = false;
int pX = 30, pY = 25;
int eX = 30, eY = 20;
bool eC = true;
int e1X = 3, e1Y = 4;
bool e1C = true;
int e2X = 86, e2Y = 2;
bool e2C = true;
int damage = 20;
int  damage1=20;
int damage2 = 30;
int pScore = 0;
int pHealth = 100;
int pLives = 3;
int fire1limit = 0;
int fire2limit = 0;
int fire3limit = 0;
int fire4limit = 0;
int pbulletx[10000];
int p2bulletx[10000];
int pbullety[10000];
int p2bullety[10000];
int E1bulletx[10000];
int E1bullety[10000];
int E2bulletx[10000];
int E2bullety[10000];
int E3bulletx[10000];
int E3bullety[10000];
int E4bulletx[10000];
int E4bullety[10000];
bool activee1bullet[10000];
bool activee2bullet[10000];
bool activee3bullet[10000];
bool activee4bullet[10000];
bool activepbullet[10000];
bool activep2bullet[10000];
int e1Index = 0;
int e2Index = 0;
int e3Index = 0;
int e4Index = 0;
int pIndex = 0;
int count = 0;
int p2Index = 0;
bool gameOverFlag = true;
int pillX = 0;
int pillY = 0;
bool flagPill = false;
int enemyCount = 3; 

main()
{
    string option;
    system("cls");
    while (true)
    {
        printHeader();
        option = menu();
        if (option == "1")
        {
            
            system("cls");
            hideCursor();
            printMaze();
            printPlayer();
            printEnemy();
            printEnemy1();
            printEnemy2();
            while (gameOverFlag)
            {
                count ++;
                if(count%99==0 && flagPill)    
                {
                    gotoxy(pillX, pillY);
                    cout << " ";
                    flagPill = false;
                }
                if(count%100==0)
                {
                    while(true)
                    {
                        pillX = getRandomNumber(1,127);
                        pillY = getRandomNumber(1, 32);
                        if(getCharAtxy(pillX, pillY)== ' ')
                        break;
                    }
                    gotoxy(pillX, pillY);
                    cout << "$";
                    flagPill = true;
                }
                score();
                calculateScore();
                playerHealth();
                printLives();
                if (eX == 78)
                {
                    eC = true;
                }
                else if (eX == 20)
                {
                    eC = false;
                }
                if(damage>=0)
                {
                    moveEnemy();
                }
                if (e1Y == 24)
                {
                    e1C = false;
                }
                else if (e1Y == 4)
                {
                    e1C = true;
                }
                if(damage1>=0)
                {
                    moveEnemy1();
                }
                if (e2Y == 10)
                {
                    e2C = false;
                }
                else if (e2Y == 2)
                {
                    e2C = true;
                }
                checkPills();
                if(damage2>=0)
                {
                    moveEnemy2();
                }
                               
                if(damage>=0)
                {
                moveEnemyBullet();
                }
                if(damage==0)
                {
                    enemyCount-=1;
                    eraseEnemy();
                }
                if(damage1==0)
                {
                    enemyCount-=1;
                    eraseEnemy1();
                }
                if(damage2==0)
                {
                    enemyCount-=1;
                    eraseEnemy2();
                }
                if(damage1>=0)
                {
                    
                    moveEnemy1Bullet();
                }
                if(damage2>=0)
                {
                    moveEnemy2Bullet();
                }
                collisionDetection();
                decreaseHealth();
                if (GetAsyncKeyState(VK_SPACE))
                {
                    printBulletRight();
                }
                moveBulletRight();

                if (GetAsyncKeyState(VK_CONTROL))
                {
                    printBulletLeft();
                }
                moveBulletLeft();
                if (GetAsyncKeyState(VK_RIGHT))
                {
                    playerRight();
                }
                if (GetAsyncKeyState(VK_LEFT))
                {

                    playerLeft();
                }
                if (GetAsyncKeyState(VK_UP))
                {

                    playerUp();
                }
                if (GetAsyncKeyState(VK_DOWN))
                {

                    playerDown();
                }
                if(enemyCount==0)
                {
                    won();
                    gameOverFlag = false;


                }
                if(pLives==0  )
                {
                    gameOverFlag = false;
                    lose();
                    gameOver();

                }
                Sleep(50);
            }
        }
        if (option == "2")
        {
            while (true)
            {
                instructions();
                general();
                break;
            }
        }
        if (option == "3")
        {
            general();
            break;
        }
    }
}

mt19937 gen;   
// Random Functionality
void initializeRandomGenerator() 
{
    // Use current time as a seed to ensure randomness
    unsigned seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    gen.seed(seed);  // Seed the generator with time-based seed
}

// Helper function to generate a random number in a given range
int getRandomNumber(int lower, int upper) 
{
    uniform_int_distribution<> dis(lower, upper);  // Define the range
    return dis(gen);  // Generate the random number
}

void checkPills()
{

    for(int i=pX-1; i<pX+4; i++)
    {
        for(int j=pY-1; j<pY+4; j++)
        {
            if(getCharAtxy(i,j) != ' ' && (i == pillX && j == pillY))
            {
                pScore += 20;
                pillX = -1;
                pillY = -1;
                //x = true;
            }
        }
    }
}

void printHeader()
{
    gotoxy(45, 5);
    cout << " \033[38;5;220m               )         (    (        (       " << endl;
    gotoxy(45, 6);
    cout << " \033[38;5;214m  (         ( /(   *   ) )\\ ) )\\ )     )\\ )        " << endl;
    gotoxy(45, 7);
    cout << " \033[38;5;208m  )\\   (    )\\())` )  /((()/((()/( (  (()/(   (    " << endl;
    gotoxy(45, 8);
    cout << " \033[38;5;202m(((_)  )\\  ((_)\\  ( )(_))/(_))/(_)))\\  /(_))  )\\   " << endl;
    gotoxy(45, 9);
    cout << " \033[38;5;196m)\\___ ((_)  _((_)(_(_())(_)) (_)) ((_)(_))_  ((_)  " << endl;
    gotoxy(45, 10);
    cout << "  \033[38;5;1m/ __|| __|| \\| ||_   _||_ _|| _ \\| __||   \\ | __| " << endl;
    gotoxy(45, 11);
    cout << " | (__ | _| | .` |  | |   | | |  _/| _| | |) || _|  " << endl;
    gotoxy(45, 12);
    cout << "  \\___||___||_|\\_|  |_|  |___||_|  |___||___/ |___| " << endl
         << endl
         << endl;
    cout << "\n\n";
    resetColor();
}

string menu()
{
    cout << " \033[38;5;208m";
    string option;
    cout << "-->Enter 1 if you want to start the game" << endl;
    cout << "-->Enter 2 if you want to see the instructions" << endl;
    cout << "-->Enter 3 if you want to exit the game" << endl;
    cout << "Select your option:" << endl;
    cin >> option;
    cout << "Your option= " << option;
    return option;
    resetColor();
}

int instructions()
{
    cout << " \033[38;5;1m";
    cout << R"(cout<<R"(                                                                                                              
@@@  @@@  @@@   @@@@@@   @@@@@@@  @@@@@@@   @@@  @@@   @@@@@@@  @@@@@@@  @@@   @@@@@@   @@@  @@@   @@@@@@   
@@@  @@@@ @@@  @@@@@@@   @@@@@@@  @@@@@@@@  @@@  @@@  @@@@@@@@  @@@@@@@  @@@  @@@@@@@@  @@@@ @@@  @@@@@@@   
@@!  @@!@!@@@  !@@         @@!    @@!  @@@  @@!  @@@  !@@         @@!    @@!  @@!  @@@  @@!@!@@@  !@@       
!@!  !@!!@!@!  !@!         !@!    !@!  @!@  !@!  @!@  !@!         !@!    !@!  !@!  @!@  !@!!@!@!  !@!       
!!@  @!@ !!@!  !!@@!!      @!!    @!@!!@!   @!@  !@!  !@!         @!!    !!@  @!@  !@!  @!@ !!@!  !!@@!!    
!!!  !@!  !!!   !!@!!!     !!!    !!@!@!    !@!  !!!  !!!         !!!    !!!  !@!  !!!  !@!  !!!   !!@!!!   
!!:  !!:  !!!       !:!    !!:    !!: :!!   !!:  !!!  :!!         !!:    !!:  !!:  !!!  !!:  !!!       !:!  
:!:  :!:  !:!      !:!     :!:    :!:  !:!  :!:  !:!  :!:         :!:    :!:  :!:  !:!  :!:  !:!      !:!   
 ::   ::   ::  :::: ::      ::    ::   :::  ::::: ::   ::: :::     ::     ::  ::::: ::   ::   ::  :::: ::   
:    ::    :   :: : :       :      :   : :   : :  :    :: :: :     :     :     : :  :   ::    :   :: : :                                                                                                              
     
    )";
    resetColor();
}
void printMaze()//127 x 32
{
    cout << "##############################################################################################################################" << endl;
    cout << "#                                                                                                                            #" << endl;
    cout << "#                                                                                                                            #" << endl;
    cout << "#                                                                                                                            #" << endl;
    cout << "#                                                                                                                            #" << endl;
    cout << "#                                                                                                                            #" << endl;
    cout << "#                                                                                                                            #" << endl;
    cout << "#                                                                                                                            #" << endl;
    cout << "#                                                                                                                            #" << endl;
    cout << "#               &&                              %                        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%                 #" << endl;
    cout << "#               &&                              %                                                                  %         #" << endl;
    cout << "#               &&                              %                                                                  %         #" << endl;
    cout << "#               &&                              %                                                                  %         #" << endl;
    cout << "#               &&                              %                                                                  %         #" << endl;
    cout << "#               &&                              %                                                                  %         #" << endl;
    cout << "#               %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#" << endl;
    cout << "#                                                                                                                            #" << endl;
    cout << "#                                                                                                                            #" << endl;
    cout << "#                                                                                                                            #" << endl;
    cout << "#                                                                                                                            #" << endl;
    cout << "#                                                                                                                            #" << endl;
    cout << "#                                                                                                                            #" << endl;
    cout << "#                                                                                                                            #" << endl;
    cout << "#              %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%          %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#" << endl;
    cout << "#              &&                                                                                                            #" << endl;
    cout << "#              &&                                                                                                            #" << endl;
    cout << "#              &&                                                                                                            #" << endl;
    cout << "#              &&                                                                                                            #" << endl;
    cout << "#              &&                                                                                                            #" << endl;
    cout << "#              &&                                                                                                            #" << endl;
    cout << "#              &&                                                                                                            #" << endl;
    cout << "#              &&                                                                                                            #" << endl;
    cout << "##############################################################################################################################" << endl;
}
void printPlayer()
{
    cout << "\033[38;5;20m";
    gotoxy(pX, pY);
    cout << " ^ " << endl;
    gotoxy(pX, pY + 1);
    cout << "<o>" << endl;                                      // 
    gotoxy(pX, pY + 2);
    cout << " v " << endl;
    cout << "\033[38;5;298m";
}

void erasePlayer()
{
    gotoxy(pX, pY);
    cout << "   " << endl;
    gotoxy(pX, pY + 1);
    cout << "   " << endl;
    gotoxy(pX, pY + 2);
    cout << "   " << endl;
}

void playerLeft()
{
    if (getCharAtxy(pX - 1, pY) == ' ' && getCharAtxy(pX - 1, pY + 1) == ' ' && getCharAtxy(pX - 1, pY + 2) == ' '||
        getCharAtxy(pX + 3, pY) == '$' || getCharAtxy(pX + 3, pY + 1) == '$' || getCharAtxy(pX + 3, pY + 2) == '$') 
    {
        erasePlayer();
        pX = pX - 1;
        printPlayer();
    }
}

void playerRight()
{
    if (getCharAtxy(pX + 3, pY) == ' ' && getCharAtxy(pX + 3, pY + 1) == ' ' && getCharAtxy(pX + 3, pY + 2) == ' '||
        getCharAtxy(pX + 3, pY) == '$' || getCharAtxy(pX + 3, pY + 1) == '$' || getCharAtxy(pX + 3, pY + 2) == '$' )
    {
        erasePlayer();
        pX++;
        printPlayer();
    }
}

void playerUp()
{
    if (getCharAtxy(pX, pY - 1) == ' ' && getCharAtxy(pX + 1, pY - 1) == ' ' && getCharAtxy(pX + 2, pY - 1) == ' '||
        getCharAtxy(pX , pY-1) == '$' || getCharAtxy(pX + 1, pY - 1) == '$' || getCharAtxy(pX + 2, pY - 1) == '$' )
    {
        erasePlayer();
        pY = pY - 1;
        printPlayer();
    }
}

void playerDown()
{
    if (getCharAtxy(pX, pY + 3) == ' ' && getCharAtxy(pX + 1, pY + 3) == ' ' && getCharAtxy(pX + 2, pY + 3) == ' '||
        getCharAtxy(pX , pY+3) == '$' || getCharAtxy(pX + 1, pY + 3) == '$' || getCharAtxy(pX + 2, pY + 3) == '$' )
    {
        erasePlayer();
        pY = pY + 1;

        printPlayer();
    }
}

void printEnemy()
{
    cout << "\033[38;5;127m";
    gotoxy(eX, eY);
    cout << " (\\./)" << endl;
    gotoxy(eX, eY + 1);
    cout << "~(o o)~" << endl;
    gotoxy(eX, eY + 2);
    cout << "  ^ ^" << endl;
    cout << "\033[38;5;298m";
    gotoxy(110, 32);
}

void eraseEnemy()
{
    gotoxy(eX, eY);
    cout << "      " << endl;
    gotoxy(eX, eY + 1);
    cout << "       " << endl;
    gotoxy(eX, eY + 2);
    cout << "     " << endl;
}

void moveEnemy()
{
    eraseEnemy();
    gotoxy(110, 32);
    if (eC == true)
    {
        eX--;
    }
    else
    {
        eX++;
    }
    printEnemy();
    // if ((pX >= eX && pX <= eX + 7 && pY >= eY && pY <= eY + 3))
}

void printEnemy1()
{
    gotoxy(e1X, e1Y);
    cout << " oo";
    gotoxy(e1X, e1Y + 1);
    cout << "/||\\";
}
void eraseEnemy1()
{
    gotoxy(e1X, e1Y);
    cout << "   ";
    gotoxy(e1X, e1Y + 1);
    cout << "     ";
}

void moveEnemy1()
{
    gotoxy(e1X, e1Y);
    eraseEnemy1();
    if (e1C == false)
    {
        e1Y -= 2;
    }
    else
    {
        e1Y++;
    }
    printEnemy1();

    if ((pX >= e1X && pX <= e1X + 4 && pY >= e1Y && pY <= e1Y + 2))
    {
        pLives--;
        erasePlayer();
        pX = 40;
        pY = 20;
        printPlayer();
    }
}

void printEnemy2()
{
    cout << "\033[38;5;138m";
    gotoxy(e2X, e2Y);
    cout << " .-." << endl;
    gotoxy(e2X, e2Y + 1);
    cout << "(o o)" << endl;
    gotoxy(e2X, e2Y + 2);
    cout << " |0|" << endl;
    gotoxy(e2X, e2Y + 3);
    cout << "/ | \\" << endl;
    cout << "\033[38;5;298m";
}

void eraseEnemy2()
{
    gotoxy(e2X, e2Y);
    cout << "    " << endl;
    gotoxy(e2X, e2Y + 1);
    cout << "     " << endl;
    gotoxy(e2X, e2Y + 2);
    cout << "    " << endl;
    gotoxy(e2X, e2Y + 3);
    cout << "     " << endl;
}
void moveEnemy2()
{
    gotoxy(e2X, e2Y);
    eraseEnemy2();
    if (e2C == true)
    {
        e2X += 1;
        e2Y++;
    }
    if (e2C == false)
    {
        e2X -= 1;
        e2Y--;
    }
    printEnemy2();
    if ((pX >= e2X && pX <= e2X + 5 && pY >= e2Y && pY <= e2Y + 4))
    {
        pLives--;
        erasePlayer();
        pX = 40;
        pY = 20;
        printPlayer();
    }
}

void score()
{

    gotoxy(140, 4);
    cout << "\033[38;5;1mScore: " << pScore;
    resetColor();
}

void playerHealth()
{
    gotoxy(140, 6);
    cout << "\033[38;5;1mHealth: " << pHealth;
    resetColor();
}

void printLives()
{
    gotoxy(140, 8);
    cout << "\033[38;5;1mLives: " << pLives;
    resetColor();
}

void printBulletRight()
{
    int pbx = pX + 4;
    int pby = pY + 1;
    gotoxy(pbx, pby);
    cout << char(254);
    pbulletx[pIndex] = pbx;
    pbullety[pIndex] = pby;
    activepbullet[pIndex] = true;
    pIndex++;
}

void moveBulletRight()
{
    for (int i = 0; i < pIndex; i++)
    {
        if (activepbullet[i] == true)
        {
            if (getCharAtxy(pbulletx[i] + 1, pbullety[i]) != ' ')
            {
                gotoxy(pbulletx[i], pbullety[i]);
                cout << " ";
                activepbullet[pIndex] = false;
            }
            if (getCharAtxy(pbulletx[i] + 1, pbullety[i]) == ' ')
            {
                gotoxy(pbulletx[i], pbullety[i]);
                cout << " ";
                pbulletx[i]++;
                gotoxy(pbulletx[i], pbullety[i]);
                cout << char(254);
            }
        }
    }
}
void printBulletLeft()
{
    int p2bx = pX - 1;
    int p2by = pY + 1;
    gotoxy(p2bx, p2by);
    cout << char(254);
    p2bulletx[p2Index] = p2bx;
    p2bullety[p2Index] = p2by;
    activep2bullet[p2Index] = true;
    p2Index++;
}

void moveBulletLeft()
{
    for (int i = 0; i < p2Index; i++)
    {
        if (activep2bullet[i] == true)
        {
            if (getCharAtxy(p2bulletx[i] - 1, p2bullety[i]) != ' ')
            {
                gotoxy(p2bulletx[i], p2bullety[i]);
                cout << " ";
                activep2bullet[p2Index] = false;
            }
            if (getCharAtxy(p2bulletx[i] - 1, p2bullety[i]) == ' ')
            {
                gotoxy(p2bulletx[i], p2bullety[i]);
                cout << " ";
                p2bulletx[i]--;
                gotoxy(p2bulletx[i], p2bullety[i]);
                cout << char(254);
            }
        }
    }
}

void printEnemyBullet()
{
    int e1bx = eX + 8;
    int e1by = eY + 1;
    gotoxy(e1bx, e1by);
    cout << "o";
    E1bulletx[e1Index] = e1bx;
    E1bullety[e1Index] = e1by;
    activee1bullet[e1Index] = true;
    e1Index++; // check this later
}
void moveEnemyBullet()
{

    for (int i = 0; i < e1Index; i++)
    {
        if (activee1bullet[i] == true)
        {
            if (getCharAtxy(E1bulletx[i] + 1, E1bullety[i]) != ' ')
            {
                gotoxy(E1bulletx[i], E1bullety[i]);
                cout << " ";
                activee1bullet[i] = false;
            }
            if (getCharAtxy(E1bulletx[i] + 1, E1bullety[i]) == ' ')
            {
                gotoxy(E1bulletx[i], E1bullety[i]);
                cout << " ";
                E1bulletx[i]++;
                gotoxy(E1bulletx[i], E1bullety[i]);
                cout << "o";
            }
        }
    }
    if (fire1limit > 4)
    {
        printEnemyBullet();
        fire1limit = 0;
    }
    else
    {
        fire1limit++;
    }
}
void printEnemy1Bullet()
{
    int e2bx = e1X + 4;
    int e2by = e1Y + 1;
    gotoxy(e2bx, e2by);
    cout << "o";
    E2bulletx[e2Index] = e2bx;
    E2bullety[e2Index] = e2by;
    activee2bullet[e2Index] = true;
    e2Index++;
}
void moveEnemy1Bullet()
{
    for (int i = 0; i < e2Index; i++)
    {
        if (activee2bullet[i] == true)
        {
            if (getCharAtxy(E2bulletx[i] + 1, E2bullety[i]) != ' ')
            {
                gotoxy(E2bulletx[i], E2bullety[i]);
                cout << " ";
                activee2bullet[i] = false;
            }
            else
            {
                gotoxy(E2bulletx[i], E2bullety[i]);
                cout << " ";
                E2bulletx[i]++;
                gotoxy(E2bulletx[i], E2bullety[i]);
                cout << "o";
            }
        }
    }
    if (fire2limit > 4)
    {
        printEnemy1Bullet();
        fire2limit = 0;
    }
    else
    {
        fire2limit++;
    }
}
void printEnemy2Bullet()
{
    int e3bx = e2X - 1;
    int e3by = e2Y + 1;
    gotoxy(e3bx, e3by);
    cout << "o";
    E3bulletx[e3Index] = e3bx;
    E3bullety[e3Index] = e3by;
    activee3bullet[e3Index] = true;
    e3Index++;
}
void moveEnemy2Bullet()
{
    for (int i = 0; i < e3Index; i++)
    {
        if (activee3bullet[i] == true)
        {
            if (getCharAtxy(E3bulletx[i] - 1, E3bullety[i]) != ' ')
            {
                gotoxy(E3bulletx[i], E3bullety[i]);
                cout << " ";
                activee3bullet[i] = false;
            }
            else if (getCharAtxy(E3bulletx[i] - 1, E3bullety[i]) == ' ')
            {
                gotoxy(E3bulletx[i], E3bullety[i]);
                cout << " ";
                E3bulletx[i]--;
                gotoxy(E3bulletx[i], E3bullety[i]);
                cout << "o";
            }
        }
    }
    if (fire3limit > 5)
    {
        printEnemy2Bullet();
        fire3limit = 0;
    }
    else
    {
        fire3limit++;
    }
}

void collisionDetection()
{
    if (getCharAtxy(pX + 1, pY) == '(' || getCharAtxy(pX + 1, pY) == 'o' || getCharAtxy(pX + 1, pY) == '\\' || getCharAtxy(pX + 1, pY) == '/' || getCharAtxy(pX + 1, pY) == '|' || getCharAtxy(pX + 1, pY) == '.' || getCharAtxy(pX + 1, pY) == '~' || getCharAtxy(pX + 1, pY) == '0' || getCharAtxy(pX + 1, pY) == ')' || getCharAtxy(pX + 1, pY) == '-' || getCharAtxy(pX, pY + 1) == '(' || getCharAtxy(pX, pY + 1) == 'o' || getCharAtxy(pX, pY + 1) == '\\' || getCharAtxy(pX, pY + 1) == '/' || getCharAtxy(pX, pY + 1) == '|' || getCharAtxy(pX, pY + 1) == '.' || getCharAtxy(pX, pY + 1) == '~' || getCharAtxy(pX, pY + 1) == '0' || getCharAtxy(pX, pY + 1) == ')' || getCharAtxy(pX, pY + 1) == '-' || getCharAtxy(pX + 1, pY + 2) == '(' || getCharAtxy(pX + 1, pY + 2) == 'o' || getCharAtxy(pX + 1, pY + 2) == '\\' || getCharAtxy(pX + 1, pY + 2) == '/' || getCharAtxy(pX + 1, pY + 2) == '|' || getCharAtxy(pX + 1, pY + 2) == '.' || getCharAtxy(pX + 1, pY + 2) == '~' || getCharAtxy(pX + 1, pY + 2) == '0' || getCharAtxy(pX + 1, pY + 2) == ')' || getCharAtxy(pX + 1, pY + 2) == '-')
    {
        pLives--;
        erasePlayer();
        pX = 30;
        pY = 25;
        printPlayer();
    }
}

void decreaseHealth()
{
    if (getCharAtxy(pX -1 , pY) == 'o' || getCharAtxy(pX -1 , pY+1) == 'o' || getCharAtxy(pX -1 , pY+2) == 'o')
        {
         pHealth-=10;
        }
     if (getCharAtxy(pX + 2, pY) == 'o'||getCharAtxy(pX + 2, pY+1) == 'o'||getCharAtxy(pX + 2, pY+2) == 'o') 
        {
            pHealth-=5;
        }
    if(pHealth<=0)
    {
        pLives--;
        erasePlayer();
        pX = 30;
        pY = 25;
        pHealth = 100;
    }
}

void calculateScore()
{
    if (getCharAtxy(eX , eY) == char(254) || getCharAtxy(eX -1, eY+1) == char(254) || getCharAtxy(eX+1  , eY+2) == char(254)||getCharAtxy(eX+6 , eY) == char(254) || getCharAtxy(eX +7, eY+1) == char(254) || getCharAtxy(eX+6  , eY+2) == char(254))
        {
             pScore+=10;
             damage-=2;
        }
    if (getCharAtxy(e1X+1 , e1Y) == char(254) || getCharAtxy(e1X , e1Y+1) == char(254)|| getCharAtxy(e1X+1 , e1Y+1) == char(254)|| getCharAtxy(e1X+2 , e1Y+1) == char(254)|| getCharAtxy(e1X+3 , e1Y+1) == char(254))
        {
            pScore+=10;
            damage1-=2;
        }
     if (getCharAtxy(e2X , e2Y) == char(254) || getCharAtxy(e2X-1 , e2Y+2) == char(254)|| getCharAtxy(e2X , e2Y+3) == char(254)||getCharAtxy(e2X -1 , eY+4) == char(254))
        {
            pScore+=10;
            damage2-=2;
        }

}

void gameOver()
{
    system("cls");
    cout << R"(\033[38;5;1m
 _____ ____  _      _____   ____  _     _____ ____ 
/  __//  _ \/ \__/|/  __/  /  _ \/ \ |\/  __//  __\
| |  _| / \|| |\/|||  \    | / \|| | //|  \  |  \/|
| |_//| |-||| |  |||  /_   | \_/|| \// |  /_ |    /
\____\\_/ \|\_/  \|\____\  \____/\__/  \____\\_/\_\
                                                   
)";
    Sleep(800);
    system("cls");
    cout << "\n\n";
    cout << "Press any key to continue..." << endl;
    getch();
}

void lose()
{
    system("cls");
    cout<<endl<<endl<<endl;
cout<<"                      __      __  ______   __    __        __         ______    ______   ________ "<<endl;
cout<<"                     /  \\    /  |/      \\ /  |  /  |      /  |       /      \\  /      \\ /        |"<<endl;
cout<<"                     $$  \\  /$$//$$$$$$  |$$ |  $$ |      $$ |      /$$$$$$  |/$$$$$$  |$$$$$$$$/ "<<endl;
cout<<"                      $$  \\/$$/ $$ |  $$ |$$ |  $$ |      $$ |      $$ |  $$ |$$ \\__$$/ $$ |__    "<<endl;
cout<<"                       $$  $$/  $$ |  $$ |$$ |  $$ |      $$ |      $$ |  $$ |$$      \\ $$    |   "<<endl;
cout<<"                        $$$$/   $$ |  $$ |$$ |  $$ |      $$ |      $$ |  $$ | $$$$$$  |$$$$$/    "<<endl;
cout<<"                         $$ |   $$ \\__$$ |$$ \\__$$ |      $$ |_____ $$ \\__$$ |/  \\__$$ |$$ |_____ "<<endl;
cout<<"                         $$ |   $$    $$/ $$    $$/       $$       |$$    $$/ $$    $$/ $$       |"<<endl;
cout<<"                         $$/     $$$$$$/   $$$$$$/        $$$$$$$$/  $$$$$$/   $$$$$$/  $$$$$$$$/ "<<endl; 
cout<<"\n\n\npress any key to continue";
getch();
Sleep(1000);
}

void won()
{
    system("cls");
    cout<<endl<<endl<<endl;
cout<<"                      __      __  ______   __    __        __       __   ______   __    __ "<<endl;
cout<<"                     /  \\    /  |/      \\ /  |  /  |      /  |  _  /  | /      \\ /  \\  /  |"<<endl;
cout<<"                     $$  \\  /$$//$$$$$$  |$$ |  $$ |      $$ | / \\ $$ |/$$$$$$  |$$  \\ $$ |"<<endl;
cout<<"                      $$  \\/$$/ $$ |  $$ |$$ |  $$ |      $$ |/$  \\$$ |$$ |  $$ |$$$  \\$$ |"<<endl;
cout<<"                       $$  $$/  $$ |  $$ |$$ |  $$ |      $$ /$$$  $$ |$$ |  $$ |$$$$  $$ |"<<endl;
cout<<"                        $$$$/   $$ |  $$ |$$ |  $$ |      $$ $$/$$ $$ |$$ |  $$ |$$ $$ $$ |"<<endl;
cout<<"                         $$ |   $$ \\__$$ |$$ \\__$$ |      $$$$/  $$$$ |$$ \\__$$ |$$ |$$$$ |"<<endl;
cout<<"                         $$ |   $$    $$/ $$    $$/       $$$/    $$$ |$$    $$/ $$ | $$$ |"<<endl;
cout<<"                         $$/     $$$$$$/   $$$$$$/        $$/      $$/  $$$$$$/  $$/   $$/ "<<endl;  
cout<<"\n\n\npress any key to continue";
getch();
Sleep(1000);
}


void general()
{
    cout << "Press any key to continue" << endl;
    getch();
    system("cls");
}

void resetColor()
{
    cout << " \033[38;5;7m";
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
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

void hideCursor()
{
    // Get the console handle
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

    // Retrieve the current console cursor information
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(consoleHandle, &cursorInfo);

    // Set the cursor visibility to false
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &cursorInfo);
}
