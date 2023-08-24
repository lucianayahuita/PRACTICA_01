//// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 18/08/2023
// Fecha modificación: 18/08/2023
// Numero de ejericio: 12
// Problema planteado: . Mostrar los primeros 100 números primos.
#include <iostream>

using namespace std;

int main(){
    int i=2; //contador del bucle padre
    int j=1; //contador del bucle hijo
    int k=0;//contador de primos
    while(i<=545){
        for(j=1; j<=i; j++){
            if (i%j==0){
                k++;
            }
        }
        if (k==2){
            cout<<i<<endl;
        }
        i++;
        j=1;
        k=0;
    }
    return 0;
}
