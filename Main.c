#include <stdio.h>
#include <stdlib.h>

#define PIN 3
#include "Estructura.h"
#include "centrar_texto.h"

int main(){

    char c;
    FILE* personal = fopen("personal.txt", "r");
    FILE* Horarios = fopen("Horarios.txt", "r");

    do
    {
        centrar_texto("** Bienvenido **", 1);
        printf("\n 1. Registro de Empleados");
        printf("\n 2. Generar Reporte de empleado");
        printf("\n 3. Horas Trabajadas");
        printf("\n 4. Lista de Empleados");
        printf("\n 5. Salir");
        while(c =(getchar()) != EOF){

        switch(c)
        {
        default:
            printf("Opcion no Valida");
            break;
        case 1:
            nuevo_empleado();
            break;
        case 2:
            generar_reporte();
            break;
        case 3:
            horas_trabajadas();
            break;
        case 4:
            lista_empleado();
            break;
        case 5:
            break;
        }
        while(c != 5);
    }
  }

}
void listado_empleado(){
  char c;
  int i, count = 0;
  empleados** s;
  FILE* personal = fopen("personal.txt", "r");
  while ((c = fgetc(personal)) != EOF) {
    if (c == '\n') {
      count++;
    }
  }
  s = (personal**)malloc(sizeof(personal*) * count);
  rewind(personal);
  for (i = 0; i < count; i++) {
    s[i] = (empleados*)malloc(sizeof(empleados));
    s[i]->username = (char*)malloc(sizeof(char) * (PIN + 1));
    fscanf(personal, "%u %s %s", &(s[i]->username), s[i]->password);
  }
  fclose(personal);
  for (i = 0; i < count; i++) {
    printf("personal %d %s (%u) is %s\n", (i + 1), s[i]->username, s[i]->password);
    free(s[i]->username);
    free(s[i]->password);
    free(s[i]);
  }
  free(s);
  return 0;

}

