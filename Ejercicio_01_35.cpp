//// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 24/08/2023
// Fecha modificaci�n: 24/08/2023
// Numero de ejericio: 35
// Problema planteado: . Un supermercado decide efectuar una promoci�n de descuentos por el valor de las
//compras que efect�an sus clientes, esta promoci�n se basa en las siguientes
//condiciones:
//Si el total de ventas es < 100 Bs. no se aplica ning�n descuento
//Si el total de ventas es de 100 Bs o m�s se aplica un 5% de descuento
//Si el total de ventas es 500 Bs o m�s se aplica un 8% de descuento
//Leer las compras efectuadas por n clientes y aplicar los descuentos para obtener el
//total de ventas efectuadas y el total de ventas con el descuento respectivo.
#include<iostream>

using namespace std;

int main(){
    int n;
    float totalventas, descuento, totalapagar, total;
    cout<<"Ingrese el numero de clientes"<<endl;
    cin>>n;
    for (int i=1;i<=n;i++){
        cout<<"Ingrese el total de las ventas "<<endl;
        cin>>totalventas;
        if (totalventas<100){
            totalapagar=totalventas;
            cout<<"Tiene que pagar"<<totalapagar;
        }
        if (totalventas>=100 && totalventas<500){
            descuento=totalventas*0.05;
            totalapagar=totalventas-descuento;
            cout<<"Tiene que pagar"<<totalapagar;
        }
        if (totalventas>=500){
            descuento=totalventas*0.08;
            totalapagar=totalventas-descuento;
            cout<<"Tiene que pagar"<<totalapagar;
        }
    }
    return 0;
}
