#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "centrar_texto.h"
#include "color.h"

#define CLEAR system("cls")

void nuevo();
void eliminar();
void ingresos();
void inverciones();
void extras();
void error();

int main(){
    int c;
    FILE *archivo;
    archivo = fopen("archivo.txt", "r");
    if(0 && archivo == NULL){
         error();
    }else{
    Color(WHITE, BLACK); centrar_texto("Bienvenido\n", 0);
    Color(BLACK, WHITE);

        printf("\n 1. Nuevo Ingreso\n");
        printf("\n 2. Mis Ingresos\n");
        printf("\n 3. Inversiones\n");
        printf("\n 4. Ingresos Extras\n");
        printf("\n 5. Salir\n");

        printf("\n Opcion: "); scanf("%i", &c);
        switch(c)
        {
        case 1:
            system("cls");
            eliminar();
            break;
        case 2:
           CLEAR;
            ingresos();
            break;
        case 3:
            CLEAR;
            inverciones();
            break;
        case 4:
            CLEAR;
            extras();
            break;

        case 5:
            return 0;
            break;

        default:
            system("cls");
            centrar_texto("Ud. eligio una opcion inexistente.",2);
            centrar_texto("Presione Enter para continuar.",3);
            scanf("%c", &c);
                if( c > 0){
                     CLEAR;
                     main();
                }
            break;
        }
    }
}
void nuevo(){
    FILE* archivo;
    int* x;
    archivo = fopen("archivo.txt", "a");
    printf("Escriba la nueva cantidad de flujo de ingresos fijos en periodos quincenales: $");
       scanf("%i", &x);
       getch();
       if(x > 0){
       fprintf(archivo, "%i\n", x);
       }
    fclose(archivo);
    ingresos();
    }

void eliminar(){
    char c;
    FILE* archivo;

    Color(WHITE, RED);centrar_texto("Advertencia\n", 0);
    Color(BLACK, WHITE);
    centrar_texto("Se cambiara toda la informacion del Archivo\n",1);
    centrar_texto("Desea proceder\n", 2);
    centrar_texto("1. SI     2.NO \n", 3);
    scanf("%i", &c);{
    switch(c)
    {
    case 1:
     CLEAR;
     archivo = fopen("archivo.txt", "w");
     centrar_texto("Informacion Eliminada con Exito", 2);
     centrar_texto("Presione Enter para continuar", 3);
      scanf("%d", &c);{
      if(c != 0){
        CLEAR;
        nuevo();
      }
     break;
    case 2:
    CLEAR;
     main();
     break;

    default:
        CLEAR;
        printf("Error la opcion no existe.");
        break;
    }
   }
  }
}

void ingresos(){
    char c;
    int i;
    FILE* archivo = fopen("archivo.txt", "r");
    printf("Este es su Ingreso.\n");
    while(feof(archivo) == 0){
        c = fgetc(archivo);
        printf("%c", c);
     }
    fclose(archivo);
    printf("Presione 1 para continuar."); scanf("%i", &i);{
        if(i != 0){
            CLEAR;
            main();
        }
    }

        }

void inverciones(){
    int c, i, j, n, res;
    float f, fres, fn;
    FILE* archivo = fopen("archivo.txt", "r");
    FILE* ahorro;

    centrar_texto("Escoga una opcion de Invercion.", 2);
    printf("\n 1. Apartados\n");
    printf("\n 2. Plan Bancario\n");
    printf("\n 3. Pagare\n");
    printf("\n Escoga una opcion: ");

    scanf("%i", &c);{
        switch(c){
        case 1:
            CLEAR;
            fscanf(archivo,"%i", &i);
            printf("Cuanto dinero desea separar?\n");
            scanf("%i", &j);
            printf("Por cuantas quincenas?\n");
            scanf("%i", &n);{
            res = ((i - j) * n);
                if(res < 0){
                printf("No es posible realizar el apartado, la cantidad a guardar es mayor a los ingresos ");
            }else{
            if(res == 0 || res >0 ){
                printf("Esto es e monto a ganar: $%i\n",((i - j) * n));
        }
    }
}
            break;
        case 2:
            ahorro = fopen("ahorro.txt", "a");
                CLEAR;
             printf("\nCosto del objeto:"); scanf("%i", &i);
             printf("\nPorcentaje de Ahorro:"); scanf("%i", &j);
                res = (i * j)/100;
             printf("\nLa ganancia fue de: $ %i", res);
             fprintf(ahorro, "+%i", res);
                fclose(ahorro);
             printf("\n Presione 1 para continuar");scanf("%i", &c);
             if(c > 0 && c == 1){
                CLEAR;
                main();
             }
             break;
        case 3:
            CLEAR;
            printf("\nFavor de hacer su deposito, no menor a $ 2,000\n");
            scanf("%f", &f);
            printf("\nPlazo fijo al que quiere invertir:");
            printf("\n1. Mensual");
            printf("\n2. Bimestral");
            printf("\n3. Semestral");
            printf("\n4. Anual");
            printf("\nEliga una opcion: ");
            scanf("%i", &c);
                switch(c){
                case 1:
                    fn = (f * 1) / 100;
                    printf("Ud. obtendra ganancias de %.2f en un mes: ", fn);
                    printf("\nPresione 1 para Continuar");
                    scanf("%i", &c);
                        if(c > 0 && c == 1){
                                CLEAR;
                            main();
                }
                break;
                case 2:
                    fn = (f * 2) / 100;
                    printf("Ud. obtendra ganancias de $ %.2f:", fn);
                    printf("\nPresione 1 para Continuar");
                    scanf("%i", &c);
                        if(c > 0 && c == 1){
                                CLEAR;
                            main();
                }
                break;
                case 3:
                    fn = (i * 6) / 100;
                    printf("Ud. obtendra ganancias de $ %.2f:", fn);
                    printf("\nPresione 1 para Continuar");
                    scanf("%i", &c);
                        if(c > 0 && c == 1){
                                CLEAR;
                            main();
                }
                break;
                case 4:
                    fn = (i * 12) / 100;
                    printf("Ud. obtendra ganancias de $ %.2f:", fn);
                    printf("\nPresione 1 para Continuar");
                    scanf("%i", &c);
                        if(c > 0 && c == 1){
                                CLEAR;
                            main();
                    }
                    break;

    fclose(archivo);
    printf("\nPresione 1 para continuar: ");
    scanf("%i", &c);{
            if(c > 0){
                CLEAR;
                main();
                    }
                }

            }
        }
    }
}

void extras(){
    FILE* extras = fopen("extras.txt", "a");
    int c, i;

        printf("\n Escriba la cantidad que desea agregar: \n");scanf("%i", &i);{
            fprintf(extras, "%i", i);
        }
        fclose(extras);
        printf("\nPresione 1 para continuar: ");
    scanf("%i", &c);{
            if(c > 0){
                CLEAR;
                main();
                    }
                }

}

