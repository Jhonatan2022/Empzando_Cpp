#include <iostream>

using namespace std;

// Declaracion de variables
int notas, cantidad;
int i = 1;
float a, b, c;

int main(int argc, char const *argv[])
{

	// Ingreso de datos
	cout << "Cuantas notas son: ";
	cin >> notas;

	// Proceso
	while (i <= notas)
	{

		// Ingreso de datos
		cout << "Escribe las notas: ";
		cin >> a;

		// Proceso
		b = b + a;
		i++;
	}

	// Salida de datos
	c = b / notas;

	// Proceso
	if (c >= 3.5 and c <= 5.0){

		// Salida de datos
		cout << "Aprobado: " << c;
	}

	// Proceso
	if (c >= 3.0 and c < 3.5){

		// Salida de datos
		cout << "En este momento no tiene aprobada la materia de tecnología, pero tiene la oportunidadde recuperar: " << c;
	}

	// Proceso
	if (c < 3.0){

		// Salida de datos
		cout << "No aprobado: " << c;
	}

	// Se detiene la ejecucion del programa
	while (cantidad < 5)
	{
		// Salida de datos
		cout << "Se encuentra " << cantidad + 1 << "\tveces" << endl;
		cantidad++;
	}

	// Se detiene la ejecucion del programa
	system("PAUSE");
	return EXIT_SUCCESS;
}
