//// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 23/08/2023
// Fecha modificaci�n: 23/08/2023
// Numero de ejericio: 26
// Problema planteado: En una tienda comercial, las amas de casa compran diversos art�culos de primera
//necesidad. Una ama de casa selecciona los art�culos de su preferencia pasando por los
//distintos mostradores, cada art�culo elegido es colocado en un carrito de mano, para
//asegurar el pago exacto de los art�culos comprados la se�ora anota el precio y la
//cantidad del art�culo, estableciendo cuanto pagara por este articulo; as� sumara los
//dem�s art�culos. Ayude a esta ama de casa a obtener el total de sus comprar, luego de
//llenar el carrito de manos con todos los art�culos de primera necesidad.
#include <iostream>

using namespace std;

int main(){
    float cantidadarticulos,pagoporarticulo,cantidadproducto=0, totalapagar,precio;
    cout<<"Ingrese la cantidad de articulos de primera necesidad"<<endl;
    cin>>cantidadarticulos;
    for (int i=1; i<=cantidadarticulos; i++){
        cout<<"Ingrese el precio de ese articulo"<<endl;
        cin>>precio;
        cout<<"Ingrese la cantidad del producto"<<endl;
        cin>>cantidadproducto;
        pagoporarticulo=precio*cantidadproducto;
        totalapagar+=pagoporarticulo;
    }
    cout<<"El total de sus compras es de: "<<totalapagar<<endl;
    return 0;
}

