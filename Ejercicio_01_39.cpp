//// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Numero de ejericio: 39
// Problema planteado: Escriba un programa para leer dos valores enteros distintos entre si, de tal forma que
//si el primer número es mayor al segundo, genere una serie descendente, caso
//contrario muestre una serie ascendente, el factor de incremento o decremento es la
//unidad.

#include<iostream>

using namespace std;

int main(){
    int n1,n2;
    cout<<"Ingrese el primer numero"<<endl;
    cin>>n1;
    cout<<"Ingrese el segundo numero"<<endl;
    cin>>n2;
    if (n1>n2){
        for (int i=n1;i>=n2;i--){
            cout<<i<<endl;
        }
    }
    if (n2>n1){
        for (int i=n1;i<=n2;i++){
            cout<<i<<endl;
        }
    }
    return 0;
}
