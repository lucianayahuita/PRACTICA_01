//// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Numero de ejericio: 32
// Problema planteado: Leer un número entero y mostrarlo con las cifras al revés.
#include<iostream>

using namespace std;

int main(){
    int numero, i, digito, numinvertido=0;
    cout<<"Ingrese un numero"<<endl;
    cin>>numero;
    while (numero>0){
        digito=numero%10;
        numinvertido=(numinvertido*10)+digito;
        numero=numero/10;
    }
    cout<<numinvertido<<endl;
    return 0;
}
