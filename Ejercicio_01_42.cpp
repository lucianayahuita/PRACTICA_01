//// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Numero de ejericio: 42
// Problema planteado: En una granja se requiere determinar el promedio de calidad de las n gallinas que hay
//en la granja. La calidad de cada gallina se obtiene según la fórmula:
//Calidad = (peso de la gallina * altura de la gallina)/Numero de huevos que pone
#include<iostream>

 using namespace std;

 int main(){
     int n_gallinas;
     float peso, altura, promedio_calidad, calidad, suma_calidad=0.0, numero_huevos;
     cout<<"Ingrese la cantidad de gallinas"<<endl;
     cin>>n_gallinas;
     for (int i=1; i<=n_gallinas; i++){
        cout<<"Ingrese el peso de la gallina"<<endl;
        cin>>peso;
        cout<<"Ingrese la altura de la gallina"<<endl;
        cin>>altura;
        cout<<"Ingrese el numero de huevos que pone"<<endl;
        cin>>numero_huevos;
        calidad=(peso*altura)/numero_huevos;
        suma_calidad+=calidad;
     }
     promedio_calidad=(suma_calidad/n_gallinas);
     cout<<"El promedio de calidad de las gallinas es de: "<<promedio_calidad<<endl;
     return 0;
 }
