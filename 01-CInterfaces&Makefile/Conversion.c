#include "conversion.h"

double celsiusAFahrenheit (double celsius){
    return (celsius * 9.0 / 5.0) + 32.0;
}

double farenheitACelsius (double fahrenheit){
    return (fahrenheit - 32.0) * (5.0 / 9.0);
}