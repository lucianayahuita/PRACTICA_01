// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Numero de ejericio: 20
// Problema planteado: Leer tres números enteros y si son diferentes entre sí determine con algún mensaje el
//menor
#include <iostream>

using namespace std;

int main(){
    int numero1, numero2, numero3;
    cout<<"Ingrese un primer numero"<<endl;
    cin>>numero1;
    cout<<"Ingrese un segundo numero"<<endl;
    cin>>numero2;
    cout<<"Ingrese un tercer numero"<<endl;
    cin>>numero3;
    if (numero1!=numero2 && numero2!=numero3 && numero3!=numero1){
        if (numero1<numero2 && numero1<numero2){
            cout<<"El menor es el numero: "<<numero1;
        }
        if(numero2<numero1 && numero2<numero3){
            cout<<"El menor es el numero: "<<numero2;
        }
        if (numero3<numero1 && numero3<numero2){
            cout<<"El menor es el numero: "<<numero3;
        }
    }
    else{
        cout<<"Ingrese 3 VALORES DIFERENTES"<<endl;
    }
    return 0;
}

