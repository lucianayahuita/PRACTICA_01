// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Numero de ejericio: 54
// Problema planteado: Hallar la raíz cuadrada de un número por aproximaciones, utilizar:
#include <iostream>
using namespace std;

int main() {
    double numero;
    cout << "Ingrese un número para calcular su raiz cuadrada: ";
    cin >> numero;
    if (numero < 0) {
        cout << "No se puede calcular la raíz cuadrada de un número negativo." << endl;
    } else {
        double estimacion = numero / 2; //estimacion inicial
        for (int i = 0; i < 10; ++i) { // Realizar 10 iteraciones
            estimacion = 0.5 * (estimacion + numero / estimacion); // Aplicar el algoritmo babilónico
        }

        cout << "La raíz cuadrada de " << numero << " es aproximadamente: " << estimacion << endl;
    }
    return 0;
}

