#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#include "reconocedor.h"


int main() {
    char caracterLeido;   
    int  linea   = 1;        
    int  columna = 1;

printf("Ingrese una expresion:\n\n");
    
    while ((caracterLeido = getchar()) != EOF) {
        if (caracterLeido == '\n') {
            linea++;       
            columna = 1;
            continue;
        } 
        if (caracterLeido == ' ' || caracterLeido == '\t') {
            columna++;
            continue;
        } 

        char *res = analizarCaracter(caracterLeido, linea, columna);

        columna++;
    }

    return 0; 
}