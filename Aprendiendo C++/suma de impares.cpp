#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n,suma,i;
     
    cout<<"Ingrese la cantidad de numeros impares que quiere que se sumen: ";
    cin>>n; 
    suma=0; 
    
    i=1;
    
    while (i<=n){
        suma=suma+2*i-1;    
        
        cout<<""<<2*i-1<<" + ";    
        i=i+1;
    } 
        
    cout<<"La suma total es: "<<suma<<""; 
    
    getch(); 
}
