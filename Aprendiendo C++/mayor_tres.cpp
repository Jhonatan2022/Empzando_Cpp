#include <iostream>

using namespace std;

int a,b,c;
int main(int argc, char const *argv[])
{
    cout<<"Ingrese un numero: "; cin>>a;
    cout<<"Ingrese un numero: "; cin>>b;
    cout<<"Ingrese un numero: "; cin>>c;

    if (a>b && a>c){
        cout<<"El mayor de todos es: "<<a<<endl;
    }
    else if (b>a && b>c){
        cout<<"El mayor de todos es: "<<b<<endl;
    }
    else if(c>a && c>b){
        cout<<"El mayor de todos es: "<<c<<endl;
    }

    system("pause");
    return EXIT_SUCCESS;
}
