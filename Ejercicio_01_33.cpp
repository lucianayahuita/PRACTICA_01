//// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Numero de ejericio: 33
// Problema planteado: Leer dos fechas y mostrar el número de días que hay de diferencia. Suponiendo todos
//los meses de 30 días.
#include<iostream>

using namespace std;

int main(){
    int dfech1, mfech1, afech1, dfech2, mfech2, afech2, diasfech1, diasfech2, diferenciatotal;
    cout<<"Ingrese el ano de la primera fecha"<<endl;
    cin>>afech1;
    cout<<"Ingrese el mes de la primera fecha"<<endl;
    cin>>mfech1;
    cout<<"Ingrese el dia de la primera fecha"<<endl;
    cin>>dfech1;
    cout<<"Ingrese el ano de la segundaa fecha"<<endl;
    cin>>afech2;
    cout<<"Ingrese el mes de la segunda fecha"<<endl;
    cin>>mfech2;
    cout<<"Ingrese el dia de la segundaa fecha"<<endl;
    cin>>dfech2;
    //calculo de la diferencia de dias que pasan desde el primero de enero hasta la fecha ingresada (o sea para cada una respectivamente)
    diasfech1=(mfech1-1)*30+dfech1;
    diasfech2=(mfech2-1)*30+dfech2;
    //diferencia total entre dias
    diferenciatotal=(afech2-afech1)*365-diasfech1+diasfech2;
    cout<<"La diferencia de dias entre esas dos fechas es de: "<<diferenciatotal<<endl;
    return 0;
}
