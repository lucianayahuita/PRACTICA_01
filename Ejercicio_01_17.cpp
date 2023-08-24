//// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Numero de ejericio: 17
// Problema planteado: Leer un valor en bolivianos y convierta a Euros, Dólares y Libras Esterlinas
#include <iostream>

using namespace std;

int main(){
    float bolivianos, euros, dolares, libras_esterlinas;
    cout<<"Ingrese el valor en BOLIVIANOS"<<endl;
    cin>>bolivianos;
    euros=bolivianos/7.50;
    dolares=bolivianos/6.97;
    libras_esterlinas=bolivianos/8.78;
    cout<<"Los bolivianos "<<bolivianos<<" equivalen a "<<euros<<" euros"<<endl;
    cout<<"Los bolivianos "<<bolivianos<<" equivalen a "<<dolares<<" dolares"<<endl;
    cout<<"Los bolivianos "<<bolivianos<<" equivalen a "<<libras_esterlinas<<" libras_esterlinas"<<endl;
    return 0;
}
