//// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 24/08/2023
// Fecha modificaci�n: 24/08/2023
// Numero de ejericio: 46
// Problema planteado: La empresa �Limbo S.A.�, empresa de seguros tiene contratados a N vendedores. Cada
//uno hace tres ventas a la semana. Su pol�tica de pagos es que un vendedor recibe un
//sueldo base, y un 10% extra por comisiones de sus ventas. El gerente de su compa��a
//desea saber cu�nto dinero obtendr� en la semana cada vendedor por concepto de
//comisiones por las tres ventas realizadas, y cuanto tomando en cuenta su sueldo base y
//sus comisiones.
#include <iostream>
 using namespace std;
 int main(){
     int n;
     float venta1, venta2, venta3, comision, total, sb;
     cout<<"Ingrese el numero de vendedores"<<endl;
     cin>>n;
     for (int i=1; i<=n; i++){
        cout<<"Ingrese su sueldo base"<<endl;
        cin>>sb;
        cout<<"Ingrese el precio de su primera venta"<<endl;
        cin>>venta1;
        cout<<"Ingrese el precio de su segunda venta"<<endl;
        cin>>venta2;
        cout<<"Ingrese el precio de su tercera venta2"<<endl;
        cin>>venta3;
        comision=(venta1+venta2+venta3)*0.10;
        total=comision+sb;
        cout<<"El sueldo base es de: "<<sb<<endl;
        cout<<"Con su comision seria de: "<<total<<endl;
     }
     return 0;
 }
