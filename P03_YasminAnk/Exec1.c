// Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
// turma 41

#include <stdio.h>

void converterCelsius(float celsius, float *fahrenheit, float *kelvin);

void converterCelsius(float celsius, float *fahrenheit, float *kelvin){
    *fahrenheit = celsius*(9/5)+32;
    *kelvin = celsius+273.15;
}

int main(){
    float celsius, fahrenheit, kelvin;
    printf("Digite o valor em graus Celsius: ");
    scanf("%f", &celsius);

    converterCelsius(celsius, &fahrenheit,  &kelvin);
    printf("O valor em fahrenheit eh: %f\n", fahrenheit);
    printf("O valor em graus Kelvin eh: %f\n", kelvin);

}
