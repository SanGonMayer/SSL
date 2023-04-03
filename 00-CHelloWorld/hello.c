#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *archivo = fopen("output.txt","w");

    fprintf(archivo, "Hello, World!");

    fclose(archivo);
    
    printf("Hello, World!");
   return 0;
}