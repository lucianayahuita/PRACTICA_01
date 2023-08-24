//// Materia: Programaci�n I, Paralelo 1
// Autor: Luciana Cecilia Yahuita Lazarte
// Fecha creaci�n: 18/08/2023
// Fecha modificaci�n: 18/08/2023
// Numero de ejericio: 10
// Problema planteado: . Realice un programa que detecte si una letra ingresada el vocal o consonante. Si no es
//ninguna letra que diga que es car�cter especial.
#include <iostream>
#include <cctype>
using namespace std;

int main(){
    char letra;
    cout<<"Ingrese una letra"<<endl;
    cin>>letra;
    letra = std::tolower(letra); //para convertir las letras en min�sculas
    if (letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'){
        cout<<"Es una vocal"<<endl;
    }
    else{
        if (isalpha(letra)){ //funcion utilizada para verificar si es una letra del alfabeto o un caracter especial
            cout<<"Es una consonante"<<endl;
        }
        else{
            cout<<"Es un caracter especial!"<<endl;
        }
    }
    return 0;
}
