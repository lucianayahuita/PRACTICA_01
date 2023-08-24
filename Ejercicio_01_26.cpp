//// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Numero de ejericio: 26
// Problema planteado: En una tienda comercial, las amas de casa compran diversos artículos de primera
//necesidad. Una ama de casa selecciona los artículos de su preferencia pasando por los
//distintos mostradores, cada artículo elegido es colocado en un carrito de mano, para
//asegurar el pago exacto de los artículos comprados la señora anota el precio y la
//cantidad del artículo, estableciendo cuanto pagara por este articulo; así sumara los
//demás artículos. Ayude a esta ama de casa a obtener el total de sus comprar, luego de
//llenar el carrito de manos con todos los artículos de primera necesidad.
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

