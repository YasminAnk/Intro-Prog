// Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
// turma 41

#include <stdio.h>

//prototipo de todas as funcoes
double GrauToRad(double grau);
double RadToGrau(double rad);

double CelsiusToFahrenreit(double celsius);
double FahrenheitToCelsius (double fahrenheit);

double CelsiusToKelvin (double celsius);
double KelvinToCelsius (double kelvin);

double FahrenheitToKelvin (double fahrenheit);
double KelvinToFahrenheit (double kelvin);


int main(){
    int op1, op2;
    double valor;
    double result, result2;
    printf("\n### CONVERSOR DE UNIDADES ###\n\n");
    printf("1) Angulo\n2) Temperatura\n\n");
    printf("Digite uma opcao: ");
    scanf("%i", &op1);

    if(op1 == 1){
        printf("\n\nQual a unidade de origem?\n\n1) Graus\n2) Radianos\n\nSelecione uma opcao: ");
        scanf("%i", &op2);
        printf("\n");
        switch(op2){
            case 1:
            printf("Digite o valor em Graus: ");
            scanf("%lf", &valor);
            result = GrauToRad(valor);
            printf("Valor em Radianos: %.2lf\n\n", result);
            break;
        case 2:
            printf("Digite o valor em Radianos: ");
            scanf("%lf", &valor);
            result = RadToGrau(valor);
            printf("Valor em Graus: %.2lf\n\n", result);
            break;
        default:
            printf("Nao existe esta opcao!\n");
            break;
        }
    }else if (op1 ==2){
        printf("\n\nQual a unidade de origem?\n\n1) Celsius\n2) Fahrenheit\n3) Kelvin\n\nSelecione uma opcao: ");
        scanf("%i", &op2);
        printf("\n");
        switch(op2){
            case 1:
                printf("Digite o valor em Celsius: ");
                scanf("%lf", &valor);
                result = CelsiusToFahrenreit(valor);
                result2 = CelsiusToKelvin(valor);
                printf("Valor em Fahrenheit: %.2lf", result);
                printf("\nValor em Kelvin: %.2lf\n\n", result2);
                break;
            case 2:
                printf("Digite o valor em Fahrenheit: ");
                scanf("%lf", &valor);
                result = FahrenheitToCelsius(valor);
                result2 = FahrenheitToKelvin(valor);
                printf("Valor em Celsius: %.2lf", result);
                printf("\nValor em Kelvin: %.2lf\n\n", result2);
                break;
            case 3:
                printf("Digite o valor em Kelvin: ");
                scanf("%lf", &valor);
                result = KelvinToCelsius(valor);
                result2 = KelvinToFahrenheit(valor);
                printf("Valor em Celsius: %.2lf", result);
                printf("\nValor em Fahrenheit: %.2lf\n\n", result2);
                break;
            default:
                printf("Nao existe esta opcao!\n");
                break;
        }
    }else{
        printf("Nao existe esta opcao!\n");
    }

}

//coverte graus para radianos
double GrauToRad (double grau){
    return (grau * 3.14)/180;
}

//converte radianos para graus
double RadToGrau (double rad){
    return (rad * 180)/3.14;
}

//converte celsius em fahrenheit
double CelsiusToFahrenreit (double celsius){
    return (celsius*1.8)+32;
}

//converte graus celsius para kelvin
double CelsiusToKelvin(double celsius){
    return (double)celsius+273.15;
}

//converte fahrenheit em celsius
double FahrenheitToCelsius( double fahrenheit){
    return (fahrenheit-32)/1.8;
}

//converte Fahrenheit em graus Kelvin
double FahrenheitToKelvin (double fahrenheit){
    return (fahrenheit - 32)*(5/9)+273;
}

//converte graus Kelvin para Celsius
double KelvinToCelsius (double kelvin){
    return kelvin-273.15;
}

//converte Kelvin para Fahrenheit
double KelvinToFahrenheit (double kelvin){
    return ( kelvin - 273.15)*1.8 +32;
}



