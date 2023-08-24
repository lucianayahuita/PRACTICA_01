//// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Numero de ejericio: 25
// Problema planteado: Escribir un programa que permita adivinar un número que sea genere internamente al
//azar, el cual está en el rango de 0 a 50. El usuario debe adivinar este número en base a
//aproximaciones, para lo cual se dispone de 5 intentos.
#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;

int main(){
    srand(time(NULL));
    int num;
    num = rand(); //numero aleatorio
    num=rand()%51;
    int intentos=0, numero,limitesuperior=50, limiteinferior=0;
    while (intentos<5){
        cout<<"Ingrese un numero al azar DEL 0 AL 50 por favor"<<endl;
        cin>>numero;
        if (numero==num){
            cout<<"Felicidades lo adivinaste"<<endl;
            break;
        }
        if (numero>num){
            cout<<"Esta muy alto el numero esta entre: "<<limiteinferior<<"y"<<numero;
            limitesuperior=numero;
        }
        if (numero<num){
            cout<<"Esta muy bajo"<<numero<<"y"<<limitesuperior;
            limiteinferior=numero;
        }
        intentos++;
    }
    if (intentos==5){
        cout<<"Agotaste tus intentos. El numero era"<<num<<endl;
    }
    return 0;
}
