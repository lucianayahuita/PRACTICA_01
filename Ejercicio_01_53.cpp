// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Numero de ejericio: 53
// Problema planteado: Escriba un programa que permita al usuario obtener los valores de las funciones
//trigonométricas:
#include <iostream>
#include <math.h>
#define PI 3.14159
using namespace std;

int main() {
    float x,seno,coseno,tangente,rad;
    printf("ingresa un angulo en grados:");
    scanf("%f",&x);
    rad=x*PI/180;
    seno=sin(rad);
    coseno=cos(rad);
    tangente=tan(rad);
    printf("el seno= %.4f", seno);
    printf("el coseno= %.4f", coseno);
    printf("la tangente= %.4f", tangente);
    return 0;
}
