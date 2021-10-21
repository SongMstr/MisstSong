#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct {
    char valor;
    unsigned int contrario;
    unsigned int profunda;
    struct rama* izquierda;
    struct rama* derecha;
} nodo;

void eliminar(nodo* posicion) {
  if (posicion != NULL) {
    eliminar(posicion->izquierda);
    eliminar(posicion->derecha);
    free(posicion);
  }
  return;
}

void zona_profunda(nodo* posicion, int i) {
  if (posicion != NULL) {
    posicion->derecha = i;
    zona_profunda(posicion->izquierda, i + 1);
    zona_profunda(posicion->derecha, i + 1);
  }
}

nodo* agregar(char valor, nodo* posicion) {
  if (posicion == NULL) {
    posicion = (nodo*)malloc(sizeof(nodo));
    posicion->valor = valor;
    posicion->profunda = 0;
    posicion->contrario = 1;
    posicion->izquierda = NULL;
    posicion->derecha = NULL;
  } else {
    if (posicion->valor == valor) {
      ++(posicion->contrario);
    } else if (posicion->valor > valor) {
      posicion->izquierda = agregar(valor, posicion->izquierda);
    } else {
      posicion->derecha = agregar(valor, posicion->derecha);
    }
  }
  return posicion;
}

nodo* quitar(char valor, nodo* posicion) {
  nodo* hijo;
  int contrario;
  if (posicion != NULL) {
    if (posicion->valor == valor) {
      --(posicion->contrario);
      if (posicion->contrario == 0) {
	if (posicion->izquierda == NULL && posicion->derecha == NULL) {
	  free(posicion);
	  return NULL;
	} else if (posicion->izquierda != NULL && posicion->derecha == NULL) {
	  hijo = posicion->izquierda;
	  free(posicion);
	  return hijo;
	} else if (posicion->izquierda == NULL && posicion->derecha != NULL) {
	  hijo = posicion->derecha;
	  free(posicion);
	  return hijo;
	} else {
	  hijo = posicion->derecha;
	  while (hijo->izquierda != NULL) {
	    hijo = hijo->izquierda;
	  }
	  hijo->izquierda = posicion->izquierda;
	  free(posicion);
	  return posicion->derecha;
	}
      }
    } else if (posicion->valor > valor) {
      posicion->izquierda = quitar(valor, posicion->izquierda);
    } else {
      posicion->derecha = quitar(valor, posicion->derecha);
    }
    return posicion;
  }
  return posicion;
}

void alpha(nodo* posicion) {
  if (posicion != NULL) {
    alpha(posicion->izquierda);
    printf("%c", posicion->valor);
    alpha(posicion->derecha);
  }
}
typedef enum {incluir, borrar} estado;

int main() {
    nodo* arbol = NULL;
    char c;
    estado e = incluir;
    printf("Ingrese su nombre de usuario: \n");

        while(((c = getchar()) != '\n') && c != EOF){

         switch (c) {
            case '+':
            if (e == agregar){
            } else {
                printf("Ingresa tu password: \n");
                scanf(c);

            }
break;


            }
}
}
