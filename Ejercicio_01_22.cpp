// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 23/08/2023
// Fecha modificaci�n: 23/08/2023
// Numero de ejericio: 22
// Problema planteado:En una f�brica de computadoras se planea ofrecer a los clientes un descuento que
//depender� del n�mero de computadoras que compre. Si las computadoras son menos
//de cinco se les dar� un 10% de descuento sobre el total de la compra; si el n�mero de
//computadoras es mayor o igual a cinco pero menos de diez se le otorga un 20% de
//descuento; y si son 10 o m�s se les da un 40% de descuento. El precio de cada
//computadora es un valor que el usuario ingrese desde el teclado.
#include <iostream>

using namespace std;

int main(){
    float numerocomputadoras, precio=0, sumadeprecios=0, descuento, totalapagar;
    cout<<"Ingrese el numero de computadoras que compro"<<endl;
    cin>>numerocomputadoras;
    for (int i=1;i<=numerocomputadoras;i++){
        cout<<"Ingrese el precio por computadora"<<endl;
        cin>>precio;
        sumadeprecios=sumadeprecios+precio;
    }
    if (numerocomputadoras<5){
        descuento=sumadeprecios*0.10;
        totalapagar=sumadeprecios-descuento;
        cout<<"Como compro menos de 5 computadoras se le aplico un 10% de descuento y su total a pagar es de: "<<totalapagar<<endl;
    }
    if (numerocomputadoras>=5 && numerocomputadoras<10){
        descuento=sumadeprecios*0.20;
        totalapagar=sumadeprecios-descuento;
        cout<<"Como compro menos de 10 computadoras se le aplico un 20% de descuento y su total a pagar es de: "<<totalapagar<<endl;
    }
    if (numerocomputadoras>=10){
        descuento=sumadeprecios*0.40;
        totalapagar=sumadeprecios-descuento;
        cout<<"Como compro mas de 10 computadoras se le aplico un 40% de descuento y su total a pagar es de: "<<totalapagar<<endl;
    }
    return 0;
}
