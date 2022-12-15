#include <iostream>
#include <conio.h> 

using namespace std;

main() { 
    int a,b,c,temp; 
    
    cout<<"Ingrese un numero: ";
    cin>>a; 
    cout<<"Ingrese un segundo numero: ";
    cin>>b; 
    cout<<"Ingrese un tercer numero: ";
    cin>>c; 
    
    if (a>b){
        temp=a;    
        a=b;    
        b=temp;}
    if (a>c){
        temp=a;    
        a=c;    
        c=temp;} 
    if (b>c){
        temp=b;   
        b=c;    
        c=temp;} 
         
    cout<<"Ordenado: "<<a<<" , "<<b<<" , "<<c<<""; 
        
    getch();         
}