//// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Numero de ejericio: 37
// Problema planteado: Obtenga el factorial de un número entero sin emplear el producto.

#include<iostream>

using namespace std;

int main(){
    int numero, factorial, i, n1;
    cout<<"Ingrese el numero que desea conocer su factorial"<<endl;
    cin>>numero;
    n1=numero;
    for (int i=numero-1;i>0;i--){
        factorial=0;
        for (int j=0;j<i;j++){
            factorial+=n1;
        }
        n1=factorial;
    }
    cout<<factorial<<endl;
    return 0;
}
