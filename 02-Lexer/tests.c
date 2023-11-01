#include <stdio.h>
#include <assert.h>
#include "AFD.c"
#include "reconocedor.h"

int main() {
    char** resultado1 = analizarCadena("1+1");

    assert(resultado1[0] == "Constante Numerica");


    char** cadenaSinErrores = analizarCadena("1+1");

    assert(cadenaSinErrores[0] == "Constante numerica");
    assert(cadenaSinErrores[1] == "Operador");
    assert(cadenaSinErrores[2] == "Constante numerica");

    char** cadenaConIdentificadorInvalido = analizarCadena("1+.");
    assert(cadenaConIdentificadorInvalido[0] == "Constante numerica");
    assert(cadenaConIdentificadorInvalido[1] == "Operador");
    assert(strstr(cadenaConIdentificadorInvalido[2], "Error") != NULL);

    
    char** cadenaValidaSinOperadores = analizarCadena("123");
    assert(cadenaValidaSinOperadores[0] == "Constante numerica");
    assert(cadenaValidaSinOperadores[1] == "Constante numerica");
    assert(cadenaValidaSinOperadores[2] == "Constante numerica");

    char** cadenaDeOperadoresValida = analizarCadena("+*/");
    assert(cadenaDeOperadoresValida[0] == "Operador");
    assert(cadenaDeOperadoresValida[1] == "Operador");
    assert(cadenaDeOperadoresValida[2] == "Operador");

    char** cadenaDeLetrasInvalida = analizarCadena("ABC");
    assert(strstr(cadenaDeLetrasInvalida[0], "Error") != NULL);
    assert(strstr(cadenaDeLetrasInvalida[1], "Error") != NULL);
    assert(strstr(cadenaDeLetrasInvalida[2], "Error") != NULL);

}