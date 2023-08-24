// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Numero de ejericio: 19
// Problema planteado: Convertir coordenadas polares en rectangulares
#include <iostream>
#include <cmath>
#define PI 3.14159
using namespace std;

int main(){
    double radio, angulo, coordenadax, coordenaday;
    cout<<"Ingrese el radio de la coordenada polar"<<endl;
    cin>>radio;
    cout<<"Ingrese el angulo en GRADOS de la coordenada polar"<<endl;
    cin>>angulo;
    //conversion de grados a radianes
    double radianes=angulo*PI/180.0;
    coordenadax=radio*(cos(radianes));
    coordenaday=radio*(sin(radianes));
    cout<<"Las coordenadas en x son "<<coordenadax<<endl;
    cout<<"Las coordenadas en y son "<<coordenaday<<endl;
    return 0;
}
