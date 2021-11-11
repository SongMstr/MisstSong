#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "centrar_texto.h"
//#include "struct.h"
#include "color.h"

#define X x

void nuevo();
void eliminar();
void ingresos();
void ahorros();
void adeudos();
void gastos();
void extras();
void error();

int main(){
    int c;
    FILE *archivo;
    archivo = fopen("archivo.txt", "r");
    if(archivo = NULL){
        //error();
    }else{
    Color(WHITE, BLACK); centrar_texto("Bienvenido\n", 0);
    Color(BLACK, WHITE);

        printf("\n 1.Nuevo Dato\n");
        printf("\n 2.Eliminar dato\n");
        printf("\n 3.Mis Ingresos\n");
        printf("\n 4.Ahorros\n");
        printf("\n 5.Adeudos\n");
        printf("\n 6.Gastos\n");
        printf("\n 7.Ingresos Extras\n");

        printf("\n Opcion: "); scanf("%i", &c);
        switch(c)
        {
        case 1:
            system("cls");
            nuevo();
            break;
        case 2:
            system("cls");
            eliminar();
            break;

        default:
            system("cls");
            //error();
            break;
        }
    }
}
void nuevo(){
    FILE* archivo;
    int x;
    archivo = fopen("archivo.txt","a");
    printf("Escriba el una cantidad de flujo de ingresos fijos:");
    while(((x = getchar()) != '\n') && x != EOF){
        printf("%d", fputc(x, archivo));
    }
    fclose(archivo);
    getch();
    return;

    }

void eliminar(){
    int c;
    FILE* archivo;

    Color(WHITE, RED);centrar_texto("Advertencia\n", 0);
    centrar_texto("Se eliminara toda la informacion del Archivo\n",1);
    centrar_texto("Desea proceder\n", 2);
    centrar_texto("1. SI     2.NO \n", 3);
    scanf("c%",&c);
    switch(c)
    {
    case 1:
     archivo = fopen("archivo.txt", "w");
     printf("Informacion Eliminada con Exito");
     break;
    case 2:
     main();
     break;
    }
}
