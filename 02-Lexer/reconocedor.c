#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#include "reconocedor.h"

char* analizarCaracter(char caracterLeido, int linea, int columna) {
    
    if (isdigit(caracterLeido)) {
        printf("%c\t\tConstante numerica\n", caracterLeido);
        return "Constante numerica";
    } 
    if (caracterLeido == '+' || caracterLeido == '-' || caracterLeido == '*' || caracterLeido == '/' || caracterLeido == '(' || caracterLeido == ')') {
        printf("%c\t\tOperador\n", caracterLeido);
        return "Operador";
    } 
    else {
        printf("Error: Caracter desconocido '%c' en la linea %d, columna %d\n", caracterLeido, linea, columna); 
        return "Error";
    }

}

char** analizarCadena(const char *cadena) {
    int longitud = strlen(cadena);
    char **resultados = (char **)malloc(sizeof(char *) * (longitud + 1)); // +1 para el elemento final NULL
    int indice = 0;
    
    for(int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] == ' ' || cadena[i] == '\t') {continue;} 
        resultados[indice] = analizarCaracter(cadena[i], 1, i+1);
        indice++;
    }

    resultados[indice] = NULL;

    return resultados;
}


