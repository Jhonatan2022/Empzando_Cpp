#include <iostream>

using namespace std;

int numero, cantidad;

int main(int argc, char const *argv[])
{
    cout <<  "Ingrese un numero: ";
    cin >> numero;

    //El usuario podra ingresar los números que desee siempre y cuendo no sobrepasen 30
    while(numero <= 30)
    {
        cout <<  "Ingrese un numero_ ";
        cin >> numero;
    }
   

    while (cantidad < 5)
    {
        cout << "Se encuentra " << cantidad + 1 << "\tveces" << endl;
        cantidad++;
    } 
    
    system("PAUSE");
    return EXIT_SUCCESS;
}


