// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// Numero de ejericio: 1
// Problema planteado: �rea de un tri�ngulo
#include <iostream>

using namespace std;

int main(){
    float base,altura,area;
    cout<<"Ingrese la base del triangulo"<<endl;
    cin>>base;

    cout<<"Ingrese la altura del triangulo"<<endl;
    cin>>altura;

    //calculo del area mediante el uso de la formula b*h/2
    area=(base*altura)/2;
    cout<<"El area del triangulo es de: "<<area;
    return 0;
}
