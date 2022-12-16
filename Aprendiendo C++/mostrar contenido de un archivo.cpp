#include <iostream>
#include <iomanip.h>
#include <conio.h>
#include <fstream>
#include <stdio.h>
#include <ctype.h>
#include <fcntl.h>

using namespace std;

struct dato
{
    char nombre[30];
    char codigo[10];
    char edad[2];
};
dato alumno[20];

main()
{
    char nombre[30];
    char codigo[10];
    char edad[2];
    gotoxy(15, 1);
    cout << "Lectura de datos de los alumnos";
    gotoxy(15, 2);
    cout << "=======================================";
    fstream archivo;
    int i = 0;
    archivo.open("archivo.txt", ios::binary | ios::in);
    cout << endl
         << "Lista de alumnos" << endl;
    for (;;)
    {
        if (archivo.eof())
            break;
        archivo.read(alumno[i].nombre, sizeof(alumno[i].nombre));
        archivo.read(alumno[i].codigo, sizeof(alumno[i].codigo));
        archivo.read(alumno[i].edad, sizeof(alumno[i].edad));
        cout << "" << alumno[i].nombre << "\t" << alumno[i].codigo << "\t" << alumno[i].edad << "";
        cout << endl;
        i = i + 1;
    }
    archivo.close();
    gotoxy(20, 22);
    cout << "Gracias...";
    getch();
}