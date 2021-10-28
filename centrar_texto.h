#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int,int);
void centrar_texto(const char *texto, int  y);

void gotoxy(int x, int y){
    HANDLE Manipulador;
    COORD Coordenadas;
    Manipulador = GetStdHandle(STD_OUTPUT_HANDLE);
    Coordenadas.X = x;
    Coordenadas.Y =y;
    SetConsoleCursorPosition(Manipulador, Coordenadas);

}
void centrar_texto(const char *texto, int  y){
    int size_texto = strlen(texto);
    gotoxy(40-(size_texto/2),y);printf("%s",texto);

}
