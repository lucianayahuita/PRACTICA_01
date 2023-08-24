//// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Numero de ejericio: 44
// Problema planteado: La comercial “La Estrella del Sur” vende n productos en un día, de los cuales factura al
//precio de cada uno con un IVA del 13% y si el monto final se excede en 2500 Bs, se
//aplica un descuento del 5%. Obtener la suma total de las ventas realizadas en el día y
//calcular el pago del IVA del 13% al servicio de Impuestos Nacionales.
#include<iostream>

 using namespace std;

 int main(){
     int n;
     float caja=0.0;
     float cajaiva=0.0;
     float a;
     float iva;
     cout<<"Ingrese cuantas veces vendio"<<endl;
     cin>>n;
     for (int i=1;i<=n;i++){
        cout<<"Ingrese cuanto vale el articulo vendido"<<endl;
        cin>>a;
        iva=(a*0.13);
        cajaiva=cajaiva+iva;
        caja=caja+a;
        if (caja>2500){
            caja=(caja-(caja*0.05));
            cout<<"El iva del producto es: "<<iva<<endl;
        }
     }
     cout<<"El total es: "<<caja;
     cout<<"El total de iva es "<<cajaiva;
     return 0;
 }
