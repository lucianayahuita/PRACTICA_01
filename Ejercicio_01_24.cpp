//// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 23/08/2023
// Fecha modificaci�n: 24/08/2023
// Numero de ejericio: 24
// Problema planteado: Leer un numero entero y muestre la suma de sus dos primeros d�gitos.
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,pd,sd;
    cout << "Ingrese un n�mero: ",cin>>n;
    while (n>100){
        n=n/10;
    }
    pd=n/10;
    sd=n%10;
    cout<<"Primer digito es: "<<pd<<endl;
    cout<<"Segundo digito es: "<<sd<<endl;
    cout<<"La suma de estos es: "<<pd+sd;
    return 0;
    return 0;
}
