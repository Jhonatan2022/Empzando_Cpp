#include <iostream>
#include <math.h>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int opc;
    int valor;

    cout << "\nConversion de Base";
    cout << "\n------------------------";
    cout << "\n\n1) Decimal a hexagesimal";
    cout << "\n2) Hexagesimal a decimal";
    cout << "\n3) Decimal a octal";
    cout << "\n4) Octal a decimal";
    cout << "\n\nElija su opcion: ";
    cin >> opc;

    switch (opc)
    {

    case 1:
    {
        cout << "Introdusca valor decimal:";
        cin >> valor;
        cout << setw(6) << setbase(16) << valor << endl;
        break;
    }

    case 2:
    {
        cout << "Introdusca valor hexagesimal:";
        cin >> valor;
        cout << setw(6) << setbase(10) << valor << endl;
        break;
    }

    case 3:
    {
        cout << "Introdusca valor decimal:";
        cin >> valor;
        cout << setw(6) << setbase(8) << valor << endl;
        break;
    }

    case 4:
    {
        cout << "Introdusca valor octal:";
        cin >> valor;
        cout << setw(6) << setbase(10) << valor << endl;
        break;
    }
    }
    getch();
}