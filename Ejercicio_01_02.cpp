// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Numero de ejericio: 2
// Problema planteado: Volumen de una esfera
#include <iostream>
#include <cmath>
#define PI 3.14159
using namespace std;

int main(){
    float radio, volumen;
    cout<<"Ingrese el radio de la esfera"<<endl;
    cin>>radio;

    //calculo del volumen mediante la formula 4/3*pi*r^3
    volumen=(4*PI*pow(radio,3))/3;
    cout<<"El volumen de la esfera es de: "<<volumen<<endl;
    return 0;
}
