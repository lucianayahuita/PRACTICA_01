//// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 24/08/2023
// Fecha modificaci�n: 24/08/2023
// Numero de ejericio: 32
// Problema planteado: Leer un n�mero entero y mostrarlo con las cifras al rev�s.
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
