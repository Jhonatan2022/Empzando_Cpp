#include <iostream>

using namespace std;

// Definimos que tipo de valor sera la variable
int a,b,c;

int main(int argc, char const *argv[])
{
    // Pedimos los valores
    cout<<"Ingrese un numero: "; cin>>a;
    cout<<"Ingrese un numero: "; cin>>b;
    cout<<"Ingrese un numero: "; cin>>c;

    // Comparamos los valores
    if (a>b && a>c){
        cout<<"El mayor de todos es: "<<a<<endl;
    }
    else if (b>a && b>c){
        cout<<"El mayor de todos es: "<<b<<endl;
    }
    else if(c>a && c>b){
        cout<<"El mayor de todos es: "<<c<<endl;
    }

    // Pausamos el programa
    system("pause");
    return EXIT_SUCCESS;
}
