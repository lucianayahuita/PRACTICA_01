// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 24/08/2023
// Fecha modificaci�n: 24/08/2023
// Numero de ejericio: 56
// Problema planteado: Generar para un orden n
//1 0 1 0 1
//0 1 0 1 0
//1 0 1 0 1
//0 1 0 1 0
//1 0 1 0 1


#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"Ingrese un limite"<<endl;
    cin>>n;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if ((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
    return 0;
}
