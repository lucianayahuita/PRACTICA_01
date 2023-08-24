//// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Numero de ejericio: 16
// Problema planteado: Leer un número entero que represente un valor en segundos y convierta en: horas,
//minutos y segundos.
#include <iostream>
using namespace std;

int main(){
    int segundos;
    float horas, minutos;
    cout<<"Ingrese un numero ENTERO que represente un valor en segundos"<<endl;
    cin>>segundos;
    minutos=segundos/60;
    horas=minutos/60;
    cout<<"Los segundos que ingreso son: "<<segundos<<" Que corresponden a "<<minutos<<" minutos "<< " y "<<horas<<" horas "<<endl;
    return 0;
}
