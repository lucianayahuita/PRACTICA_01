// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 24/08/2023
// Fecha modificaci�n: 24/08/2023
// Numero de ejericio: 54
// Problema planteado: Hallar la ra�z cuadrada de un n�mero por aproximaciones, utilizar:
#include <iostream>
using namespace std;

int main() {
    double numero;
    cout << "Ingrese un n�mero para calcular su raiz cuadrada: ";
    cin >> numero;
    if (numero < 0) {
        cout << "No se puede calcular la ra�z cuadrada de un n�mero negativo." << endl;
    } else {
        double estimacion = numero / 2; //estimacion inicial
        for (int i = 0; i < 10; ++i) { // Realizar 10 iteraciones
            estimacion = 0.5 * (estimacion + numero / estimacion); // Aplicar el algoritmo babil�nico
        }

        cout << "La ra�z cuadrada de " << numero << " es aproximadamente: " << estimacion << endl;
    }
    return 0;
}

