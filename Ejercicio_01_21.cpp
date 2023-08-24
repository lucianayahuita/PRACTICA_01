// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Numero de ejericio: 21
// Problema planteado: Leer un numero n y también un intervalo de cerrado de valores (a,b), si el numero está
//dentro del intervalo obtenga su cuadrado (n*n), si es menor que el límite inferior,
//obtenga su valor inverso (1/n), si está por encima del intervalo obtenga su mitad (n/2).
#include <iostream>

using namespace std;

int main(){
    float numero, limiteinferior, limitesuperior, cuadrado, valorinverso, mitad;
    cout<<"Ingrese un numero"<<endl;
    cin>>numero;
    cout<<"Ingrese el valor del limite inferior"<<endl;
    cin>>limiteinferior;
    cout<<"Ingrese el valor del limite superior"<<endl;
    cin>>limitesuperior;
    if (numero>limiteinferior && numero<limitesuperior){
        cuadrado=numero*numero;
        cout<<"Se obtuvo su cuadrado"<<cuadrado<<endl;
    }
    if (numero<limiteinferior){
        valorinverso=1/numero;
        cout<<"Se obtuvo su valor inverso"<<valorinverso<<endl;
    }
    if (numero>limitesuperior){
        mitad=numero/2;
        cout<<"Se obtuvo su mitad"<<mitad<<endl;
    }
    return 0;
}

