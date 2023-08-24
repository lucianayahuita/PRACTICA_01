// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Numero de ejericio: 5
// Problema planteado: Calcular la distancia entre dos puntos P1 y P2 localizados en un plano X Y
//raíz cuadrada ( (x2-x1) elevado 2 + (y2-y1) elevado 2 )
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float x1=0;
    float x2=0;
    float y1=0;
    float y2=0;
    float distancia=0;
    cout<<"Ingrese las coordenadas en x del primer punto"<<endl;
    cin>>x1;
    cout<<"Ingrese las coordenadas en y del primer punto"<<endl;
    cin>>y1;
    cout<<"Ingrese las coordenadas en x del segundo punto"<<endl;
    cin>>x2;
    cout<<"Ingrese las coordenadas en y del segundo punto"<<endl;
    cin>>y2;
    //calculo de la distancia con la formula raíz cuadrada ( (x2-x1) elevado 2 + (y2-y1) elevado 2 )
    distancia=sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout<<"La distancia es de: "<<distancia<<endl;
    return 0;
}
