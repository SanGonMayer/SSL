#include<assert.h>
#include"Conversion.h"

int main (void){
    double unaTemperatura;
    scanf("%f", &unaTemperatura);

    assert (farenheitACelsius(unaTemperatura)  == farenheitACelsius(celsiusAFahrenheit(farenheitACelsius(unaTemperatura))));
    assert (celsiusAFahrenheit(unaTemperatura) == celsiusAFahrenheit(farenheitACelsius(celsiusAFahrenheit(unaTemperatura))));

return 0;
}