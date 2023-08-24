// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Numero de ejericio: 4
// Problema planteado: Conversión de temperatura de grados centígrados a Kelvin

#include <iostream>

using namespace std;

int main(){
    float kelvin=0;
    float centigrados=0;
    cout<<"Ingrese la temperatura en grados centigrados"<<endl;
    cin>>centigrados;

    //calculamos la conversion con la formula k=c+273.15
    kelvin=centigrados+273.15;
    cout<<"La equivalencia en grados kelvin es de: "<<kelvin<<endl;
    return 0;
}
