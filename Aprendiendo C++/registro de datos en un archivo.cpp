// Importamos las librerias necesarias
#include <iostream>
#include <iomanip.h>
#include <conio.h>
#include <fstream>
#include <stdio.h>
#include <ctype.h>
#include <fcntl.h>

using namespace std;

// Función para mover el cursor
struct dato
{
    char nombre[30];
    char codigo[10];
    char edad[2];
};

// Función para mover el cursor
dato alumno[20];

main()
{
     // Declaración de variables
    gotoxy(15, 1);
    cout << "Amacenamiento de datos de los alumnos UNI-FIM";
    gotoxy(15, 2);
    cout << "=============================================";
    fstream archivo;

    // Declaración de variables
    int i = 0;
    char rpt;

    // Abrimos el archivo
    archivo.open("archivo.txt", ios::binary | ios::out);

    // ADeclaramos un ciclo para ingresar los datos
    for (;;)
    {
        cout << endl << "Nombre (" << i + 1 << "): ";

        gets(alumno[i].nombre);
        cout << endl
             << "Codigo(" << i + 1 << "): ";
        gets(alumno[i].codigo);
        cout << endl
             << "Edad(" << i + 1 << "): ";
        cin >> (alumno[i].edad);

          // Escribimos los datos en el archivo
        archivo.write(alumno[i].nombre, sizeof(alumno[i].nombre));
        archivo.write(alumno[i].codigo, sizeof(alumno[i].codigo));
        archivo.write(alumno[i].edad, sizeof(alumno[i].edad));

        // Preguntamos si desea ingresar otro nombre
        cout << endl << "\nDesea ingresar otro nombre? [s][n]: ";
        cin >> rpt;

        // Si la respuesta es no, salimos del ciclo
        i = i + 1;
        rpt = toupper(rpt);
        if (rpt == 'N')
            break;
    }

    // Cerramos el archivo
    archivo.close();
    cout << endl<< endl<< "Gracias...";
    getch();
}