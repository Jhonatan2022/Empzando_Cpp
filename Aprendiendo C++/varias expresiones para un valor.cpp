#include <iostream> 
#include <conio.h> 
#include <math.h>  

using namespace std;

int main(int argc, char const *argv[]) { 

    // Declaracion de variables
    float t;
    double x,y,z;    
    
    // Entrada de datos
    cout<<"Ingrese el valor de t: ";cin>>t;   
    
    // Proceso
    x=pow(t,3)-8*t+4;    
    y=sin(t)+cos(2*t);   
    z=exp(3*t+7);    
    
    // Salida de datos
    cout<<"El valor de x es: "<<x;    
    cout<<"\nEl valor de y es: "<<y;           
    
    /*"\n" se utiliza para bajar de linea*/    
    cout<<"\nEL valor de z es: "<<z;    
    
    getch();     
} 