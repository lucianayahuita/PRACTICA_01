// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 24/08/2023
// Fecha modificaci�n: 24/08/2023
// Numero de ejericio: 51
//Problema Planteado:Dados dos n�meros enteros, realizar el algoritmo que calcule el cociente y el resto. El
//m�todo para obtener el cociente y el resto es por restas sucesivas
#include <iostream>
using namespace std;

int main() {
    int a, b, cociente=0;
    cout<<"Ingrese un primer numero"<<endl;
    cin>>a;
    cout<<"Ingrese un segundo numero"<<endl;
    cin>>b;
    while (a>=b){
        a=a-b;
        cociente+=1;
    }
    cout<<"El cociente es: "<<cociente<<endl;
    cout<<"El resto es: "<<a<<endl;
    return 0;
}
