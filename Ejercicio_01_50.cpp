// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Numero de ejericio: 50
//Problema Planteado: . Escribe una función que tome 3 parámetros: dos de tipo enteros y uno de tipo carácter.
//La función deberá sumar, restar, multiplicar o dividir los valores de los dos primeros
//parámetros dependiendo del código indicado en el tercer parámetro, y devolver el
//resultado.
#include <iostream>
using namespace std;

int main() {
    int a, b; // números ingresados de tipo enteros
    float c;
    string op; // Usar string en lugar de char para comparar cadenas

    cout << "Ingrese un primer parámetro ENTERO que sea el MAYOR" << endl;
    cin >> a;
    cout << "Ingrese un segundo parámetro ENTERO" << endl;
    cin >> b;
    cout << "Ingrese si quiere suma, resta, multiplicación o división" << endl;
    cin >> op;

    if (op == "suma") {
        c = a + b;
        cout << "La suma es: " << c << endl;
    }
    else if (op == "resta") {
        c = a - b;
        cout << "La resta es: " << c << endl;
    }
    else if (op == "multiplicacion") {
        c = a * b;
        cout << "La multiplicación es: " << c << endl;
    }
    else if (op == "division") {
        if (b != 0) {
            c = static_cast<float>(a) / b; // Convertir 'a' a float para la división
            cout << "La división es: " << c << endl;
        } else {
            cout << "No se puede dividir por cero." << endl;
        }
    }
    else {
        cout << "Operación no válida" << endl;
    }

    return 0;
}

