// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 17/08/2023
// Fecha modificaci�n: 17/08/2023
// Numero de ejericio: 6
// Problema planteado: N�mero primo
#include <iostream>

using namespace std;

int main(){
    int numero;
    int i=1;
    int contador=0;

    cout<<"Ingrese el numero"<<endl;
    cin>>numero;
    for (i=1; i<=numero; i++){
        if (numero%i==0){
            contador=contador+1;
        }
    }
    if (contador==2){
        cout<<"El numero si es primo"<<endl;
    }
    else{
        cout<<"El numero no es primo"<<endl;
    }
    return 0;
}
