// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 24/08/2023
// Fecha modificaci�n: 24/08/2023
// Numero de ejericio: 48
// Problema planteado: Dado un rango (A y B) de n�meros enteros, obtener la cantidad de n�meros pares que
//contiene dicho rango
#include <iostream>
 using namespace std;
 int main(){
     int a, b, contpares=0, contimpares=0;//intervalo
     cout<<"Ingrese el valor inferior"<<endl;
     cin>>a;
     cout<<"Ingrese el valor superior"<<endl;
     cin>>b;
     for (int i=a; i<=b; i++){
        if (i%2==0){
            contpares++;
        }
        else{
            contimpares++;
        }
     }
     cout<<"Se contaron los siguientes numeros pares:"<<contpares<<endl;
     return 0;
 }
