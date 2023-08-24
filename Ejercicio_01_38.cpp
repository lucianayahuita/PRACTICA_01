//// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 24/08/2023
// Fecha modificaci�n: 24/08/2023
// Numero de ejericio: 38
// Problema planteado: En el a�o 2009 el pa�s A tiene una poblaci�n de 25 millones y el pa�s B de 19.9
//millones. Las tasas de crecimiento de la poblaci�n son de 2% y 3% respectivamente.
//Desarrollar un programa para saber en qu� a�o la poblaci�n del pa�s B supera a la de
//A
#include<iostream>

using namespace std;

int main(){
    float pA=25000000.0, pB=19900000.0, ano=2009.0;
    while (pB<=pA){
        pA=pA+(pA*0.02);
        pB=pB+(pB*0.03);
        ano=ano+1;
    }
    cout<<ano<<endl;
    return 0;
}
