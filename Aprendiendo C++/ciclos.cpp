#include <iostream>

using namespace std;

int notas, cantidad;
int i = 1;
float a, b, c;

int main(int argc, char const *argv[])
{
    
	cout<<"Cuantas notas son: ";
	cin>>notas;
	while(i <= notas)
	{
		cout<<"Escribe las notas: ";
		cin>>a;
		b = b + a;
		i++;
	}
	c = b/notas;
	if (c >= 3.5 and c <= 5.0){
		cout<<"Aprobado: "<<c;
	}
	if (c >= 3.0 and c < 3.5){
		cout<<"En este momento no tiene aprobada la materia de tecnología, pero tiene la oportunidadde recuperar: "<<c;
	}
	if (c < 3.0){
		cout<<"No aprobado: "<<c;
	}

    while (cantidad < 5)
    {
        cout << "Se encuentra " << cantidad + 1 << "\tveces" << endl;
        cantidad++;
    } 
    
    system("PAUSE");
    return EXIT_SUCCESS;
}


