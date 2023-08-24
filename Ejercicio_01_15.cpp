//// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Numero de ejericio: 15
// Problema planteado: Escriba la sucesion de numeros fibonacci
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int numero, a=0, b=1, c=1;
    cout<<"Ingrese hasta que numero desea ver la sucesión fibonacci"<<endl;
    cin>>numero;
    cout<<"1 ";
    for (int i=1; i<numero;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    cout<<"\n";
    system("pause");
    return 0;
}
