//// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 23/08/2023
// Fecha modificación: 24/08/2023
// Numero de ejericio: 30
// Problema planteado: Calcular la siguiente sucesión: 2- 3/2 +4/3-5/4....+- n+1/n
#include <iostream>

using namespace std;

int main(){
    float n,contador, suma;
    contador=1;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i%2==0){
            suma=suma-((contador+1)/contador);
        }
        else{
            suma=suma+((contador+1)/contador);
        }
        contador++;
    }

    cout << "El valor de la serie es: " << suma << endl;

    return 0;
}


