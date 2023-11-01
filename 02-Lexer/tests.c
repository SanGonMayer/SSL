#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "reconocedor.h"

int main() {
    char** resultado1 = analizarCadena("1+1");

    assert(strcmp (resultado1[0], "Constante numerica") == 0);


    char** cadenaSinErrores = analizarCadena("1+1");

    assert(strcmp (cadenaSinErrores[0], "Constante numerica") == 0);
    assert(strcmp (cadenaSinErrores[1], "Operador")) == 0;
    assert(strcmp (cadenaSinErrores[2], "Constante numerica")== 0);

    char** cadenaConIdentificadorInvalido = analizarCadena("1+.");
    assert(strcmp (cadenaConIdentificadorInvalido[0], "Constante numerica") == 0);
    assert(strcmp (cadenaConIdentificadorInvalido[1], "Operador") == 0);
    assert(strstr(cadenaConIdentificadorInvalido[2], "Error") != NULL);

    
    char** cadenaValidaSinOperadores = analizarCadena("123");
    assert(strcmp (cadenaValidaSinOperadores[0], "Constante numerica") == 0);
    assert(strcmp (cadenaValidaSinOperadores[1], "Constante numerica") == 0);
    assert(strcmp (cadenaValidaSinOperadores[2], "Constante numerica") == 0);

    char** cadenaDeOperadoresValida = analizarCadena("+*/");
    assert(strcmp (cadenaDeOperadoresValida[0], "Operador") == 0);
    assert(strcmp (cadenaDeOperadoresValida[1], "Operador") == 0);
    assert(strcmp (cadenaDeOperadoresValida[2], "Operador") == 0);

    char** cadenaDeLetrasInvalida = analizarCadena("ABC");
    assert(strstr(cadenaDeLetrasInvalida[0], "Error") != NULL);
    assert(strstr(cadenaDeLetrasInvalida[1], "Error") != NULL);
    assert(strstr(cadenaDeLetrasInvalida[2], "Error") != NULL);

}