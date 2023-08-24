//// Materia: Programación I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creación: 18/08/2023
// Fecha modificación: 24/08/2023
// Numero de ejericio: 11
// Problema planteado: Se tiene el pago de un docente de la UCB de planilla permanente y planilla contrato
//civil. Se paga por categoría de acuerdo con la siguiente tabla.Calcule el total ganado siendo el salario por hora de 150 Bs por hora
//Se debe ingresar cuantas horas a la semana pasa clases y en que categoría está
#include <iostream>
#include <cctype>
using namespace std;

int main(){
    char categoria;
    int horas, total, con;
    cout<<"Ingrese su categoria"<<endl;
    cin>>categoria;
    cout<<"Ingrese las horas trabajadas"<<endl;
    cin>>horas;
    cout<<"Ingrese 1 si es docente permanente o 2 si es contrato civil"<<endl;
    cin>>con;
    categoria = std::tolower(categoria);
    if (con==1){
        if((categoria=='A'||categoria=='a')){
            total=(horas*150)+(horas*150)*0.25;
            cout<<"Su total ganado es de "<<total<<endl;
        }
        else{
            if((categoria=='B' ||categoria=='b')){
                    total=(horas*150)+(horas*150)*0.2;
                    cout<<"Su total ganado es de "<<total<<endl;
            }
            else{
                if ((categoria=='C'||categoria=='c')){
                    total=(horas*150)+(horas*150)*0.15;
                    cout<<"Su total ganado es de "<<total<<endl;
                }
            }
        }
    }
    else{
        if ((con==2)){
            if ((categoria=='A')||(categoria=='a')){
                total=(horas*150)+(horas*150)*0.18;
                cout<<"Su total ganado es de "<<total<<endl;
            }
            else{
                if ((categoria=='B')||(categoria=='b')){
                    total=(horas*150)+(horas*150)*0.14;
                    cout<<"Su total ganado es de "<<total<<endl;
                }
                else{
                    if((categoria=='C'||categoria=='c')){
                        total=(horas*150)+(horas*150)*0.12;
                        cout<<"Su total ganado es de "<<total<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
