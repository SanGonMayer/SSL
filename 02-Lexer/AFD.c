#include <stdio.h>
#include <ctype.h>

int main() {
    char caracterLeido;   
    int  linea   = 1;        
    int  columna = 1;      

    printf("Ingrese la expresión: ");

    while ((caracterLeido = getchar()) != EOF) {
        if (caracterLeido == '\n') {
            linea++;       
            columna = 1;   
            continue;      
        } 
        else if (caracterLeido == ' ' || caracterLeido == '\t') {
            columna++;     
            continue;      
        } 
        else if (isdigit(caracterLeido)) {
            printf("%c\t\tConstante numérica\n", caracterLeido);
        } 
        else if (isalpha(caracterLeido)) {
            printf("%c\t\tIdentificador\n", caracterLeido);
        }
        else if (caracterLeido == '+' || caracterLeido == '-' || caracterLeido == '*' || caracterLeido == '/' || caracterLeido == '(' || caracterLeido == ')') {
            printf("%c\t\tOperador\n", caracterLeido);
        } 
        else {
            printf("Error: Caracter desconocido '%c' en la linea %d, columna %d\n", caracterLeido, linea, columna); 
        }

        columna++;
    }

    return 0; 
}
