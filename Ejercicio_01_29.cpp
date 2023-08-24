//// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 23/08/2023
// Fecha modificaci�n: 23/08/2023
// Numero de ejericio: 29
// Problema planteado: En una llanter�a se ha establecido una promoci�n de las llantas marca �Ponchadas�,
//dicha promoci�n consiste en lo siguiente:
//Si se compran menos de cinco llantas el precio es de 300 Bs. cada una, de 250 Bs. si se
//compran de cinco a 10 y de 200 Bs. si se compran m�s de 10.
//Obtener la cantidad de dinero que una persona tiene que pagar por cada una de las
//llantas que compra y la que tiene que pagar por el total de la compra.
#include <iostream>

using namespace std;

int main(){
    float numllantas,precioporllanta,totalapagar;
    cout<<"Ingrese el numero de llantas que desea comprar"<<endl;
    cin>>numllantas;
    if (numllantas<5){
        precioporllanta=300;
    }
    if (numllantas>=5 && numllantas<=10){
        precioporllanta=250;
    }
    if (numllantas>10){
        precioporllanta=200;
    }
    totalapagar=numllantas*precioporllanta;
    cout<<"El total a pagar es de: "<<totalapagar;
    return 0;
}
