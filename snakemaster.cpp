#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80
#define ESC 27

using namespace std;

int cuerpo[200][2];
int n=1;
int tam=3;
int x=10, y=12;
char tecla;

void gotoxy(int x, int y)
{
    HANDLE hCon;
    COORD dwPos;

    dwPos.X=x;
    dwPos.Y=y;
    hCon=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hCon, dwPos);
}

void pintar()
{
    for (int i=2; i<78; i++){
        gotoxy(i, 3); cout << "-" << endl;
        gotoxy(i, 23); cout << "-" << endl;
    }
    for (int i=4; i<23; i++){
        gotoxy(2, i); cout << "|" << endl;
        gotoxy(77, i); cout << "|" << endl;
    }
    gotoxy(2, 3); cout << "O" << endl;
    gotoxy(2, 23); cout << "O" << endl;
    gotoxy(77, 3); cout << "O" << endl;
    gotoxy(77, 23); cout << "O" << endl;
}

void guarpos()
{
    cuerpo[n][0]=x;
    cuerpo[n][1]=y;
    n++;
    if (n==tam)
        n=1;

}

void pintcue()
{
    for (int i=1; i<tam; i++){
        gotoxy(cuerpo[i][0], cuerpo[i][1]);
        cout << "*" << endl;
    }
}

void borcue()
{
    gotoxy(cuerpo[n][0], cuerpo[n][1]);
    cout << " " << endl;

}

int main()
{
    pintar();
    while (tecla!=ESC){
        borcue();
        guarpos();
        pintcue();
        x++;
        Sleep(100);
    }
    system("pause>NULL");
    return 0;
}
