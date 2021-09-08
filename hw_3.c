#include <stdio.h>

int main(){
    int c;
    char y = 'X';
    int j = 0;

    while ((c = getchar()) != EOF){

            if((c == 40 || c == 91 || c == 34 || c == 39) && j == 0){
              j = 1;

            }
            else if(c == 41 || c == 93 || c == 34 || c == 39){
                j = 0;
            }
        if(c >= 48 && c <= 57 && j == 0){
            putchar(y);

        }
        else{
            putchar(c);
        }


    }

return 1;
}
