#include <iostream>

using namespace std;

int opcion;
int main(int argc, char const *argv[])
{
    system("cls");
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Salir"<<endl;
    cout << "Elije una opcion: ";cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Has elejido Sumar.\n";

    case 2:
        cout << "Has elejido Restar.\n";

    case 3:
        cout << "Has elejido Multiplicar.\n";
    
    case 4:
        system("pause");
        return EXIT_SUCCESS;

    default:
        cout << "Opcion no valida.\a\n";  
    }
}