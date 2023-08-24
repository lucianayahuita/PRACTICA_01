// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Numero de ejericio: 7
// Problema planteado: Número amigo
#include <iostream>

using namespace std;

int main(){
    int numero1=0;
    int numero2=0;
    int i=1; //contador
    int suma1=0; //en suma1 y suma2 se almacenan la suma de sus divisores
    int suma2=0;
    cout<<"Ingrese el primer numero"<<endl;
    cin>>numero1;
    cout<<"Ingrese el segundo numero"<<endl;
    cin>>numero2;
    for (i=1; i<=numero1/2; i++){ //divide el numero por la mitad porque ningun numero se puede dividir entre otro num mayor que su mitad
        if (numero1%i==0){
            suma1=suma1+i;
        }
    }
    for (i=1; i<=numero2/2; i++){
        if (numero2%i==0){
            suma2=suma2+i;
        }
    }
    if (numero1==suma2 && numero2==suma1){
        cout<<"Los numeros son amigos"<<endl;
    }
    else{
        cout<<"Los numeros no son amigos"<<endl;
    }
    return 0;
}
