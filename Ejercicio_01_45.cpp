//// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Numero de ejericio: 45
// Problema planteado: Calcular la suma de los cuadrados de los primeros 100 primeros números compuestos.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int sumaCuadrados = 0;
    for (int num = 4; num <= 100; ++num) { // Comenzamos desde 4 ya que 1, 2 y 3 no son compuestos
        bool esCompuesto = false;
        for (int i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) {
                esCompuesto = true;
                break;
            }
        }
        if (esCompuesto) {
            sumaCuadrados += num * num;
        }
    }
    cout << "La suma de los cuadrados de los primeros 100 números compuestos es: " << sumaCuadrados << endl;
    return 0;
}
