//// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Numero de ejericio: 40
// Problema planteado: Disponemos de una máquina que puede dar cambios con 5 tipos de monedas distintas:
//5 Bs. 1 Bs. 0.50 Bs. 0.20 Bs. y 0.10 Bs.. Realizar el programa en el que dado el precio
//del artículo y la cantidad en bolivianos entregada por el consumidor nos indique el
//cambio a entregar empleando el menor número posible de monedas.

#include<iostream>

using namespace std;

int main(){
    float precio, valor_bs, totalapagar;
    int moneda5,moneda1,moneda050,moneda020, moneda010;
    cout<<"Ingrese el precio del articulo"<<endl;
    cin>>precio;
    cout<<"Ingrese el valor de bs que entrego"<<endl;
    cin>>valor_bs;
    totalapagar=valor_bs-precio;
    moneda5=totalapagar/5;
    totalapagar=totalapagar-5*moneda5;
    moneda1=totalapagar/1;
    totalapagar=totalapagar-1*moneda1;
    moneda050=totalapagar/0.50;
    totalapagar=totalapagar-0.50*moneda050;
    moneda020=totalapagar/0.20;
    totalapagar=totalapagar-0.20*moneda020;
    moneda010=totalapagar;
    cout<<"La cantidad en monedas de 5 es: "<<moneda5<<endl;
    cout<<"La cantidad en monedas de 1 es: "<<moneda1<<endl;
    cout<<"La cantidad en monedas de 0.5 es: "<<moneda050<<endl;
    cout<<"La cantidad en monedas de 0.20 es: "<<moneda020<<endl;
    cout<<"La cantidad en monedas de 0.10 es: "<<moneda010<<endl;
    return 0;
}
