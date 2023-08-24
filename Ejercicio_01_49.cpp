// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Numero de ejericio: 49
// Problema planteado:Escribir un programa que muestre en pantalla, con los encabezados correspondientes,
//el capital (Cn) y los intereses ganados por un capital C0 depositado a un interés
//compuesto I durante N años. C0, I y N se deben leer por teclado. La fórmula a emplear
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
    cout << "Ingrese la tasa de interés compuesto (I): ";
    cin >> I;
    cout << "Ingrese el número de años (N): ";
    cin >> N;
    Cn = C0 * pow(1 + I, N);
    double intereses = Cn - C0;
    cout << "Capital inicial (C0): " << C0 << endl;
    cout << "Tasa de interés compuesto (I): " << I << endl;
    cout << "Número de años (N): " << N << endl;
    cout << "Capital final (Cn): " << Cn << endl;
    cout << "Intereses ganados: " << intereses << endl;
    return 0;
}

