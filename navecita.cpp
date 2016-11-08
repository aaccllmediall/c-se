#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ESPACIOS 75

using namespace std;

char avion_11[]={' ', ' ', ' ', '*', ' ', ' ', ' ', 0};
char avion_12[]={' ', '|', '*', '*', '*', '|', ' ', 0};
char avion_13[]={'*', '*', ' ', '*', ' ', '*', '*', 0};

char CampoDeMovimientoX[]={' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                           ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                           ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                           ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                           ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                           ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                           ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                           ' ', ' ', ' ', ' ', ' '};

char MoverseX[ESPACIOS]="";

void pintarAvion(int x)
{
    strcpy(MoverseX, CampoDeMovimientoX);
    MoverseX[x]=0;

    cout << MoverseX;
    puts(avion_11);
    cout << MoverseX;
    puts(avion_12);
    cout << MoverseX;
C:\Users\CSUNSA01\Desktop\sfh\main.cpp    puts(avion_13);
}

int main()
{
    char tecla;
    int j, l, horizontal=35;


    do {
        pintarAvion(horizontal);
        tecla=getch();

        if (tecla=='j' && horizontal>1)
            horizontal-=2;
        else if (tecla=='l' && horizontal<71)
            horizontal+=2;

        system("cls");

    } while(1 == 1);
    getch();
}
