//// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 18/08/2023
// Fecha modificación: 18/08/2023
// Numero de ejericio: 13
// Problema planteado: Indique la cantidad de dígitos que tiene un número entero
#include <iostream>

using namespace std;

int main(){
    int numero;
    int digitos=0;
    int i=1;
    int cantidaddigitos=0;
    cout<<"Ingrese el numero"<<endl;
    cin>>numero;
    while (numero!=0){
        digitos=numero%10;
        numero=numero/10;
        cantidaddigitos++;
    }
    cout<<cantidaddigitos<<endl;
    return 0;
}
