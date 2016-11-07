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
int dir=3;
int x=10, y=12;
int xc=30, yc=15;
int vel=100, h=1;
int score=0;
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

void teclear()
{
   if (kbhit()){
        tecla=getch();
        switch(tecla){
            case ARRIBA:
                if (dir!=2){
                    dir=1;
                    break;
                }
            case ABAJO:
                if (dir!=1){
                    dir=2;
                    break;
                }
            case DERECHA:
                if (dir!=4){
                    dir=3;
                    break;
                }
            case IZQUIERDA:
                if (dir!=3){
                    dir=4;
                    break;
                }
        }
    } 
}

void comida()
{
    if (x==xc && y==yc){
        xc=(rand()%73)+4;
        yc=(rand()%19)+4;
        tam++;
        score+=10;  //fijate en la velocidad //
        gotoxy(xc, yc);
        cout << "*" << endl;
        veloci();
    }
}

bool gaver()
{
    if (y==3 || y==23 || x==2 || x== 77)
        return False;
    else
        return True;
    for (int j=tam-1; j>0; j--)
        if (cuerpo[j][0]==x && cuerpo[j][1]==y)
            return False;
}

void punt()
{
    gotoxy(3, 1);
    cout << "SCORE:" << score << endl;
}

void veloci()
{
    if (score==h*20){
        vel-=10;
        h++;
    }
}

int main()
{
    pintar();
    gotoxy(xc, yc);
    cout << "+" << endl;
    while (tecla!=ESC || gaver()){
        borcue();
        guarpos();
        pintcue();
        comida();
        punt();
        teclear();
        teclear();
        if (dir==1)
            y--;
        if (dir==2)
            y++;
        if (dir==3)
            x++;
        if (dir==4)
            x--;
        Sleep(vel);
    }
    system("pause>NULL");
    return 0;
}
