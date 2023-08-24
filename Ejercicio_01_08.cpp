// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 18/08/2023
// Fecha modificación: 18/08/2023
// Numero de ejericio: 8
// Problema planteado: En el estacionamiento del Megacenter se cobra 7 Bs la primera hora, si pasa de una
//hora se cobra 5 Bs adicional por hora.
//Ingrese la cantidad de horas que un vehículo está estacionado y calcule cuanto debe
//pagar.
#include <iostream>

using namespace std;

int main(){
    float horas;
    int horapasada=7;
    int i=0;
    float totalapagar=0;
    int adicional=5;
    cout<<"Ingrese la cantidad de horas"<<endl;
    cin>>horas;

    for (i=1; i<=horas; i++){
        if (horas<=1){
            totalapagar=totalapagar+horapasada;
        }
        else{
            totalapagar=totalapagar+adicional;
        }
    }
    cout<<"El total a pagar es de: "<<totalapagar<<endl;
    return 0;
}
