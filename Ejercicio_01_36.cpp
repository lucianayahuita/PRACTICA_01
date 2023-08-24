//// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Numero de ejericio: 36
// Problema planteado: Dadas las edades y alturas de n alumnos, mostrar la edad y la estatura media, la
//cantidad de alumnos mayores de 18 años, y la cantidad de alumnos que miden más de
//1.75 cm

#include<iostream>

using namespace std;

int main(){
    int n;
    float edadmedia, estaturamedia, contmayores=0, contaltos=0, edad, estatura, sumaedades=0, sumaestaturas=0;
    cout<<"Ingresa la cantidad de alumnos"<<endl;
    cin>>n;
    for (int i=1;i<=n;i++){
        cout<<"¿Cual es tu edad?"<<endl;
        cin>>edad;
        if (edad>18){
            contmayores=contmayores+1;
        }
        cout<<"¿Cual es tu altura?"<<endl;
        cin>>estatura;
        if (estatura>1.75){
            contaltos=contaltos+1;
        }
        sumaedades=sumaedades+edad;
        sumaestaturas=sumaestaturas+estatura;
    }
    estaturamedia=sumaestaturas/n;
    edadmedia=sumaedades/n;
    cout<<"La estatura media es de: "<<estaturamedia<<endl;
    cout<<"La edad media es de: "<<edadmedia<<endl;
    cout<<"La cantidad de alumnos con mas de 1.75 es de: "<<contaltos<<endl;
    cout<<"La cantidad de alumnos con edad mayor a 18 es de: "<<contmayores<<endl;
    return 0;
}

