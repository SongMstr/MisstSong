#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>  
void Color(int Background, int Text); 

enum Colors { 
 BLACK = 0,
 BLUE = 1,
 GREEN = 2,
 CYAN = 3,
 RED = 4,
 MAGENTA = 5,
 BROWN = 6,
 LGREY = 7,
 DGREY = 8,
 LBLUE = 9,
 LGREEN = 10,
 LCYAN = 11,
 LRED = 12,
 LMAGENTA = 13,
 YELLOW = 14,
 WHITE = 15
};

void Color(int Background, int Text){ 

 HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE); 

 
 int    New_Color= Text + (Background * 16);

 SetConsoleTextAttribute(Console, New_Color); 
}
