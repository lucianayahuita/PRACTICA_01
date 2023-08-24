// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Numero de ejericio: 3
// Problema planteado: Promedio de notas, escriba un programa que lea N notas y saque le promedio general.
#include <iostream>

using namespace std;

int main(){
    float N_notas;
    float i=1; //contador
    float suma=0;
    float promedio=0;
    float notas=0;
    cout<<"Ingrese la cantidad de notas que desee promediar"<<endl;
    cin>>N_notas;
    while (i<=N_notas){
        cout<<"Ingrese la nota"<<endl;
        cin>>notas;
        suma=suma+notas;
        i=i+1;
    }
    promedio=suma/N_notas;
    cout<<"El promedio de notas es de: "<<promedio<<endl;
    return 0;
}
