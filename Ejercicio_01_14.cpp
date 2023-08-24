//// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 19/08/2023
// Fecha modificación: 23/08/2023
// Numero de ejericio: 14
// Problema planteado: Escriba un programa que dato varios valores numéricos, hasta el que el usuario ingrese
//el valor de cero calculo la suma y el promedio de estos.
#include <iostream>

using namespace std;

int main(){
    float suma=0, numero=1, contador=0, promedio, contadordenumingresados=0;
    while (numero!=0){
        cout<<"Ingrese un numero"<<endl;
        cin>>numero;
        suma=suma+numero;
        contador=contador+numero;
        if (numero!=0){
            contadordenumingresados=contadordenumingresados+1;
        }
    }
    promedio=suma/contadordenumingresados;
    cout<<"La suma de los numeros es de: "<<suma<<"y el promedio de estos es de "<<promedio<<endl;
    return 0;
}
