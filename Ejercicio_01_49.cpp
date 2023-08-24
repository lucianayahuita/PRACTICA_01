// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 24/08/2023
// Fecha modificaci�n: 24/08/2023
// Numero de ejericio: 49
// Problema planteado:Escribir un programa que muestre en pantalla, con los encabezados correspondientes,
//el capital (Cn) y los intereses ganados por un capital C0 depositado a un inter�s
//compuesto I durante N a�os. C0, I y N se deben leer por teclado. La f�rmula a emplear
//es:
//Cn = C0(1+I)n
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double C0, I, Cn;
    int N;
    // Solicitar los valores de C0, I y N
    cout << "Ingrese el capital inicial (C0): ";
    cin >> C0;
    cout << "Ingrese la tasa de inter�s compuesto (I): ";
    cin >> I;
    cout << "Ingrese el n�mero de a�os (N): ";
    cin >> N;
    Cn = C0 * pow(1 + I, N);
    double intereses = Cn - C0;
    cout << "Capital inicial (C0): " << C0 << endl;
    cout << "Tasa de inter�s compuesto (I): " << I << endl;
    cout << "N�mero de a�os (N): " << N << endl;
    cout << "Capital final (Cn): " << Cn << endl;
    cout << "Intereses ganados: " << intereses << endl;
    return 0;
}

