// Importar librerias
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{

    float a, b, c; /*Se define el tipo de dato_entrada*/
    float p, at;   /*Se define el tipo de dato_salida*/

    // Se pide el ingreso de los datos
    cout << "Ingrese el valor del lado a: ";
    cin >> a;
    cout << "Ingrese el valor del lado b: ";
    cin >> b;
    cout << "Ingrese el valor del lado c: ";
    cin >> c;

    // Se calcula el area del triangulo
    p = (a + b + c) / 2.0;

    // Se muestra por pantalla el resultado
    at = sqrt(p * (p - a) * (p - b) * (p - c));

    // Se muestra por pantalla el resultado
    cout << "El area del triangulo es: " << at;

    // Se detiene la ejecucion del programa
    getch();
}
/* otra forma:
    cout<<"El area del triangulo de "<<a<<", "<<b<<", "<<c<<" es: "<<at;
    getch();*/

// Mismo ejercicio pero con el metodo if

/*
float a,b,c;
float p,at,r;

cout<<"Ingrese el valor del lado a: ";cin>>a;
cout<<"Ingrese el valor del lado b: ";cin>>b;
cout<<"Ingrese el valor del lado c: ";cin>>c;

p=(a+b+c)/2.0;
r=p*(p-a)*(p-b)*(p-c);

if (r>=0){
    at=sqrt(r);
    cout<<at;
    }else{
        cout<<"No existe tal triangulo...!";
        }

    getch();*/