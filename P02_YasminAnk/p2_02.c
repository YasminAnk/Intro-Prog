// Matrícula: 21.1.4027 Yasmin Ank Alves Gonçalves 
// turma 41

#include <stdio.h>
#include <math.h>

double Dist (double x1, double y1, double x2, double y2){
    return sqrt(pow((x2-x1), 2)+ pow(y2-y1, 2));
}

int main(){
    double x1, x2, y1, y2;
    printf("Digite as coordenadas do primeiro ponto: \n");
    scanf("%lf %lf", &x1, &y1);
    printf("\nDigite as coordenadas do segundo ponto: \n");
    scanf("%lf %lf", &x2, &y2);

    double dist = Dist(x1, y1, x2, y2);
    printf("A distancia entre os dois pontos é: %.3lf\n", dist);

}