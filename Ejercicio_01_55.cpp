// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Numero de ejericio: 55
// Problema planteado:
//1 2 3 4 …………..n
//1 2 3 4….. n-1
//1 2 3 …...n-2
//……..

#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"Ingrese un limite: "<<endl;
    cin>>n;
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

