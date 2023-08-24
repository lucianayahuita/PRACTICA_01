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
    double horas;
    double horapasada=7.0;
    double totalapagar;
    double adicional=5.0;
    cout<<"Ingrese la cantidad de horas"<<endl;
    cin>>horas;
    if(horas<=1){
        totalapagar=horapasada;
    }
    else{
        totalapagar=horapasada+adicional*(horas-1);
    }
    cout<<"El total a pagar es de: "<<totalapagar<<endl;
    return 0;
}
