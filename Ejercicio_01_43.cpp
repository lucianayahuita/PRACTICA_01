//// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 24/08/2023
// Fecha modificaci�n: 24/08/2023
// Numero de ejericio: 43
// Problema planteado: Obtener el promedio de n�meros enteros positivos introducidos por teclado, el
//algoritmo se detiene cuando se lea un n�mero negativo o cero.
#include<iostream>

 using namespace std;

 int main(){
     float suma=0.0;
     float contador=0.0;
     float n=1.0;
     float promedio;
     float con;
     while (n!=0 && n>0){
        cout<<"Ingrese un numero"<<endl;
        cin>>n;
        suma+=n;
        if (n!=0 && n>0){
            contador+=1;
        }
     }
     promedio=suma/contador;
     cout<<"El promedio es de: "<<promedio;
     return 0;
 }
