#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(){
    int i, k, n, j, a, o;
    char A[10], B[10], C[5], c;

    printf("Digite un numero : ");

    i = 0;
    while(((c = getchar()) != '\n') && c != EOF){
    A[i] = c;


    i++;

}

    o = atoi(C);
    k = atoi(A);

    printf("Digite su segundo numero: ");

    i = 0;
    while(((c = getchar()) != '\n') && c != EOF){
    B[i] = c;
    i++;


}
    n = atoi(B);

    printf("Operacion a realisar: ");
    scanf("\n %c", &c);

        switch(c)
        {
            case'+':{
            printf("\nResultado = %d", k + n);
            break;
            }
            case '-':{
            printf("\nResultado = %d", k - n);
            break;
            }
            case '*':{
            printf("\nResultado = %d", k * n);
            break;
            }
            case '/':{
            printf("\nResultado = %d", k / n);
            break;
            default:
                printf("\nError");
        }


}

return c;

}
