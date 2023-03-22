#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    // Declaración de variables
    int n,suma,i;
     
    // Pedimos los datos
    cout<<"Ingrese la cantidad de numeros impares que quiere que se sumen: ";
    cin>>n; 
    suma=0; 
    
    i=1;
    
    // Declaramos un ciclo para calcular los valores
    while (i<=n){
        suma=suma+2*i-1;    
        
        cout<<""<<2*i-1<<" + ";    
        i=i+1;
    } 
        
    // Mostramos el resultado
    cout<<"La suma total es: "<<suma<<""; 
    
    getch(); 
}
