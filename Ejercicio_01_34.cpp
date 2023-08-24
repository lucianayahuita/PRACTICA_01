//// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Numero de ejericio: 34
// Problema planteado: Generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49,..., para n términos
#include<iostream>

using namespace std;

int main(){
    int i=1,digito ,c;
    int n=8;
    for (i=1; i<n; i++){
        digito=n%10;
        c=digito/10;
        cout<<c<<endl;
    }
}
