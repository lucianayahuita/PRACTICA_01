//// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Numero de ejericio: 27
// Problema planteado: Crear un programa que indique si un número es perfecto o no, se dice que un número
//es perfecto si la suma de sus divisores es igual al número.
//Por ejemplo 6 tiene como divisores 1,2 y 3., entonces 1+2+3 =6 el número 6 es
//perfecto, si el número es 9 tiene como divisores 1, 3, entonces 1+3=4 no es perfecto
#include <iostream>

using namespace std;

int main(){
    int numero, sumadedivisores=0;
    cout<<"Ingrese un numero"<<endl;
    cin>>numero;
    for (int i=1;i<numero;i++){
        if (numero%i==0){
            sumadedivisores=sumadedivisores+i;
        }
    }
    if (numero==sumadedivisores){
        cout<<"El numero es perfecto!"<<endl;
    }
    else{
        cout<<"El numero no es perfecto"<<endl;
    }
    return 0;
}
