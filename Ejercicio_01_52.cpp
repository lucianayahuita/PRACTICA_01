// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Numero de ejericio: 52
// Problema planteado: Obtener xy utilizando productos sucesivos, tanto x como y son enteros positivos o
//negativos.

#include <iostream>

using namespace std;

int main() {
    int a, b, producto;
    cout<<"Ingresa el primer numero"<<endl;
    cin>>a;
    cout<<"Ingresa el segundo numero"<<endl;
    cin>>b;
    int i=0;
    int c=0;
    while(i<a){
        c=c+b;
        i+=1;
    }
    cout<<"El producto es de: "<<c<<endl;
    return 0;
}
