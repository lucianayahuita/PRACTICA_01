// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 24/08/2023
// Fecha modificaci�n: 24/08/2023
// Numero de ejericio: 50
//Problema Planteado: . Escribe una funci�n que tome 3 par�metros: dos de tipo enteros y uno de tipo car�cter.
//La funci�n deber� sumar, restar, multiplicar o dividir los valores de los dos primeros
//par�metros dependiendo del c�digo indicado en el tercer par�metro, y devolver el
//resultado.
#include <iostream>
using namespace std;

int main() {
    int a, b; // n�meros ingresados de tipo enteros
    float c;
    string op; // Usar string en lugar de char para comparar cadenas

    cout << "Ingrese un primer par�metro ENTERO que sea el MAYOR" << endl;
    cin >> a;
    cout << "Ingrese un segundo par�metro ENTERO" << endl;
    cin >> b;
    cout << "Ingrese si quiere suma, resta, multiplicaci�n o divisi�n" << endl;
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
        cout << "La multiplicaci�n es: " << c << endl;
    }
    else if (op == "division") {
        if (b != 0) {
            c = static_cast<float>(a) / b; // Convertir 'a' a float para la divisi�n
            cout << "La divisi�n es: " << c << endl;
        } else {
            cout << "No se puede dividir por cero." << endl;
        }
    }
    else {
        cout << "Operaci�n no v�lida" << endl;
    }

    return 0;
}

