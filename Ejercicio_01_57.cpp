// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Numero de ejericio: 57
// Problema planteado: . Encontrar cuadrados perfectos en el rango 1 a n

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout<<"Ingrese un numero cualquiera"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++) {
        int sqrt_i = static_cast<int>(sqrt(i));//convierte el resultado de la raiz en un entero
        if (sqrt_i * sqrt_i == i) {
            cout << i << " ";
        }
    }
    return 0;
}
