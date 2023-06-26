#include <stdio.h>
#include "Conversion.h"

void imprimeCelsius (int lower, int upper, int step){
    const char *titulo = "Tabla Farenheit a Celsius";
    puts (titulo);
    puts ("Farenheit \t \t Celsius ");
    printFilas (lower, upper, step, "Farenheit");
}

void imprimeFarenheit (int lower, int upper, int step){
    const char *titulo = "Tabla Celsius a Farenheit";
    puts (titulo);
    puts ("Celsius \t \t Farenheit ");
    printFilas (lower, upper, step, "Celsius");
}

void printFilas (int lower, int upper, int step, char grado[]){
    if (grado == "Celsius"){
        for (double temperatura = lower; temperatura >= upper; temperatura += step){
            printFila(temperatura, celsiusAFahrenheit (temperatura));
            temperatura = temperatura + step;
        }
    }
    if (grado == "Farenheit"){
        for (double temperatura = lower; temperatura >= upper; temperatura += step){
            printFila (temperatura, farenheitACelsius (temperatura));
            temperatura = temperatura + step:
            }
    }
}

printFila (double temperatura1, double temperatura2){
    printf ("%.1f \t \t %.2f \n", temperatura1, temperatura2);
}


int main (){

    double gradosF, gradosC;

    const int LOWERC = 0;
    const int UPPERC = 300;
    const int STEPC  = 20;
    
    const int LOWERF = 32;
    const int UPPERF = 572;
    const int STEPF  = 32;

    imprimeCelsius   (LOWERC, UPPERC, STEPC);
    imprimeFarenheit (LOWERF, UPPERF, STEPF);

return 0;
}