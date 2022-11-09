#include <iostream>

using namespace std;

float n1, n2, n3, n4,promedio;

int main(int argc, char const *argv[])
{
    cout<<"Ingrese su primer nota: ";
    cin>>n1;

    cout<<"Ingrese su segunda nota: ";
    cin>>n2;

    cout<<"Ingrese su tercer nota: ";
    cin>>n3;

    cout<<"Ingrese su ultima nota: ";
    cin>>n4;

    promedio= (n1 + n2 + n3 + n4)/4;
    
    if (promedio>=3 && promedio<=3.4){
        cout<<"Usted tiene una oportunidad para recuperar."<<endl;
    }

    if (promedio>=3.5){
        cout<<"Usted ha aprovado la materia."<<endl;        
    }
    
    else{
        cout<<"No paso la materia"<<endl;
    }
    
    system("pause");
    return EXIT_SUCCESS;
}

