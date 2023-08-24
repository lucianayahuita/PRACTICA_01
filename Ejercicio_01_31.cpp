//// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Numero de ejericio: 31
// Problema planteado: Leer dos números y verificar si uno es múltiplo del otro o no lo es
#include <iostream>

using namespace std;

int main(){
    int numero1, numero2;
    cout<<"Ingrese un primer numero por favor"<<endl;
    cin>>numero1;
    cout<<"Ingrese un segundo numero por favor"<<endl;
    cin>>numero2;
    if (numero1>numero2){
        if (numero1%numero2==0){
            cout<<numero1<<" es multiplo "<<numero2;
        }
    }
    else{
        cout<<"Verifica que el primer numero sea mayor que el segundo"<<endl;
    }
    return 0;
}
