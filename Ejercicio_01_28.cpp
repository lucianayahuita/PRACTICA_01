//// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Numero de ejericio: 28
// Problema planteado: Multiplicar dos números naturales, sin emplear el operador de la multiplicación,
//empleando sumas sucesivas.
#include <iostream>

using namespace std;

int main(){
    int numero1, numero2, multiplicador=0, i=0;
    cout<<"Ingrese el primer numero"<<endl;
    cin>>numero1;
    cout<<"Ingrese el segundo numero"<<endl;
    cin>>numero2;
    while (i<numero1){
        multiplicador=multiplicador+numero2;
        i++;
    }
    cout<<multiplicador;
    return 0;
}
